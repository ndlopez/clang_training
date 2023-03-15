#include "fibo.h"
#include<iostream>
#include<vector>
using namespace std;
//This creates a Fibonacci series
void Fibonacci::create_series(void){
  data.push_back(0);
  data.push_back(1);
  for(int i=2;i<size;++i){
    data.push_back(data[i-2]+data[i-1]);
  }
}
//constructor
Fibonacci::Fibonacci(int s){
  size=s;
}
//method to print the series
void Fibonacci::get_data(void){
  for(long i:data)
    cout << i << endl;
}
