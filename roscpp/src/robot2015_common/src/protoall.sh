#! /bin/bash

rm -fr ./cpp/*
rm -fr ./c/*
rm -fr ./python/*

PROJECT_NAME=robot2015_common

protoc -I=. --cpp_out=./cpp/ *.proto
protoc-c -I=. --c_out=./c/ *.proto
protoc -I=. --python_out=./python/ *.proto

if [ ! -d "../include/$PROJECT_NAME/cpp" ]; then
  mkdir ../include/$PROJECT_NAME/cpp
fi

if [ ! -d "../include/$PROJECT_NAME/c" ]; then
  mkdir ../include/$PROJECT_NAME/c
fi

rm -fr ../include/$PROJECT_NAME/cpp/*.h
rm -fr ../include/$PROJECT_NAME/c/*.h

cp -fr ./cpp/*.h ../include/$PROJECT_NAME/cpp/
cp -fr ./c/*.h ../include/$PROJECT_NAME/c/

if [  -d "../../bms/include/$PROJECT_NAME" ]; then
  rm -fr ../../bms/include/$PROJECT_NAME/cpp/*.h
  rm -fr ../../bms/include/$PROJECT_NAME/c/*.h
  cp -fr ./cpp/*.h ../../bms/include/$PROJECT_NAME/cpp/
  cp -fr ./c/*.h ../../bms/include/$PROJECT_NAME/c/
fi

