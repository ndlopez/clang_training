//inheritance access example
#include <iostream>
using namespace std;
class Empl{
   protected:
      int salary;
};
class Progr: public Empl{
  public:
     int bonus;
     void setSack(int jpy){
       salary=jpy;
     }
     int getSack(){
       return salary;
     }
};
int main(){
  Progr myobj;
  myobj.setSack(1200);
  myobj.bonus = 150;
  cout <<"Salary + Bonus: "<<myobj.getSack()+myobj.bonus<<endl;
  return 0;
}
