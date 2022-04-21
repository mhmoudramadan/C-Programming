#include<stdio.h>
/*void fun (void)  // void function  to print //

{
	for(int i=0;i<20;i++)
	{
		printf("*");
	}
}*/
//          fun to add two numbers       //
/*int ADD_TWO_NUMBERS (int i , int j)
{
	int m;
	m=i+j;
	return ;
}*/
// squ & qur //
/*int sqr (int a)
{
	int result;
	result = a*a;
	return result ;
}*/
/*int qur (int a)
{
	int z;
	//z=a*a*a;//
// or //	
	 //z=a*sqr(a);//
	return z;
}*/
/*                      macro function  (+,*,-,/,%) */
/*#define SUM(x,y) x+y
#define MUL(x,y) x*y
#define SUB(x,y) x-y
#define DIV(x,y) x/y
#define REM(x,y) x%y */
int main()
{
	
}
/*{
	int i,j;
	printf("enter two numebers\n");
	scanf("%d %d",&i,&j);
	printf("sum=%d\nmul= %d\nsub= %d\n div=%d\n rem=%d\n",SUM(i,j),MUL(i,j),SUB(i,j),DIV(i,j),REM(i,j));
}*/
/*{  // squ  qur  //
	int result ,k,no=10;
	result = sqr(no);
	k=qur(no);
	printf("%d\n%d\n",result,k);
}*/
/*{
	int x=10,y=10,z;
	z =ADD_TWO_NUMBERS(x,y);
	printf("%d",z);
	
}*/
/*{     // void function  to print //
	fun();
	printf(" c progamming language");
	fun();
}*/
/*{  // goto    ( infinte loop without condtion)        //
	char m;
	m:  // label//
	printf("mahmoud");
	goto m; // uncondtional flow //
}*/
/*{  //        condtional operator  ?  //
	int var=2, num1=20,num2=30;
	var=(var<1)? num1:num2;  // if true var =num1  or if false var = num2 //
	printf("%d\n",var);
	// dy nfs fkra (?) operator  //
	if (var < 2)
	{
		var=num1;
		printf("%d\n",var);
	}
	else
	{
		var=num2;
		printf("%d\n",var);
	}
}*/
/*{      //       trick switch      //
	int i=4,j=4;
	switch(i)
	{
		case j:     // combination error //
	printf("sucess ");
	break;
	case 1:
	printf("failed");
	break;
	}
}*/
/*{        // print values   ///
	int x=10,y=20,z=30;
	printf("%d",x,y,z); print value of x//
	printf("%d",(x,y,z)); // print value of z//
}*/
/*{//                continue   & break          ///
	int i,j;
	for(i=0;i<10;i++)
	{
		if (8==i)
		{
			break;
		}
		printf("sucess  %d\n",i);
	}
}*/

/*{//            getchar() & getche & getch & gets()//
	char ch[10],x;
	x=getchar(); 
	x=getche(); 
	x=getch();
	gets(ch); 
	printf("%s",ch);
}*/