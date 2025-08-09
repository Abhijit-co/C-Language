//FUNCTION
//Block of code which executes the particular task
//1. Built in function 2.User defined function
                           //1.Default function 2.Parameterized function
                           
                           
//Advantage- We can call function multiple
#include<stdio.h>
void add(int x , int y); //function declaration
int main()
{
	add(10,20);          //function call
}
void add(int x , int y)//Parameterized function //function defination
{
	int z = x + y;
	printf("%d",z);
}
