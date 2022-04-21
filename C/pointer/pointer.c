#include <stdio.h>
/*int main() //pointer arithmatic//
{
	
	int *px=0x0;
	char *py=0x0;
	printf("px=0x%d , py=0x%d\n",px,py);
	px++;
	py++;
	printf("px=0x%d , py=0x%d",px,py);
}*/

int main()
{
	int mah=0x122514;
	char *ptr=&mah;
	++*ptr;
	printf("1=%d\n",*ptr);
	*ptr++;
	printf("2=%d\n",*ptr);
	++*ptr;
	printf("3=%d\n",*ptr);
}