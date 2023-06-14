#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    long long x[n];x[0]=0;
    for(int i=1;i<n;i++)
    {
        x[i]=x[i-1]+(abs(a[i]-a[i-1]))*(i);
    }
    long long y[n];y[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        y[i]=y[i+1]+(abs(a[i]-a[i+1]))*(n-i-1);
    }
    long long ans=LONG_LONG_MAX;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,(x[i]+y[i]));
    }
    cout<<ans<<endl;
    return 0;
}