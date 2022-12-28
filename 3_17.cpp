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
        cout<<"Enter elements of matrix A: "<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                 cin>>a[i][j];
            }
        }
        cout<<"Enter elements of matrix B: "<<endl;
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                 cin>>b[i][j];
            }
        }
        char choice;
        cout<<"Select any option: "<<endl<<"a. A-B"<<endl<<"b. B-A"<<endl;
        cin>>choice;
        if(choice=='a')
        {
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    cout<<a[i][j]-b[i][j]<<"\t\t";
                }
                cout<<endl;
            }
        }
        else if(choice=='b')
        {
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    cout<<b[i][j]-a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else
        cout<<"Enter Valid Option!";
    }
    else
    cout<<"Addition not Possible";
}