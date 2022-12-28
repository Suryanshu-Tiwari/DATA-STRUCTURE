#include <stdio.h>
void main()
{
    int n1, i, j;
    printf("Enter no. of Elements of I Array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter Elements of I Array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    int n2;
    printf("Enter no. of Elements of II Array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter Elements of I Array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    int x[n1 + n2];
    for (i = 0; i < n1; i++)
    {
        x[i] = a[i];
    }
    for (i = 0; i < n2; i++)
    {
        x[i + n1] = b[i];
    }
    printf("Final Array after Merging: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", x[i]);
    }
}