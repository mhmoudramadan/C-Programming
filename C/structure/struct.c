#include<stdio.h>
int main()
{
	char *si , *s2;
	printf("%d%d",sizeof(s1),sizeof(s2));
}

/*// SIze of structure 
struct personal 
{
	int x;
	char y;
};
int main()
{
	struct personal p1;
	printf("%d",sizeof(p1));
}*/
 /*///      fun union 
 union personal
 {
	 double x;
	 int y;
	 char z;
 };
 int main()
 {
	 int z=50;
	 union personal p1;
	 p1.x=200;
	 z+=p1.x;
	 p1.y=100;
	 printf("x=%d\ny=%d\nz=%d",p1.x,z,p1.y);
 }*/
 /*struct personal
 {
	 int id;
	 char ch;
 };
int main()
{
	
}*/

 /* //          structure with array  ///
  struct market 
  {
	  char name[50];
	  int id;
  };
int main()
{
	int i;
	struct market customer[5];
	for ( i=0;i<5;i++)
	{
		printf("\nclient number [%d]\n",i);
		scanf("%d",&customer[i].id);
		printf("\nclient name of [%d]\n",i);
		scanf("%s",customer[i].name);
	}
	for( i=0;i<5;i++)
	{
		printf(" customer id of[%d]is=%d\n his name is :%s\n",i,customer[i].id,customer[i].name);
	}
}*/
/*struct data  // initialize structuer
{
	int x;
	char ch;
};*/
// structure with function  //
/*struct personal
{
	char name[50];
	int number;
};
struct personal add_name_number( )
{
	struct personal customer;
	printf("welcome new customer\n plz enter your name:\n");
	scanf("%s",customer.name);
	printf("enter your ID:\n");
	scanf("%d",&customer.number);
	return customer;
}
void display( struct personal object)
{
	printf("%s\n",object.name);
	printf("%d\n",object.number);
}
int main()
{
	struct personal p1;
	struct personal p2;
	p1=add_name_number();
	p2=add_name_number();
	display(p1);
	display(p2);
}*/
/*{   /// ini struct and print data
	struct data D1;  //creat var from struct data
	struct data D2;
	D1.x=20;
	D1.ch='a';
	D2.x=100;
	D2.ch='Y';
	printf("%d\n%c\n",D1.x,D1.ch);
	printf("%d\n%c\n",D2.x,D2.ch);
}*/