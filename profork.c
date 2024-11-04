#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    pid_t status;
     status = fork();
       if(status < 0){
           printf("Failure in excute the Fork()\n");
       return -1;
       }
      
         else if(status == 0){
           printf("I am Child Process\n");
             printf("My PID= %d\t", getpid());
               printf("My parent PTD= %d", getppid());
               execl("/home/student/4SI24AD402/test","test", NULL);
        
                execlp("ls", "ls", NULL); 
            
             //  return 1;
               }
        else 
           printf("I am Parent\n");
            printf("My PID= %d\n", getpid());                 
           printf("My Parent PID= %d\n", getppid());
           
           wait(NULL);
           printf("My Child Completed, I am Closing Myself\n");
           
           return 0;
           }
           
          

