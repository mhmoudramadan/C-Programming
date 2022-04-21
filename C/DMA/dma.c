#include<stdio.h>
#include<stdlib.h>
int main()
/*{
	int *ptr =(int*)malloc (5*sizeof(char));
	printf("%d\n",sizeof(ptr));
	if (ptr!=NULL)
	{
		printf("memory allocated");
	}
}*/

/*{ //              free()          ///////
	int*ptr=(int*)malloc(5*sizeof(int));
	free(ptr);
	
}*/
/*{  // realloc        //
	int n,i;
	printf("enter no of elemnts");
	scanf("%d",&n);
	int*ptr=(int*) malloc(n*sizeof(int));
	if (ptr == NULL) //check null pointer//
	{
	printf("memory not allocated\n");	
	exit(0);
	}
	else
	{
	printf("memory allocated succes by malloc\n ");	
	
	}
	for (i=0;i<n;++i)
	{
		ptr[i]=i+1;  //get elemnts of memory//
	}
	for (i=0;i<n;++i)
	{
		printf("%d\n",ptr[i]); //print elments//
	}
	n=10;
	ptr=realloc(ptr,n*sizeof(int));
	
	printf(" new memory  allocated\n");	
	
	for (i=0;i<n;++i)
	{
		ptr[i]=i+1;  //get elemnts of memory//
	}
	for (i=0;i<n;++i)
	{
		printf("%d\n",ptr[i]); //print elments//
	}
	
}*/
/*{  //             calloc           //
	int n,i;
	int *mah;
	printf("enter no of elemnts");
	scanf("%d",&n);
	int*ptr=(int*) calloc(n,sizeof(int));
	// or //
	// mah= (int*)calloc(n,sizwof(int);  ///
	if (ptr == NULL) //check null pointer//
	{
	printf("memory not allocated");	
	exit(0);
	}
	else
	{
	printf("memory allocated succes by malloc ");	
	
	}
	for (i=0;i<n;++i)
	{
		ptr[i]=i+2;  //get elemnts of memory//
	}
	for (i=0;i<n;++i)
	{
		printf("%d",ptr[i]); //print elments//
	}

}*/
/*{	//               malloc()          //

	int n,i;
	printf("enter no of elemnts");
	scanf("%d",&n);
	int*ptr=(int*) malloc(n*sizeof(int));
	if (ptr == NULL) //check null pointer//
	{
	printf("memory not allocated");	
	exit(0);
	}
	else
	{
	printf("memory allocated succes by malloc ");	
	
	}
	for (i=0;i<n;++i)
	{
		ptr[i]=i+1;  //get elemnts of memory e;ment htb2a 1,2,3,4,5
	}
	for (i=0;i<n;++i)
	{
		printf("%d",ptr[i]); //print elments//
	}
	
}*/