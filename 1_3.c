//Program for insetion in the sorted array
//ELEMEMT=35
#include<stdio.h>
void main(){
    int i;
    int ele,flag=5;
    printf("Enter Elemet to be inserted: ");
    scanf("%d",&ele);
    int arr[6]={10,20,30,40,50};
    for(i=0;i<6;i++){
        if(arr[i]>ele){
        flag=i;
        break;
        }
    }
    for(i=4;i>=flag;i--){
        arr[i+1]=arr[i];
    }
    arr[flag]=ele;
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}