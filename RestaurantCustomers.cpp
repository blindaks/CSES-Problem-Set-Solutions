#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,1));
        v.push_back(make_pair(b,-1));
    }
        int count=0;
        sort(v.begin(),v.end());
    
    for(int i=0;i<2*n;i++)
    {
        if(v[i].second==1)
        {
        count++;
        ans=max(ans,count);
        }
        else
        count--;
    }
    
    cout<<ans<<endl;
}