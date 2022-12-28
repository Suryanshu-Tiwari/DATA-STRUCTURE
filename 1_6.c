//Program to find which element is repeated in the array and which is not
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
    
    int arrx[max+1];
    for(int i=0;i<max+1;i++){
        arrx[i]=0;
    }
    int temp=0;
    for(int i=0;i<n;i++){
        temp=arr[i];
        arrx[temp]+=1;
    }
    printf("Elements repeated: ");
    for(int i=0;i<max+1;i++){
        if(arrx[i]>1)
        printf("%d ",i);
    }
    printf("\n");
    printf("Elements not repeated: ");
    for(int i=0;i<max+1;i++){
        if(arrx[i]==1)
        printf("%d ",i);
    }
}