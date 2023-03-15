#include<stdio.h>
int main(){
  char str[]="Game theory is the mathematics study of strategy";
  FILE *fp;
  int ch;
  //1st lets write some content in the file
  fp=fopen("rewindd.txt","w");
  fwrite(str,1,sizeof(str),fp);
  fclose(fp);

  fp=fopen("rewindd.txt","r");
  while(1){
    ch=fgetc(fp);
    if(feof(fp))
      break;
    printf("%c",ch);
  }
  rewind(fp);
  printf("\n");
  while(1){
    ch=fgetc(fp);
    if(feof(fp))
      break;
    printf("%c",ch);
  }
  fclose(fp);
  printf("\nThis text is redirected to stdout\n");
  fp=freopen("rewindd.txt","w+",stdout);
  printf("This text is redirected to rewindd.txt\n");
  fclose(fp);
  return(0);
}
