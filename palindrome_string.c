#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s",&str);
    int i,length;
    int flag=0;
    length=strlen(str);

    for(i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1]){
        flag =1;
        break;
        }
        }
    
    if(flag){
        printf("%s is not Palindrome",str);
    }
    else{
        printf("%s is Palindrome",str);
    }

    return 0;
}
