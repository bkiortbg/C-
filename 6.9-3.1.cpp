#include <stdio.h>
void swap(int *a,int *b)
{
	int tep;tep=*a;*a=*b;*b=tep;
}

int main()
{

   int pmax,pmin;int j,k,n;
    int data[10],temp,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);
    printf("orgin:");
    for(i=0;i<n;i++)
        printf("%4d",data[i]);
    printf("\n");
    pmax=data[0];pmin=data[0];
    for(i=0;i<n;i++)
    if(data[i]>pmax){
    	pmax=data[i];j=i;
	}
	for(i=0;i<n;i++)
	if(data[i]<pmin){
		pmin=data[i];k=i;
	}
	swap(&data[j],&data[0]);
	swap(&data[k],&data[n-1]);
	  printf("sorted:");
    for(i=0;i<n;i++)
        printf("%4d",data[i]);
    printf("\n");
    return 0;
}
	
	
