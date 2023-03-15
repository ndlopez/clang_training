#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i,n;
  time_t t;
  n=10;
  //initializes random number gen
  srand((unsigned) time(&t));
  //print 5 random numbers from 0 to 50
  for(i=0;i<n;i++)
    printf("%d\n", rand()%50);
  return(0);
}
