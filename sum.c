/*program to add number
 author: Shandeh jung karki */
#include<stdio.h>
#include<conio.h>
void main()
{
    int number1,number2,sum;  //variable declaration of integer type
	printf("enter number1 and number2:\n");  //display 
	scanf("%d %d",&number1,&number2);  //reads to number1 and number2
	sum = number1 + number2;     //function operation
	printf("The sum is %d",sum);   //display output of operation
 
	getch(); //holds exe terminal
}
