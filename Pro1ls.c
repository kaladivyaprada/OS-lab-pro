#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *DP;
    struct dirent *direntPtr;

   
    DP = opendir(argv[1]);
    if (DP == NULL) {
        perror("Error opening directory");
        return 1;
    }

    
    while ((direntPtr = readdir(DP)) != NULL) {
        printf("%s\n", direntPtr->d_name);
    }

    
    closedir(DP);
    printf("Directory listing successful\n");
    return 0;
}

