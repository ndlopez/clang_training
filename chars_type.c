#include<stdio.h>
#include<ctype.h>

int main(){
  int i=0;
  char c;
  char str[]="ASPIRE ONE";
  char var1[]="tuts";
  char var2[]="0xE";
  
  while(str[i]){
    putchar(tolower(str[i]));
    i++;
  }i=0;
  while(str[i]){
    putchar(toupper(str[i]));
    i++;
  }
  if( isxdigit(var1[0]))
    printf("\nvar1=|%s| is hexadecimal\n",var1);
  else
    printf("var1=|%s| isn't hexadecimal\n",var1);

  if( isxdigit(var2[0]))
    printf("\nvar2=|%s| is hexadecimal\n",var2);
  else
    printf("var2=|%s| isn't hexadecimal\n",var2);
  /*Other functions are isupper(str,int),islower(),
    isspace(),ispunct(),isprint(),isdigit(),iscntrl()*/
  int var1='d',var2='2',var3='\t';
  if(isalnum(var1))
    printf("var1=|%c| is alphanumeric\n",var1);
  else
    printf("var1=|%c| is not alpnum\n",var1);
  
  return(0);
}
