#include <stdio.h>
#include<string.h>
int main(){
	int n,flag=0;
	scanf("%d", &n);
	char s[n];
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='H' && s[i+1]=='H')
		{
			flag=1;
		}
		else
		{
			if (s[i]=='.')
			s[i]='B';
		}
	}
	if(flag==1)
    {
    printf("NO\n");
    }
    else
{
    printf("YES\n");
    printf("%s",s);
}
}
