#include<stdio.h>
/*Swap function*/
void swap(int *ptr1,int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
/*selection sort*/
void bubblesort(int arr[],int Size)
{
	int start,end,Swapped;
	int false =0 ,true=1;
	for(start=0;start<Size-1;start++)
	{
		Swapped=false;
		for(end=0;end<(Size-start-1);end++)
		{
			if(arr[end] > arr[end+1])
			{
			swap(&arr[end],&arr[end+1]);
			Swapped=true;
			}
		}
		if(Swapped == false)
			break;
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
	int arr[]={10,20,30,15,2,1,50,90,120,30,40,66};
	int Size=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,Size);
	printf("array sorted \n");
	printarray(arr,Size);
	return 0;
}