#!/bin/bash

SCRPIT_ROOT_DIR=$(pwd)
DESTINATION_DIR="$SCRPIT_ROOT_DIR/cpp11"

echo $SCRPIT_ROOT_DIR
echo $DESTINATION_DIR

cp -r "${SCRPIT_ROOT_DIR}/liautoinc/liautoinc.h" "$DESTINATION_DIR/include/liautoinc.h"
cp -r "${SCRPIT_ROOT_DIR}/build/liautoinc/libliautoinc.so"  "$DESTINATION_DIR/lib/libliautoinc.so"
