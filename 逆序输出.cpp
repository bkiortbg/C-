#include <stdio.h>
#define N 10
int main()
{
	int a[N],*p;
	printf("Enter %d number\n",N);
	for(p=a;p<a+N;p++)
		scanf("%d",p);
		printf("change\n");
		for(p=a+N-1;p>=a;p--)
			printf("%d ",*p);
			return 0;
		}
