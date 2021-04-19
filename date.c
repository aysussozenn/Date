#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void){
  pid_t pid;
  
  pid=fork();
  
 if(pid<0){
   fprintf(stderr,"Fork Failed");
   return 1;
 }
 else if(pid==0){
  execlp("/bin/date","date",NULL);
 
 }
 else{
  wait(NULL);
  printf("Child Complete");
 }
return 0;
}
