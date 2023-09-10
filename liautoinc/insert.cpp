#include <cstddef>
#include <memory>
#include <vector>
#include "liautoinc.h"
#include "record.hpp"

std::unordered_map<int, std::vector<std::pair<std::string, SignalTypeEnum>>> signalNameAndSchemaMap;
std::map<int, int> canIdSizeMap;
std::map<int,std::shared_ptr<std::vector<long>>> timeStampVec;
std::map<int,std::shared_ptr<std::vector<std::shared_ptr<std::vector<SignalValue>>>>> valuesMap;
std::vector<std::string> bin;

void Generate() {
  std::vector<std::pair<std::string, SignalTypeEnum>> schema;
  WeatherRecordFactory::make_schema(schema);

  std::vector<MockRecord> data;
  WeatherRecordFactory::make_many(data, bin);

  std::vector<std::shared_ptr<std::vector<SignalValue>>> rows;
  std::vector<long> timevec;
  int n = data.size();
  int last = bin.size() - n;
  for (int i = 0; i < n; ++i) {
    data[i].String.uint32Value += last;
    auto row = data[i].ToVec();
    rows.emplace_back(std::make_shared<std::vector<SignalValue>>(row));
    timevec.emplace_back(i);
  }

  static std::default_random_engine rnd;
  static std::uniform_int_distribution<uint32_t> rdui(0, 102);
  auto canid = rdui(rnd);

  signalNameAndSchemaMap.emplace(canid, schema);
  canIdSizeMap.emplace(canid, n);
  timeStampVec.emplace(canid, std::make_shared<std::vector<long>>(timevec));
  valuesMap.emplace(canid, std::make_shared<std::vector<std::shared_ptr<std::vector<SignalValue>>>>(rows));
}

int main() {

  Generate();
  Generate();
  Generate();
  Generate();
  {
    liautoinc::LiAutoIncClient liautoinc_client("public", "127.0.0.1:4001");
    liautoinc_client.setCanIdSignalNameList(signalNameAndSchemaMap);
    liautoinc_client.commitData(canIdSizeMap, timeStampVec, valuesMap, bin);
  }

  return 0;
}