#include<stdio.h>
void quicksort(int [10],int,int);
int main()
{

 int x[20],size,i;
 printf("Enter the size of the array:");
 scanf("%d",&size);
 printf("Enter %d elements:",size);
 for(i=0;i<size;i++)
 scanf("%d",&x[i]);
 quicksort(x,0,size-1);
 printf("Sorted elements:");
 for(i=0;i<size;i++)
 printf("%d\t",x[i]);
 return 0;
}
void quicksort(int x[10],int first,int last)
{
 int pivot,j,temp,i; //pivot is a element used to compare, the index values to the left of pivot is always less and greater on the right
 if(first<last)
 {
  pivot=first;     
  i=first;        //i and j are indexes of the array
  j=last;
  while(i<j)     
   {
    while(x[i]<=x[pivot]&&i<last)  //condition
    i++;
    while(x[j]>x[pivot])
    j--;
    if(i<j)
    {
     temp=x[i];    //Swapping if TRUE
     x[i]=x[j]; 
     x[j]=temp;
    }
   } 
  temp=x[pivot];      //swapping
  x[pivot]=x[j];
  x[j]=temp;
  quicksort(x,first,j-1);
  quicksort(x,j+1,last);
 }
}

