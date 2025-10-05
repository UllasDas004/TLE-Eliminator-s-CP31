// Q = 1807G2
// https://codeforces.com/problemset/problem/1807/G2

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n = 0;
        cin>>n;
        vector<ll> c(n),pref(n);
        for(int i=0;i<n;i++) cin>>c[i];
        sort(c.begin(),c.end());
        if(c[0] != 1) cout<<"NO"<<endl;
        else
        {
            ll sum = 1;
            bool flag = true;
            for(int i=1;i<n;i++)
            {
                if(sum < c[i])
                {
                    flag = false;
                    break;
                }
                sum += c[i];
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}