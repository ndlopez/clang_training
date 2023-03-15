//multilevel class inheritance example
#include <iostream>
using namespace std;
class myCar1{
  public:    //access specifier
    string brandy="Benz";   //attr
    void honk(){
      cout << "Beep, beep!" << endl;
    }
};
class myCar2{
  public:
     void bobeep(){
       cout << "myCar2 class!"<<endl;
     }
};
class window: public myCar1, public myCar2{};
int main() {
  window myObj;
  myObj.honk();
  myObj.bobeep();
  return(0);
}
