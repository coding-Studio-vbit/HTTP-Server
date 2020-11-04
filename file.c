#include<stdio.h>
#include<string.h>
#include "file.h"
int main()
{
void array(FILE *fp ,char filecontent [])
{
int i;
char message[1000];
while((i=fgetc(fp))!=EOF)
{	
fscanf(fp,"%[^\n]",message);
strcat(filecontent,message);
printf("%s \n",message);
}
i++;
}
return 0;
}
