//
//class inheritance example, 
//to paste sth in vim use: Shift + Insert
//
#include <iostream>
using namespace std;
class myCar{
  public:    //access specifier
    string brandy="Benz";   //attr
    void honk(){
      cout << "Beep, beep!" << endl;
    }
};
class vehicle: public myCar{
  public:
     string model = "SLS3";
};
int main() {
  vehicle car;
  car.honk();
  cout << car.brandy<<", "<<car.model<< endl;
  return(0);
}
