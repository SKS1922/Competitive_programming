#include<stdio.h>
main()
{
	int N,a[100];
	int ld=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<N;i++)
	{
		ld=a[i]/10;
	}
	if(ld%10==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}