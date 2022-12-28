#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    cout<<"Enter order of matrix A: ";
    cin>>m>>n;
    cout<<"Enter order of matrix B: ";
    cin>>p>>q;
    if(m==p&&n==q)
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
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                cout<<a[i][j]+b[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
    else
    cout<<"Addition not Possible";
}