#include<stdio.h>
#include<stdlib.h>
#include"LIB/LSTD_TYPES.h"


int binarysearch(int arr[],int size ,int search)
{
	int start=0,End=size-1,middle;
	while(start<=End)
	{
		middle=(start+End)/2;
		if(arr[middle]==search)
		{
			return middle;
		}
		else if(arr[middle]<search)
		{
			start=middle+1;
		}
		else
		{
		End=middle-1;	
		}
	}
	return -1;
}
int main()
{
	int arr[]={10,15,20,30,35,40};
	int size ,search=35,Index;
	size=sizeof(arr)/sizeof(arr[0]);
	Index=binarysearch(arr,size-1,search);
	if(Index==-1)
	{
		printf("Not found");
	}
	else
	{
		printf("%d found in Index %d",search,Index);
	}
	return 0;
}
/*uint16 BinarySearch(uint16 arr[],uint16 Size,uint16 search);
int main()
{
	uint16 Size ,Index,Val;
	printf("please enter size of data: ");
	scanf("%d",&Size);
	uint16* Ptr=(uint16*)calloc(Size ,sizeof(uint16));
	printf("enter data to store sorted\n");
	
	for(uint16 i=0;i<Size;i++)
	{
		scanf("%d",&Ptr[i]);
	}
	printf("please enter value to search :");
	scanf("%d",&Val);
	
	Index=BinarySearch(Ptr,Size,Val);
	
	if(Index == -1)
	{
		printf("%d value not found\n",Val);
	}
	else
	{
		printf(" %d value found in Index %d \n",Val,Index);
	}
	return 0;
}*/

uint16 BinarySearch(uint16 arr[],uint16 Size,uint16 search)
{
	uint16 start=0,end=Size-1,middle;
	while(start<=end)
	{
		middle=(start+end)/2;
		
		if(arr[middle]==search)
		{
			/*Middle carry index*/
			return middle;
		}
		else if(arr[middle]<search)
		{
			start=middle+1;
		}
		else
		{
			end=middle-1;
		}
	}
	return -1;
}