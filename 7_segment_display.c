#include <stdio.h>
#include<string.h>
int main(){
	int i,t;
	int a[10]={6,2,5,5,4,5,6,3,7,6};
	scanf("%d",&t);
	while(t--)
	{
	char n[1000000];
		int sum=0;
		scanf("%s",&n);
		for(i=0;i<strlen(n);i++){
			sum=sum+a[(n[i]-48)];
		}
		if(sum%2==1 && sum>2)
		{
		printf("7");
		}
		else
		{
		printf("1");
		}

		for(int i=1;i<sum/2;i++){
			printf("1");
		}
		printf("\n");
	}

}
