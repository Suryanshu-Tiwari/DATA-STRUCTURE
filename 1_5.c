//Program for Missing number in an array
#include<stdio.h>
void main(){
    int n;
    printf("Enter no. of Element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    
    int arrx[max+1];
    for(int i=0;i<max+1;i++){
        arrx[i]=0;
    }
    int temp=0;
    for(int i=0;i<n;i++){
        temp=arr[i];
        arrx[temp]+=1;
    }
    printf("Elements Missing: ");
    for(int i=min;i<max+1;i++){
        if(arrx[i]==0)
        printf("%d ",i);
    }
}