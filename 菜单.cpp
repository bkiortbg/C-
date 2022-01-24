#include <stdio.h>
int main()
{
	int i,m,n;
	printf("Enter two integers:");
	scanf("%d %d",&m,&n);
	while(n!=0){
		i=m%n;m=n;n=i;
	}
	printf("Greatest common divisor:%d",m);
	return 0;
}
	
