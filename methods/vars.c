#include<stdio.h>
void func(void);
static int k=5;//global var
main(){
  while (k--){
    func();
  }
  return 0;
}
void func(void){
  static int i=5;//local var
  i++;
  printf("i is %d and count is %d\n",i,k);
}
