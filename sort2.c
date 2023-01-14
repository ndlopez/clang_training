#include<stdio.h>
#include<stdlib.h>

int vals[]={88,56,10,2,25};
int cmpfunc(const void *a, const void *b){
  return (*(int *)a - *(int *)b);
}
int main(){
  int i;
  printf("Before sorting the list is: \n");
  for(i=0;i<5;i++)
    printf("%d ",vals[i]);
  qsort(vals,5,sizeof(int),cmpfunc);
  printf("\nAfter sorting the list is: \n");
  for(i=0;i<5;i++)
    printf("%d ",vals[i]);
  return(0);
}
