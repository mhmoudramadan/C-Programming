#include<stdio.h>

int lienarsearch(int arr[],int size ,int search)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(i==search)
			return i;
	}	
}
int main()
{
	int search ,Index,size;
	int arr[]={10,5,6,8,12,13,45};
	size=sizeof(arr) / sizeof(arr[0]);
	search=13;
	Index=lienarsearch(arr,size,search);
	if(Index==-1)
	{
		printf("Search not found");
	}
	else
	{
	printf("%d found in index %d\n",search,Index);	
	}
	/*int arr[]={10,2,15,16,20,30};
	int i , search=16;
	while(arr[i]!=search && i<=5)
	{
		i++;
		if(i<=5 && arr[i]== search)
		{
			printf("found in index:%d\n",i);
		}
		else
		{
			printf("not found in index\n");
		}
	}*/
	
}