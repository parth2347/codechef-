#include<iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int a,b,e[10000],j,i;
    float c1,c2,m,n;
    cin>>n;
    double x[70];
    for (i=0;i<n;i++)
    {
        cin>>m>>a>>b;
        c1=0,c2=0;
        for(j=0;j<m;j++)
        {
            cin>>e[j];
        }
        for(j=0;j<m;j++)
        {
            if(e[j]==a)
                c1++;
            if(e[j]==b)
            {
                c2++;
            }
        }
        cout<<fixed<<setprecision(10);
        x[i]=(c1/m)*(c2/m);
    }
    for(i=0;i<n;i++)
        cout<<x[i]<<"\n";
    return 0;
}
