#include<stdio.h>
#include<stdlib.h>
#define BUFFSIZE 256//256 byte
main(int argc,char *argv[]){
  int count =1;
  FILE *fp;
  char buff[BUFFSIZE];
  if(argc!=2){
    printf("Use: ./a.out filename\n");exit(1);
  }
  fp=fopen(argv[1],"w+");
  if(fp==NULL){
    printf("No such file\n");exit(1);
  }
  while(fgets(buff,BUFFSIZE,fp)!=NULL){
    fprintf(fp,"\n0 1 2 3 4\n");
    fprintf(fp,"%3d:%s\n",count++,buff);
  }
  fclose(fp);
  return 0;
}
