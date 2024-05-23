#include <stdio.h>

int main(){
	int i,N,A[100],product=1;
    printf("Enter the value of N : ");
	scanf("%d",&N);
    printf("The value is :\n");
	for(i=0;i<N;i++)
	{
	scanf("%d", &A[i]);
	}
	for(i=0;i<N;i++)
	{
		product=product*A[i];
	}
	printf("The result is %d",product);
	 return 0;
}
