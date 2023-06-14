#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i=0;int j=0;
    int ans=0;
    int sum=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum==k)
        {
            ans++;
            j++;
        }
        else if(sum>k)
        {
            while(sum>k)
            {
                sum-=a[i];
                i++;
            }
            sum-=a[j];
        }
        else
        j++;
    }
    cout<<ans<<endl;
    return 0;
}