#include "liautoinc.h"
#include <cstdint>
#include <string>
#include <random>   // std::default_random_engine, 

using liautoinc::SignalValue;
using liautoinc::SignalTypeEnum;

struct MockRecord {
  MockRecord() = default;
  MockRecord(uint32_t idx) {
    static std::default_random_engine rnd;
    static std::uniform_int_distribution<int32_t> RandInt(-100, 100);
    static std::uniform_real_distribution<double> RandDouble(0.0, 50.0);
    Int.int32Value = RandInt(rnd);
    Double.doubleValue = RandDouble(rnd);
    String.uint32Value = idx;
  }
  std::vector<SignalValue> ToVec() {
    return std::vector<SignalValue> {Int, Double, String}; 
  }

  SignalValue Int;
  SignalValue Double;
  SignalValue String;
};

class WeatherRecordFactory {
public:
  static void make_schema(std::vector<std::pair<std::string, SignalTypeEnum>> &schema) {
    std::string vname1 = "IntN";
    SignalTypeEnum datatype1 = SignalTypeEnum::int32Type;

    std::string vname2 = "DoubleN";
    SignalTypeEnum datatype2 = SignalTypeEnum::doubleType;

    std::string vname3 = "ArrayN";
    SignalTypeEnum datatype3 = SignalTypeEnum::binType;

    // column and schema
    schema = std::move(std::vector<std::pair<std::string, SignalTypeEnum>>{
      std::make_pair(vname1, datatype1),
      std::make_pair(vname2, datatype2),
      std::make_pair(vname3, datatype3)
    });
  }
  static void make_many(std::vector<MockRecord> &data, std::vector<std::string> &bin) {

    static std::default_random_engine rnd;
    static std::uniform_int_distribution<uint32_t> rdui(50, 100);

    uint32_t n = rdui(rnd);
    data.resize(n);
    for (int i = 0; i < n; i++) {
      data[i] = MockRecord(i);
      bin.push_back("[" + std::to_string(i) + "]");
    }
  };
};