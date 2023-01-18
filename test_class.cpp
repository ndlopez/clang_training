//access data from private class
#include <iostream>
using namespace std;
class myCar{
  private:
    int salary;
  public:    //access specifier
    string brandy;   //attr
    string model;
    void setSack(int ss){
      salary = ss;
    }
    int getSack(){
      return salary;
    }
    //myCar(string x, string y, int z);//constructor  
};
/*myCar::myCar(string x, string y, int z){ 
    brandy=x;model=y;year=z;
}*/

int main() {
  /*myCar carObj1("Ford","Mustang",1990);
  myCar carObj2("BMW","X3",2000);
  myCar myObj;
  myObj.xyz=30.32;
  cout << carObj1.brandy << ", "<<carObj1.model<<endl;*/
  myCar myObj;
  myObj.setSack(83838);
  cout << myObj.getSack()<< endl;
  return(0);
}
