#include <stdio.h>

int main(){
	int N,Factorial=1;
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		Factorial=Factorial*i;
	}
	printf("%d",Factorial);
    return 0;
}
