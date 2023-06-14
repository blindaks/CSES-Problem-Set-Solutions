#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll ans=INT_MIN;
    ll count=0;
    for(int i=0;i<n;i++)
    {
        count+=a[i];
        if(count>ans)
        ans=count;
        if(count<0)
        count=0;
    }
    cout<<ans<<endl;
    return 0;
}