#include<iostream>
using namespace std;
int main ()
{
    int n,a[1000],b[1000],x=100001,y=100001,z=100001;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    for(int k=0;k<n;k++)
    {
        if(b[k]==1)
        {
            if(a[k]<x)
            {
            x=a[k];
            }
        }
        if(b[k]==2)
        {
            if(a[k]<y)
            {
                y=a[k];
            }
        }
        if(b[k]==3)
        {
            if(a[k]<z)
            {
                z=a[k];
            }
        }
    }
if(x+y<z)
{
    cout<<x+y;
}
else
{
    cout<<z;
}
}
