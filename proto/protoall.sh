#! /bin/bash


rm -fr ./cpp/*
rm -fr ./c/*
rm -fr ./python/*

PROJECT_NAME=robot2015_common

protoc -I=. --cpp_out=./cpp/ *.proto
protoc-c -I=. --c_out=./c/ *.proto
protoc -I=. --python_out=./python/ *.proto

