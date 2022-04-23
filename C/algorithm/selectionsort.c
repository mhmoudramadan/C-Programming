#include<stdio.h>
/*Swap function*/
void swap(int *ptr1,int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
/*selection sort*/
void selectionsort(int arr[],int Size)
{
	int start,end,middleIndex;
	for(start=0;start<Size-1;start++)
	{
		middleIndex=start;
		for(end=start+1;end<Size;end++)
		{
			if(arr[end] < arr[middleIndex])
			{
			middleIndex=end;
			}
		}
		swap(&arr[middleIndex],&arr[start]);
	}
}
/*print array after sorting*/
void printarray(int arr[],int Size)
{
	for(int i=0 ;i<Size;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
}


int main()
{
	int arr[]={10,20,30,15,2,1};
	int Size=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,Size);
	printf("array sorted \n");
	printarray(arr,Size);
	return 0;
}