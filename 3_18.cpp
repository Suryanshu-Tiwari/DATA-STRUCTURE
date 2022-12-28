#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    cout<<"Enter order of matrix A: ";
    cin>>m>>n;
    cout<<"Enter order of matrix B: ";
    cin>>p>>q;
    if(n==p)
    {
        int a[m][n],b[p][q];
        int i,j;
        cout<<"Enter elements of matrix A: ";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                 cin>>a[i][j];
            }
        }
        cout<<"Enter elements of matrix B: ";
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                 cin>>b[i][j];
            }
        }
        int c[m][q];
        int k;
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<"Multiplication not Possible";
}