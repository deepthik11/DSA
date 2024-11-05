#include<stdio.h>
#include<stdlib.h>
int s,f,top=-1,num,k,i,stack[6],rev[6];
char c;
void push();
void pop();
void display();
int pali();
void main()
{
printf("Enter the size of stack\n");
scanf("%d",&s);
printf("-----MENU-----\n");
printf("1) Push\t2) Pop\t3) Display\t4) Check for Palindrome\t5) Exit\n");
while(1)
{
	printf("Enter the choice\n");
	scanf("%c",&c); 
	switch(c)
	{
		case 'p':push();
	       	break;
		case 'P':pop();
		       break;
		case 'd':display();
		       break;
		case 'f':f=pali();
		if(f==1)
			printf("Its a palindrome\n");
		else
			printf("Its not a palindrome\n");
		break;
		case 'e':exit(0);
		default:printf("Wrong choice...\n");
	}		                            
}	
}
void push()
{
if(top==s-1)
 {
	printf("stack is overflow\n");
 }
else
 {
	printf("Enter the number to be pushed\n");
	scanf("%d",&num);
	top=top+1;
	stack[top]=num;
 }
}
void pop()
{
if(top==-1)
 {
 	printf("stack is underflow\n");
 }
else
 {
 	num=stack[top];
 	printf("The deleted element is %d",num);
 	top--;
 }
}
void display()
{
  if(top==-1)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("stack contains...\n");
    for(i=top;i>=0;i--)
    {while(1)
{
	printf("Enter the choice\n");
	scanf("%c",&c); 
	switch(c)
	{
		case 'p':push();
	       	break;
		case 'P':pop();
		       break;
		case 'd':display();
		       break;
		case 'f':f=pali();
		if(f==1)
			printf("Its a palindrome\n");
		else
			printf("Its not a palindrome\n");
		break;
		case 'e':exit(0);
		default:printf("Wrong choice...\n");
	}		                            
}	
}
       printf("%d\n",stack[i]);
    }
         
  }
}
int pali()
{
  int flag=1;
  for(i=top;i>=0;i--)
  {
     rev[k++]=stack[i];
  }
  for(i=top;i>=0;i--)
  {
     if(stack[i]!=rev[--k])
     {
        flag=0;
     }
  }
  return flag;
  
}
         	 	 	 
 				
