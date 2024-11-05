#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int i,j,k;
char*text=(char*)malloc(sizeof(char));
char*pat=(char*)malloc(sizeof(char));
char*rep=(char*)malloc(sizeof(char));
printf("Enter text:");
scanf(" %[^\n]",text);
printf("Enter Pattern:");
scanf(" %[^\n]",pat);
printf("Enter replace String:");
scanf(" %[^\n]",rep);
int textlength=strlen(text);
int patternlength=strlen(pat);
int replacelength=strlen(rep);
for(i=0;i<=textlength-patternlength;i++)
{
	for(j=0;j<patternlength;j++)
	{
		if(text[i+j]!=pat[j])
		{
		   break;
		}
	}
  if(j==patternlength)
  {
    printf("Position is %d",i);
    break;
  }  		  
}
  if(replacelength==patternlength)
  {
      for(k=0;k<replacelength;k++)
      {
          text[i]=rep[k];
          i++;
      }
      printf("\nUpdated Text is %s",text);
  }
  else
  {
      printf("Not possible to replace to string");
  }
}                 
