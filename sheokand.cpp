#include<iostream>
#include<math.h>
using namespace std;
int div(int a)
{
    int c=0;
    while(a!=1)
    {
        a=a/2;
        c++;
    }
    return c;
}
int main ()
{
    int t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"2"<<"\n";
        }
        else
        {
            int x=n,c,y,z,a,b;
            long long int e;
            c=div(x);
            y=pow(2,c);
            z=n-y;
            if(z==0)
            {
                cout<<"1"<<"\n";
            }
            else
            {
            a=z-pow(2,div(z));
            e=y+pow(2,div(z)+1);
            b=(e)-n;
            if(y == pow(2,div(z)+1))
                b++;
            if(a>b)
                cout<<b<<"\n";
            else
                cout<<a<<"\n";
            }
        }
    }
    return 0;
}
