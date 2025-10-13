// Q = 1832C
// https://codeforces.com/problemset/problem/1832/C

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
        vector<ll> a(n);
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i > 0)
            sum += abs(a[i] - a[i-1]);
        }
        if(sum == 0)
        {
            cout<<1<<endl;
            continue;
        }
        vector<ll> ans;
        ans.push_back(a[0]);
        ans.push_back(a[1]);
        for(int i=2;i<n;i++)
        {
            ll currSize = ans.size();
            ll x = ans[currSize-2] - ans[currSize-1];
            ll y = ans[currSize-1] - a[i];
            if(x > 0)
            {
                if(y > 0)
                ans[currSize-1] = a[i];
                else if(y < 0)
                ans.push_back(a[i]);
            }
            else
            {
                if(y < 0)
                ans[currSize-1] = a[i];
                else if(y > 0)
                ans.push_back(a[i]);
            }
        }
        int finalSize = ans.size();
        if(ans[0] == ans[1]) finalSize--;
        cout<<finalSize<<endl;
    }
    return 0;
}