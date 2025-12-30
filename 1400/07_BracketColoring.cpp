// Q = 1837D
// https://codeforces.com/problemset/problem/1837/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll oc = 0,cc = 0;
        ll color = 0,mxColor = 0;
        char ch = s[0];
        vector<ll> ans(n);
        for(int i=0;i<n;i++)
        {
            if(oc == cc)
            {
                if(s[i] != ch)
                {
                    ch = s[i];
                    color = !color;
                }
            }
            ans[i] = color+1;
            mxColor = max(mxColor,color+1);
            if(s[i] == '(') oc++;
            else cc++;
        }
        if(oc != cc)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<mxColor<<endl;
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}