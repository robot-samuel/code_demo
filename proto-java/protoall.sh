#! /bin/bash


rm -fr ./Java/*


protoc -I=. --java_out=./Java/ *.proto

