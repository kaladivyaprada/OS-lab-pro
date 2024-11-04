#include<stdio.h>
#include<dirent.h>

int main()
{
  DIR *DP;
  char dirName[50];
  struct dirent *direntPtr;
  printf("Enter the directory:");
  scanf("%s", dirName);
  
   DP = opendir(dirName); 
  if(DP == NULL){
    perror("Error opening directory");
    return 1;
    
    }
    
    while((direntPtr = readdir(DP)) !=NULL){
      printf("%s\n", direntPtr->d_name);
      }
      
   closedir(DP);
     printf("Directory listing successful\n");
     return 0;
}   
