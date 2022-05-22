  #include<stdio.h>
  /*int add (int *a);
  int main()
  {
	  int x=5;
	  add(&x);
	  printf("%d",x);
  }
  int add (int *a )
  {
	  *a+=10;
	  
	  //return z;//
  }*/
  /*void swap (int*x,int*y)
  {
	   int temp;
	  temp=*x;
	  *x=*y;
	  *y=temp;
  }*/
  int GetFac(int a)
  {
	  if(a==0)
	  {
		  return 1;
	  }
	  else
	  {
		  return a*GetFac(a-1);
	  }
  }
  int main()
  {
	int a;
	printf("Enter Number to get factorial");
	scanf("%d",&a);
	int result1=GetFac(a);
	printf("\n%d",result1);
  }
 /* {
	 int l=90,k=50;
	 swap(&l,&k);
	 printf("l=%d\nk=%d",l,k);
  }*/
  
/*int main ()
{
    int input_1, input_2;

    printf("Please enter 2 numbers.\n");

    scanf("%d", &input_1);
    scanf("%d", &input_2);

    printf("The addition result of the number is %d.\n", input_1 + input_2);
    printf("The subtraction result of the number is %d.\n", input_1 - input_2);
    printf("The multiplication result of the number is %d.\n", input_1 * input_2);
    printf("The division result of the number is %d.\n", input_1 / input_2);
    printf("The remainder result of the number is %d.\n\n", input_1 % input_2);


    return 0;
}*/
/*void add(int *pvar1, int *pvar2)
{
    *pvar1 += *pvar2;
}


int main()
{
    int var1, var2;
    while (1)
    {
        printf("Please enter 2 numbers to be added\n");
        printf("The first number: ");
        scanf("%d", &var1);
        printf("The second number: ");
        scanf("%d", &var2);

        add(&var1, &var2);

        printf("Now after adding...\n");
        printf("the first number: %d\n\n", var1);
    }

    return 0;
}*/
/*int max_temp(int max)
{
    static int maxtemp = 0;

    if (maxtemp < max)
        maxtemp = max;
    return maxtemp;
}*/

/*int main()
{
    int sensor=0;
    while (1)
    {
        printf("Please enter the sensor read.\n");
        scanf("%d", &sensor);
        printf("The max temp reached till now is: %d\n\n", max_temp(sensor));
    }
    return 0;
} */