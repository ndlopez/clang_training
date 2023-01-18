#include <iostream>
using namespace std;
class myClass{
  public:
     int vel(int maxvel);
     void meth();
     myClass(){
       cout << "Hallo!";
     }  
};
void myClass::meth(){
  cout << "Hello World!\n";
}
int myClass::vel(int maxvel){
  return maxvel;
}
int main(){
  myClass myObj;
  myObj.meth();
  myClass otherObj;
  cout << otherObj.vel(203)<<"km/h"<<endl;
  myClass nObj;
  return(0);
}
