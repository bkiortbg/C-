#include <stdio.h>
#define N 10
void max_min(int a[],int n,int *max,int *min);
int main()
{
	int b[N],i,max,min;
	for(i=0;i<N;i++)
	scanf("%d",&b[i]);
	max_min(b,N,&max,&min);
	printf("%d %d",max,min);
	return 0;
}
void max_min(int a[],int n,int *max,int *min)
{
	*max=*min=a[0];int i; 
	for(i=0;i<n;i++){
	 if(a[i]>*max)
	 	*max=a[i];
	 if(a[i]<*min)
	 	*min=a[i];
	 }
}
