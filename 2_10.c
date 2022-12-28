#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],n1,n2,n,k=0,i,j;
    printf("Enter number of element of set A: ");
    scanf("%d",&n1);
    printf("Enter elements of set A: ");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter number of element of set B: ");
    scanf("%d",&n2);
    printf("Enter elements of set B: ");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
         } 
    }
    printf("intersection of set A and set B is:- ");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
    return 0; 
}
