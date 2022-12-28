//Program for delete the given elements into an array.
#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50};
    int ele,i,flag;
    printf("Enter Elemet to be deleted: ");
    scanf("%d",&ele);
    for(i=0;i<5;i++){
        if(arr[i]==ele){
            flag=i;
            break;
        }
    }
    for(i=flag;i<5;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
}