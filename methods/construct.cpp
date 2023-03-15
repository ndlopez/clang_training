//
#include<iostream>
#include<string>
using namespace std;
class myExample{
  string* ptr;
  public:
     //constructor
     myExample():ptr(new string){}
     myExample(const string& str):ptr(new string(str)){}
     //destructor
     ~myExample(){delete ptr;}
     //access content
     const string& content() const {return *ptr;}
};
int main(){
   myExample foo;
   myExample bar("Some example");
   cout <<"bar's content "<<bar.content()<<endl;
   return 0;
}
