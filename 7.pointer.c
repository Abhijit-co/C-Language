//pointer- which store address of another variable.
//
//#include<stdio.h>
//void main(){
//	int a=10;
//	printf("\nvalue of A is:%d",a);
//	int *p;
//	p = &a;
//	printf("\nAddress of A is:%d",*p);
////    int **p2;
////    p2=&p;
////    printf("\nAddress of A is:%d",p2);
//}



//#include<stdio.h>
//int main(){
//	int a=10,b=20,c;
//	int *p1 , *p2 , *p3;
//	p1=&a;
//	p2=&b;
//	p3=&c;
////	printf("\nA:%d",*p1);
////	printf("\nB:%d",*p2);
////	printf("\nC:%d",*p3);
//*p3=*p1+*p2;
//printf("\nAdditions:%d",*p3);
//	
//}

//#include<stdio.h>
//int main(){
//	int a=10,b=20,temp;
//	int *p1 , *p2 ;
//	p1=&a;
//	p2=&b;
//	printf("\nValue of A and B:%d%d",a,b);
//	temp = *p1;
//	*p1=*p2;
//	*p2=temp;
//
//printf("\nAfter swap");
//printf("\nValue of A and B:%d%d",a,b);
//	
//}




//#include<stdio.h>
//int main(){
//	int a=20;
//	
//	char ch="A";
//	printf("%u",sizeof(a));
//
//	
//}



#include<stdio.h>
struct person
{
	int a;
	int b;
	int c;
}p1;
int main(){
	p1.a=10;
	p1.b=20;
	add(&p1.a,&p1.b);
	return 0;
}
void add(int *a , int *b){
	int c = *a + *b;
	printf("Addition is:%d",c);
}
