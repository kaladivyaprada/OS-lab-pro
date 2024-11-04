#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char ch;
    FILE *fp1, *fp2;

    if (argc < 3) {
        printf("Enter at least 2 arguments: source file and destination file\n");
        return 1;  
    }

    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");

    if (fp1 == NULL) {
        printf("The file does not exist\n");
        return 1;  

    if (fp2 == NULL) {
        printf("There was a problem opening the destination file\n");
        fclose(fp1);  
        return 1; 
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    printf("Copy successful\n");
    return 0;  
}
}

