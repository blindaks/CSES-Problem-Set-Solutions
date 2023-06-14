#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end());
    
    int m=0;int low=0;int high=n-1;int mid=0;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(v[mid].first>=k)
        high=mid-1;
        else
        {
            m=mid;
            low=mid+1;
        }
    }
    int f=0;
    for(int i=0;i<=m;i++)
    {
        int x=v[i].first;
        low=i+1;high=n-1;mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(v[mid].first+x==k)
            {
                cout<<v[i].second<<" "<<v[mid].second<<endl;
                f=1;
                break;
            }
            else if(x+v[mid].first<k)
            low=mid+1;
            else
            high=mid-1;
        }
        if(f==1)
        break;
    }
    if(f==0)
    cout<<"IMPOSSIBLE"<<endl;
}