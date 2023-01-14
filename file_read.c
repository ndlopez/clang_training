#include<stdio.h>
#include<string.h>
#include<errno.h>

extern int errno;
int main(){
  FILE *fp;
  char c[]="This is a test file";
  char buffer[100];
  char fname[]="file_read.txt";
  
  fp=fopen(fname,"w+");
  fwrite(c,strlen(c)+1,1,fp);
  //seek to the beginning of the file
  fseek(fp,0,SEEK_SET);
  //read and display data
  fread(buffer,strlen(c)+1,1,fp);
  printf("%s\n",buffer);
  fclose(fp);

  char sc;
  fp=fopen(fname,"w+");
  sc=fgetc(fp);
  if(ferror(fp))
    printf("Error in reading from file: %s\n",fname);
  clearerr(fp);
  if(ferror(fp))
    printf("Error in reading from file: %s\n",fname);
  fclose(fp);

  fp=fopen("file.txt","r");
  if(fp==NULL){
    fprintf(stderr,"Value of errno: %d\n",errno);
    fprintf(stderr,"Error opening file: %s\n",strerror(errno));
  }
  else
    fclose(fp);
  return(0);
}
