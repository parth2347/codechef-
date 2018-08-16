#include<iostream>
using namespace std;
int main ()
{
    int t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        char a[3],b[3];
        int c1=0,c2=0,c=0;
        for(j=0;j<3;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<3;j++)
        {
            cin>>b[j];
        }
        for(j=0;j<3;j++)
        {
            if((a[j]=='b' && b[j]=='o') || (a[j]=='o' && b[j]=='b'))
                c++;
            else
            {
            if(a[j]=='b' || b[j]=='b')
                c1++;
            if(a[j]=='o' || b[j]=='o')
                c2++;
            }
        }
        if(c==3)
            cout<<"yes"<<"\n";
        else if(c==2)
        {
            if(c1==1 || c2==1)
                cout<<"yes"<<"\n";
            else
                cout<<"no"<<"\n";
        }
        else if(c==1)
        {
            if(c1==2)
                cout<<"yes"<<"\n";
            else if(c1==1 && c2==1)
                cout<<"yes"<<"\n";
            else
            {
                cout<<"no"<<"\n";
            }
        }
        else if(c==0)
        {
            if(c1==2 && c2==1)
                cout<<"yes"<<"\n";
            else
            {
                cout<<"no"<<"\n";
            }
        }
        else
        {
            cout<<"no"<<"\n";
        }
    }
    return 0;
}
