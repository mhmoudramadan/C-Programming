#include<stdio.h>
int main()
{
	int arr[]={10,2,15,16,20,30};
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
	}
}