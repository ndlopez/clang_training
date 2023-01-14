#ifndef _fibo_h_
#define _fibo_h_
#include<vector>
class Fibonacci{
 private:
  int size;
  std::vector<long> data;
 public:
  Fibonacci(int);
  void create_series(void);
  void get_data(void);
};
#endif //_fibo_h_
