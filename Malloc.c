//Author:Aditya Partap                                                             
// Purpose ;  // Stack Operations(Using malloc() function  ) 
           // 1) Push\Inserting an Element in a Stack
           // 2) Pop\Deleting an Element in a Stack
           // 3) Display the Stack
           // 4) $$ Exit $$

#include<stdio.h>      //   Pre-Processive to include standard input and output funtion header files
#include<conio.h>     //    Pre-Processive to include console input and output funtion header files
#include<stdlib.h>   //     Pre-Processive to include standard Libraray funtion header files


int Aditya=-1,James,i,n; // Variable Declratation   Initially there is no element in stack
int *stack;  //Pointer Variable Declratation
void push(); //Function for push  Stack operation
void pop(); //Function for pop Stack operation
void display(); //Function for Display  Stack operation

int main()
{
int choice; // Variable Declratation
printf("Welcome to Stack Operations");	
printf("\n        $$        ---->>>>>		Stack-Menu		<<<<<------    $$ ");
printf("\nEnter the size of stack\n");
scanf("%d",&n);
stack=(int*)malloc(n*sizeof(int)); // syntax of malloc() function
while(1) // While Loop 
{
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.View");
printf("\n 4.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nWrong Choice!!");
}
}
}
 /*  Function to add an element to the stack */
	void push()
{
if(Aditya==n)
{
printf("\nStack is OverFlow!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&James);
Aditya=Aditya+1; // "element" is incremented after an element is pushed
stack[]=James;// The pushed element is made as element
}
}
 /*  Function to delete an element from the stack */
void pop()
{
if(Aditya==-1)
{
printf("\nStack is UnderFlow!!");
}
else
{
printf("\nDeleted element is %d",stack[Aditya]);
Aditya=Aditya-1;  //  Decrement element after a pop
}
}
 /*  Function to display the status of the stack */
void display()
{
if(Aditya==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");  //  Print the stack
for(i=Aditya;i>=0;--i)
printf("%d\n",stack[i]);
}
}
