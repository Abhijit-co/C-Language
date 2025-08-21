// struct and union 
//#include <stdio.h>
//struct car{
//	int cnumber;
//	char name[100];
//	char ccolor[100];
//}c1;
//int main(){
//	printf("%d",sizeof(c1.cnumber));
//     printf("enter cnumber:\n");
//     scanf("%d",&c1.cnumber);
//	return 0;
//}


#include <stdio.h>
struct college{
	int cid;
	char name[100];
	char caddress[100];
}c1;
int main(){
	printf("Enter college Id:\n");
	scanf("%d",&c1.cid);
		
		
	printf("Enter college name:\n");
	scanf("%s", &c1.name);
	
	printf("Enter college caddress:\n");
	scanf("%s", &c1.caddress);
	
}

