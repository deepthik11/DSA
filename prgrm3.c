#include<stdio.h>
#include<stdlib.h>
int s,size,c,f,top=-1,num,k,i,stack[0],rev[0];
void push();
void pop();
void display();
int pali();
void main()

{

printf("Enter the size of the stack\n");
scanf("%d",&s);
printf("------MENU-----\n");
printf("1)push\t2)pop\t3)display\t4)Check for palindrome\t5) Exit\t");
while(1)
{
	printf("Enter the choice\n");
	scanf("%d",&c);
	switch(c)
	{
		case1:push();
	      	break;
		case2:pop();
	      break;
		case3:display();
	      break;
		case4:f=pali();
	 	if(f==1)
	 		printf("Its palindrome\n");
	 	else
	 		printf("its not palindrome\n");
	 	break;
		case5:exit(0);
	 	default:printf("wrong choice...\n");
	 }
	 }
}	 
void push()
{
	if(top==s-1)
{
  	
		printf("stack is overflow");
		}
		else
		{
		printf("Enter the number to be pushed\n");
		scanf("%d",&num);
		top++;
		stack[top]=num;
}
}

void pop()
{	if(top==-1)
	{
		printf("stack is underflow\n");
	}
	else	
	{
			num=stack[top];
			printf("popped element is %d\n",num);
			top--;
	}
	}
void display()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("stack contents...\n");
		{
		printf("%d\n",stack[i]);
		}
	}
}
	
int pali()
{
	int flag=1;
	for(i=top;i<=0;i--)
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

	      
