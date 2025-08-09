







#include<stdio.h>

void eating();//function declaration
void add(int x,int y );
int main()
{
   eating();//Function Call	
   add(40,50);
}

void eating()//function defination
             //default parameter
{
    int a = 10, b = 20, c;
    c = a + b;
    printf("%d", c);
}
void add(int x , int y)
{  
    
    int z = x + y;
    printf("%d",z);
}

