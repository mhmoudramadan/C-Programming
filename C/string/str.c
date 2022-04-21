 //////////////   STIRNG ANF ITS FUNCTIONS ////////////////
 #include<stdio.h>
 #include<string.h>
 /*void fun(void)
 {    // intialize static var //
	 int y=6,z;
	 static int i;
	 z=++y;
	 printf("%d%d\n",z,++i);
 }*/
 //       recursive fun//
 /*int power (int x , int y)
 {
	 if (y>0)
	 {
		 return (x * power(x,y-1));
	 }
	 else
	 {
		 return 1;
	 }
 }*/
 //      passing pointer to fun /////
 /*void fun (int x ,int y)  /// pass by value
 {
	 x+=5;  
	 y+=5;
 }*/
 /*void fun (int *x,int *y)  // pass by reference
 {
	 *x+=5;  
	 *y+=5;
 }*/
// fun by pointer to change value of array 
//#define SIZE 5  // change value of array by add
/*void CHANGE_VALUE_OF_ARRAY (int *ptr,int num , int y)
{
	for ( int k=0;k<num;k++)
	{
		*(ptr+k)=*(ptr+k)+y;
	}
} */
 int main()
/* { /// pointer and string
	 char *ptr="hello";
	 char name[10];
	 puts("enter name");
	 gets(name);
	 puts(ptr); // print hello
	 puts(name); // print new name
 }*/
 /*{
	 int arr[SIZE]={1,2,3,4,5};
	 int f=6;
	 CHANGE_VALUE_OF_ARRAY(arr,SIZE,f);
	 for (int i=0;i<SIZE;i++)
	 {
	 printf("%d\n",*(arr+i));
	 }
 }*/
 /*{  // pointer to array 
	 int num[5]={10,20,30,40,50};
	 int arr[5],i;
	 
	 int*ptr=arr;
	 for (int i=0;i<5;i++)
	 {
		 printf("%d\n",num[i]); // print values of num
	 }
	 for (int i=0;i<5;i++)
	 {
		 printf("%d\n",*(num+i)); 
	 }
	 for (i=0;i<5;i++)
	 {
		 //scanf("%d\n",&arr[i]);  // input values 
		 scanf("%d\n",ptr+i);  // input value for array with pointer   
		 
	 for (i=0;i<5;i++)
	 {
		 printf("%d\n",*(ptr+i));  
	 }
 }*/
 /*{
	 int a=5,b=6;
	// fun(a,b); // pass by value  
	 fun(&a,&b);  // pass by reference
	 printf("a=%d\n b=%d\n",a,b); 
 }*/
 /*{
	 printf("%d",power(4,3));
 }*/
 /*{
	 fun();
	 fun();
	 fun();
	 
 }*/
 /*{  // copy string in other string
	 char s1[5]={"ahmed"};
	 char s2[5]={"MIA"};
	 strcpy(s1,s2);
	 printf("%s\n",s1);
 }*/