#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char ssn[10],name[20],dept[10],desi[10];
    int sal;
    long int ph;
    struct node*prev,*next;
}
*first=NULL;
struct node *last,*temp1,*temp2;
 
 void create(char ssn[15],char name[20],char dept[5],char desi[10],int sal,long int ph)
 {
    temp1=(struct node*)malloc(1*sizeof(struct node));
    strcpy(temp1->ssn,ssn);
    strcpy(temp1->name,name);
    strcpy(temp1->dept,dept);    
    strcpy(temp1->desi,desi); 
    temp1->sal=sal;
    temp1->ph=ph;   
    temp1->prev=NULL;
    temp1->next=NULL;    
    
    if(first==NULL)
    {
       first=last=temp1;
    }
    else
    {
    last->next=temp1;
    temp1->next=NULL;
    temp1->prev=last;
    last=temp1;
    }
 }
 void inbeg(char ssn[15],char name[20],char dept[5],char desi[10],int sal,long int ph)
 {
    temp1=(struct node*)malloc(1*sizeof(struct node));
    strcpy(temp1->ssn,ssn);
    strcpy(temp1->name,name);
    strcpy(temp1->dept,dept);    
    strcpy(temp1->desi,desi); 
    temp1->sal=sal;
    temp1->ph=ph;   
    temp1->next=first;
    first->prev=temp1;
    first=temp1;
    temp1->prev=NULL;
 }
 void inend(char ssn[15],char name[20],char dept[5],char desi[10],int sal,long int ph)
 {
    temp1=(struct node*)malloc(1*sizeof(struct node));
    strcpy(temp1->ssn,ssn);
    strcpy(temp1->name,name);
    strcpy(temp1->dept,dept);    
    strcpy(temp1->desi,desi); 
    temp1->sal=sal;
    temp1->ph=ph;   
    last->next=temp1;
    temp1->prev=last;
    temp1->next=NULL;
    last=temp1;
 }
 void delbeg()
 {
    if(first==NULL)
    {
       printf("List is empty\n");
    }
    else
    {
        temp1=first->next;
        if(temp1!=NULL)
        {
           temp1->prev=NULL;
           printf("deleted node is:\n");
           printf("SSN:%s\n",first->ssn);
           free(first);
           first=temp1;
        }
        else
        {
           printf("deleted node is :\n");
           printf("SSN:%s\n",first->ssn);
           free(first);
           first=temp1;
        }
      }  
 }          
  void delend()
 {
    if(first==NULL)
    {
       printf("List is empty\n");
    }
    else
    {
        temp1=last;
        if(first==last)
        {
           printf("deleted node is:\n");
           printf("SSN:%s\n",last->ssn);
           first=last=NULL;
           free(temp1);
          
        }
        else
        {
           printf("deleted node is :\n");
           printf("SSN:%s\n",last->ssn);
           last=temp1->prev;
           last->next=NULL;
           free(temp1);
        } 
      }
   }     
        
void display()
{
   int count=0;
   temp1=first;
   if(first==NULL)
   {
      printf("Empty list\n");
      return;
   }
   printf("employee Details...\n");
   while(temp1!=NULL)
   {
      printf("SSN:%s\nNAME:%s\nDEPT:%s\nDESIGNATION:%s\nSALARY:%d\nPH:%ld\n",temp1->ssn,temp1->name,temp1->dept,temp1->desi,temp1->sal,temp1->ph);
      temp1=temp1->next;
      count++;
  }
  printf("Number of nodes=%d\n",count);
              
}
void main()
{
   int choice;
   char ssn[15],name[20],dept[5],desi[10];
   int sal;
   long int ph;
   printf("1.create\n2.display\n3.insert at begin\n4.insert at end\n5.delete at begin\n6.delete at end\n7.Exit\n");
   while(1)
   {
      printf("Enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:printf("enter emp SSN,Name,department,designation,salary,phone\n");
                scanf("%s%s%s%s%d%ld",ssn,name,dept,desi,&sal,&ph);
                create(ssn,name,dept,desi,sal,ph);
                break;
         case 2:display();
                break;
         case 3:printf("enter emp SSN,Name,department,designation,salary,phone\n");
                scanf("%s%s%s%s%d%ld",ssn,name,dept,desi,&sal,&ph);
                inbeg(ssn,name,dept,desi,sal,ph);
                break;       
         case 4:printf("enter emp SSN,Name,department,designation,salary,phone\n");
                scanf("%s%s%s%s%d%ld",ssn,name,dept,desi,&sal,&ph);
                inend(ssn,name,dept,desi,sal,ph);
                break;                     
        case 5:delbeg();
               break;
        case 6:delend();
               break;
        case 7:exit(0);
      }
     }                     
 }        
                     
       
       
