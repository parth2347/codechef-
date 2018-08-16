#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,p,s,j;
    cin>>p>>s;
    int a[p],b[p],c[p],d[p];
    for(i=0;i<p;i++)
    {
        int x=0;
        for(j=0;j<s;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<s;j++)
        {
            cin>>b[j];
        }
        vector<pair<int,int> >v;
        for(j=0;j<s;j++)
        {
            v.push_back(make_pair(a[j],b[j]));
        }
        sort(v.begin(),v.end());
        for(j=0;j<s-1;j++)
        {
            if(v[j].second>v[j+1].second)
                x++;
        }
        c[i]=x;
        d[i]=i+1;
    }
    vector<pair<int,int> >v1;
    for(i=0;i<p;i++)
    {
        v1.push_back(make_pair(c[i],d[i]));
    }
    sort(v1.begin(),v1.end());
    for(i=0;i<p;i++)
    {
        cout<<v1[i].second<<"\n";
    }
    return 0;
}
