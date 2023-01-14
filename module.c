#include<stdio.h>
#include<math.h>

int main(){
  double x,f_part,i_part;
  x=8.123456;
  f_part=modf(x,&i_part);

  printf("Integral part = %lf\n",i_part);
  printf("Fraction part = %lf\n",f_part);
  return(0);
}
