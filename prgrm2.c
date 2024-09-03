#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int i,j,k;
char*text=(char*)malloc(sizeof(char));
char*pattern=(char*)malloc(sizeof(char));
char*replace=(char*)malloc(sizeof(char));
printf("enter text:");
scanf(" %[^\n]",text);
printf("enter the pattern:");
scanf(" %[^\n]",pattern);
printf("enter the replace string:");
scanf(" %[^\n]",replace);
int textlength=strlen(text);
int patternlength=strlen(pattern);
int replacelength=strlen(replace);
for(i=0;i<=textlength-patternlength;i++)
{
for(j=0;j<patternlength;j++)
{
if(text[i+j]!=pattern[j])
{
break;
}}
if(j==patternlength)
{
printf("position is %d",i);
break;
}
}
if(replacelength=patternlength)
{
for(k=0;k<replacelength;k++)
{
text[i]=replace[k];
i++;
}
printf("\nUpdated Text is: %s",text);
}
else
{
printf("not possble to replace the string");
}
}
