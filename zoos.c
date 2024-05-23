#include <stdio.h>
#include <string.h>
int main(){
	int i,x=0,y=0;
	char s[20];
	scanf("%s",&s);
	for(i=0;i<sizeof(s);i++)
	{
		if(s[i]=='z')
		{
			x++;
		}
		else if(s[i]=='o')
		{
			y++;
		}
		else
		{
		break;
		}
	}
	if(2*x==y){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
