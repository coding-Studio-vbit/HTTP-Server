#include<stdio.h>
#include<string.h>
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
int main()
{
       char filecontent[12000];
	FILE *p=fopen("jabeen1.c","r");	
	array(p,filecontent);
	fclose(p);
return 0;
}

