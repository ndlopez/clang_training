#include <iostream>
using namespace std;
class myClass{
  public:
  void myMet(){
    cout << num << text << endl;}
     int num;
     string text;
};
class Car{
  public:
     int velo(int maxVel);
};
int Car::velo(int maxVel){
  return maxVel;
}
void myfunc(string country = "Noway"){
  cout << country <<endl;
}
void myfunc2(string fname, int year){
  cout << fname << ", Grad yr " << year << endl;
}
int summ(int x, int y){
  return 20*y+x;
}
void swapNums(int &x,int &y){
  int z=x;
  x=y;y=z;
}
int main() {
  int dat=20, num2=33;
  int *fd;
  fd=&dat;
  myClass myObj;
  myObj.num=23;
  myObj.text="some address";
  cout << "address " << *fd<<endl;
  myfunc("Sweden");
  cout << summ(34,21);
  myfunc();myfunc2("Jenny",2010);
  cout << "Before swap: "<<dat <<", "<<num2 <<endl;
  swapNums(dat,num2);
  cout << "After swap: "<<dat <<", "<<num2 <<endl;
  myObj.myMet();
  //cout << myObj.num << ", " << myObj.text<<endl;
  Car newObj;
  cout << newObj.velo(200);
  return(0);
}
