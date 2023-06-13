#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    multiset<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    int t[m];
    for(int i=0;i<m;i++)
    cin>>t[i];
    
    
    for(int i=0;i<m;i++)
    {
        auto it=a.lower_bound(t[i]);
        if(*it==t[i])
        {
            cout<<*it<<endl;
            a.erase(it);
        }
        else
        {
            if(it!=a.begin())
            {
                cout<<*(--it)<<endl;
                a.erase(it);
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    

    return 0;
}