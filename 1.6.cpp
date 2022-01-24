#include <stdio.h>
int main()
{
	float m;int i;
	m=1000/(1+12*0.0063);
	for(i=0;i<4;i++){
		m=(m+1000)/(1+12*0.0063);
	}
	printf("%.2f",m);
	return 0;
}
