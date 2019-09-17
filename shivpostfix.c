/*Objective: To write a program that will evaluate a postfix expression using stack
  USN number: 18BBTCS119 ,SHIVANI K
  Functions used are void push()
  Date:17/09/2019*/


#define size 50
#include<ctype.h>
#include<stdio.h>
int s[size];
int top=-1;
void push(int elem)
{
 s[++top]=elem;
}
int pop()
{
 return(s[top--]);
}
void main()
{
 char pofx[50],ch;
 int i=0,op1,op2;
 printf("\n Enter the postfix Expression:");
 scanf("%s",pofx);
 while((ch=pofx[i++])!='\0')
 {
  if(isdigit(ch))push(ch-'0');
  else
  {
   op2=pop();
   op1=pop();
   switch(ch)
   {
    case '+':push(op1+op2);
    break;
    case '-':push(op1-op2);
    break;
    case '*':push(op1*op2);
    break;
    case '/':push(op1/op2);
    break;
    }
   }
  }
 printf("\nGiven postfix expression :%s,",pofx);
 printf("\nresult after expression :%d,",s[top]);
}
