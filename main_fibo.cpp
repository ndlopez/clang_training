/*
Makefile should take care of compiling and executing,
However, some problems occurred at runing make all
In such case better run the 'old' fashion way
i.e.: Compile g++ main_fibo.cpp fibo.cpp fibo.h
*/
#include "fibo.h"
#include<string>
#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
  if(argc == 2){
    int value=stoul(argv[1],nullptr,10);
    static Fibonacci Fibo(value);
    Fibo.create_series();
    Fibo.get_data();
    return 0;
  }
}
