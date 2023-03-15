//heapsort: sorting a pile of elements
#include<stdio.h>
#define SWAP(x,y)(temp=(x),(x)=(y),(y)=temp)
static void adjust(v,m,n)
     int v[],m;
     register int n;
{
  register int *b,j,k,temp;
  b=v-1;j=m;k=m*2;
  while(k<=n){
    if (k<n && b[k]<b[k+1]) ++k;
    if (b[j]<b[k]) SWAP(b[j],b[k]);
    j=k;k*=2;
  }
}
void heapsort(v,n)
     int v[],n;
{
  int *b,j,temp;b=v-1;
  for(j=n/2;j>0;j--)
    adjust(v,j,n);
  for(j=n-1;j>0;j--){
    SWAP(b[1],b[j+1]);
    adjust(v,1,j);
  }
}
int main(){
  int i,N=10,z;
  //int matr[2][3]={1,2,3,4,5,6};same as matr[2][3]={{1,2,3},{4,5,6}};
  int vec[10]={1,2,3,8,7,4,9,6,10,5};
  for(i=0;i<N;i++)
    printf("%d, ",vec[i]);printf("\n");
  heapsort(vec,N);
  for(i=0;i<N;i++)
    printf("%d, ",vec[i]);printf("\n");
  return 0;
}
