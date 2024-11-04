#include<stdio.h>
#include<stdlib.h>
int main(int argc ,char *argv[])
{
char ch;
FILE *fp1,*fp2;
if (argc<3)
{
printf("3 files are not created");
return 0;
}
fp1=fopen(argv[1],"r");
fp2=fopen(argv[2],"w");
if(fp1==NULL)
{
printf("The file not exist,creat a file");
return 0;

}
if(fp2==NULL)
{
printf("error in opening file2");
return 0;

}
while((ch=fgetc(fp1))!=EOF)
fputc(ch,fp2);
fclose(fp1);
fclose(fp2);
printf("copy successful");
return 0;
}
