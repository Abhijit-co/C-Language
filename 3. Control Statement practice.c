//#include<stdio.h>
//void main()
//{
//	   int n=-2;
//	   
//	   if(n>0)
//	   {
//	   	printf("\nNumber is Posi");
//	   }
//	   else
//	   {
//	   	 printf("\nNumber is Neg");
//	   }
//	 
//	 
//}


//1 - Control Statement - 
//
//2 - Decision Making
// - if else,else if laddar,switch
//Loops (iterat)
//for ,while and dowhile
//#include<stdio.h>
//void main()
//{
// 	  int onumber=1;
	  
// 	  if(onumber==1)
// 	  {
// 	  	printf("You Select Java!");
// 	  }
// 	  else if(onumber==2)
// 	  {
// 	  	 printf("\nYou Select Python!");
// 	  }
// 	  else if(onumber==3)
// 	  {
// 	  	printf("\nYou Select PHP !");
// 	  }
// 	  else
// 	  {
// 	  	 printf("\nSorry Dost !");
// 	  }
// }



//#include<stdio.h>
//void main()
//{
//	 int choice=31;
//	 switch(choice)
//	 {
//	 	 case 1:
//	 	 	printf("\nPushpa!");
//	 	 	break;
//	 	 case 2:
//		   printf("\nKGF");
//		   break;
//		   
//		 case 3:
//		  printf("\nKal Ho Na ho !");
//		  break;
//		  
//		  case 4:
//		  printf("\nKabhi Alvdia Na kehna!");  	
//		  break;
//		  
//		  default : printf("\nWrong Choice !");
//	 }
//}


//#include<stdio.h>
//void main()
//{
//int i,fact=1,n=6; 
//
//for(i=n;i>=1;i--)
//{
//	fact=fact*i;
//}
//
//printf("\nFact is : %d",fact);
// 
//}

//#include<stdio.h>
//void main()
//{
//	int n=2;
//	int i;
//	for(i=1;i<=10;i++)
//	{
//		 printf("\n%d",n*i); 
//	}
//	
//}


#include<stdio.h>
void main()
{
	 int n,i;
	 int sum=0;
	 printf("\nEnter The Number :\n");
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
	 	 sum=sum+i;
	 }
}


#include<stdio.h>
void main()
{
	 int i;
	 int sum=0;
	 for(i=1;i<=50;i++)
	 {
	 	 if(i%2==0)
	 	 {
	 	 	sum=sum+i;
		  }
	 }
	 
	 printf("\nSum of Only Even Number is : %d",sum);
}



#include<stdio.h>
void main()
{
	 int i;
	 
	 int f=0,s=1,next;
	 
	 for(i=1;i<=50;i++)
	 {
	 	 next=f+s;
	 	 f=s;
	 	 s=next;
	 	 
	 	 printf("\n%d",next);
	 }
	 
}



#include<stdio.h>
void main()
{
	int n=50402,rem=0,temp,count=0;
	temp=n;
	while(temp>0)
	{
		 rem=temp%10;   
		 if(rem!=0)
		 {
		 	count=count+1;
		 }
		temp=temp/10;  
	}
}




#include<stdio.h>
void main()
{
	int n=50402,rem=0,temp,count=0;
	temp=n;
	do
	{
		 rem=temp%10;   
		 if(rem!=0)
		 {
		 	count=count+1;
		 }
		temp=temp/10;  
	}	while(temp>0);
}




