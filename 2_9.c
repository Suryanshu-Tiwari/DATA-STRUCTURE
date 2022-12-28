#include<stdio.h>
void main(){
    int n1,i,j;
    printf("Enter no. of Elements of I Array: ");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter Elements of I Array: ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int n2;
    printf("Enter no. of Elements of II Array: ");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter Elements of I Array: ");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    int x=0,y=0;
    while(x!=n1 && y!=n2)
    {
        if(x==n1)
        {
            printf("%d",b[y]);
            y++;
        }
        else if(y==n2)
        {
            printf("%d ",a[x]);
            x++;
        }
        if(a[x]<b[y])
        {
            printf("%d ",a[x]);
            x++;
        }
        else
        {
            printf("%d ",b[y]);
            y++;
        }
    }
}