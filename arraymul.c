#include<stdio.h>

int main(){
    int arr[10],n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        arr[i]=n*(i+1);
    }
    for(i=0;i<10;i++)
    {
        printf("%d*%d=%d\n",n,i+1,arr[i]);
    }
    return 0;
}