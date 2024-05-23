#include <stdio.h>

int main(){
    int l,r,k,count=0;
    printf("Enter the value of l, r and k : ");
    scanf("%d %d %d",&l,&r,&k);
    for(int i=l;i<=r;i++)
    {
        if(i%k==0)
        count++;
        
    }
    printf("The count divisor is : %d",count);
    
    return 0;
}