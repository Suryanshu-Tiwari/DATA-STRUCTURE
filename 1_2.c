//Program to insert the given elements into an array.//
//Element=60 Position=3oRIndex=2//
#include<stdio.h>
void main(){
    int i;
    int arr[6]={10,30,20,50,40};
    for(i=4;i>=2;i--){
        arr[i+1]=arr[i];
    }
    arr[2]=60;
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}