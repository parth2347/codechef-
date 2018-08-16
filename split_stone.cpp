#include<iostream>
using namespace std;
int find_maxa(int l,int r,int s)
{
    if(l>=r && l>=s)
            {
                return l;
            }
    else if(r>=l && r>=s)
            {
                return r;
            }
    else
            {
                return s;
            }
}
int find_max(int q,int w)
{
    if(q>=w)
        return q;
    else if(w>=q)
        return w;
}
int main ()
{
    long int t,i,a,b,c,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l,r;
        cin>>a>>b>>c>>x>>y;
        if((a+b+c)==x+y)
        {
            l=find_maxa(a,b,c);
            r=find_max(x,y);
            if(l==a)
            {
                if(l+b>=r || l+c>=r)
                {
                    cout<<"YES"<<"\n";
                }
                else
                {
                    cout<<"NO"<<"\n";
                }
            }
            else if(l==b)
            {
                if(l+a>=r || l+c>=r)
                {
                    cout<<"YES"<<"\n";
                }
                else
                {
                    cout<<"NO"<<"\n";
                }
            }
            else
            {
                if(l+a>=r || l+b>=r)
                {
                    cout<<"YES"<<"\n";
                }
                else
                {
                    cout<<"NO"<<"\n";
                }
            }
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
