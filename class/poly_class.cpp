/polymorphism example
#include <iostream>
using namespace std;
//base class
class Animal{
   public:
      void animalSound(){
      cout <<"This Animal makes this sound..."<<endl;}
};
//derived class
class Piggy: public Animal{
  public:
     void animalSound(){
       cout <<"The piggy says: oink oink"<<endl;
     }
};
//another derived class
class Doggie: public Animal{
  public:
     void animalSound(){
       cout <<"The doggie says: woof woof"<<endl;
     }
};
int main(){
  Animal myanimal;
  Piggy myPig;
  Doggie myDog;

  myanimal.animalSound();
  myPig.animalSound();
  myanimal.animalSound();
  myDog.animalSound();
  return 0;
}
