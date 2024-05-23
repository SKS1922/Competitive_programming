#include <stdio.h>

int main(){
	int s;
	char arr[100]; 
    printf("Enter the string : "); //if ques mention it
	scanf("%s",&arr);              	                
	for(s=0;s<100;s++){
		if(arr[s]==0){
			break;
		}
	if(arr[s]>='a' && arr[s]<='z'){
		arr[s]=arr[s]-32;
	}
	else if (arr[s]>='A' && arr[s]<='Z'){
		arr[s]=arr[s]+32;
	}
	else{
		printf("The value is invalid");
		return 1;
	}

	}
    printf("The Toggle string is : "); //if ques mention it
	printf("%s",arr);

}
