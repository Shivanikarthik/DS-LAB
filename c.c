/* Objective: To create a circiular queue in an array and perform and insertion and deletion
   Name: SHIVANI K
   USN Number: 18BBTCS119
   Date: 24/09/2019
   Output:  Enter the number of elements 3

 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice1
Enter the element:3

 Inserted ->3
 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice1
Enter the element:2

 Inserted ->2
 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice1
Enter the element:5

 Inserted ->5
 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice1
Enter the element:3
The queue is full
 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice2

Deleted element ->3

 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice2

Deleted element ->2

 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice3
Enter the element in Queue are:
5
 1.ADD 2.DELETE 3.DISPLAY 4.EXITEnter the choice^C
 */
#include<stdio.h>
int a[10];
void main()
{
 int n,i,item,ch;
 printf("Enter the number of elements");
 scanf("%d",&n);
 int front=-1,rear=-1;
 do
 {
  printf("\n 1.ADD 2.DELETE 3.DISPLAY 4.EXIT");
  printf("Enter the choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("Enter the element:");
           scanf("%d",&item);
	   if((front==rear+1)||(front==0 && rear==n-1))
	   printf("The queue is full");
	   else
	   {
	    if(front==-1)front=0;
	    rear=(rear+1)%n;
	    a[rear]=item;
	    printf("\n Inserted ->%d",item);
 	   }
 	   break;
   case 2:
          if(front==-1)
	  printf("Circular queue is Empty! Delete is not possible!!\n");
	  else
          {
           item=a[front];
	   if(front==rear)
           { 
            front=-1;
	    rear=-1;	
	   }
	   else
           {
            front=(front+1)%n;
	   }
	   printf("\nDeleted element ->%d\n",item);
	  }
	  break;
   case 3:
	  if (front==-1)
 	  printf("\n Empty Queue\n");
	  else
	  {
	   printf("Entered elements in Queue are:\n");
	   for(i=front;i!=rear;i=(i+1)%n)
	   {
	    printf("%d",a[i]);
	   }
	   printf("%d",a[i]);
          }
	  break;
   default:
	   printf("\n Invalid choice");
	   break;
  }
 }
 while(ch!=4);
} 
