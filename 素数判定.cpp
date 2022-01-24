#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
	int m;
	if(n<=1)
		 return false;
		for(m=2;m*m<n;m++)
		if(n%m==0)
			return false;
	return true;	
}
int main()
{
	int n;
	scanf("%d",&n);
	if(is_prime(n))
	   printf("prime");
	else
		printf("not");
		return 0;
	   
}
