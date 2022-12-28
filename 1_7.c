#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter no. of Element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        for(i=0;i<=n/2;i++)
        {
            temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }

    }
}