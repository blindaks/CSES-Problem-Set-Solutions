#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int count=0;
    int l=0;int h=n-1;
    while(l<=h)
    {
        if(a[l]+a[h]<=x)
        {
            count++;
            l++;h--;
        }
        else if(a[l]>x)
        {
            count+=h-l+1;
            break;
        }
        else
        {
            count++;
            h--;
        }
    }
    cout<<count<<endl;
    return 0;
}