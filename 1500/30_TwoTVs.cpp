// Q = 845C
// https://codeforces.com/problemset/problem/845/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> a(n,vector<ll>(2));
        for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
        sort(a.begin(),a.end());
        bool flag = true;
        int end1 = -1,end2 = -1;
        for(int i=0;i<n;i++)
        {
            int l = a[i][0],r = a[i][1];
            if(l > end1) end1 = r;
            else if(l > end2) end2 = r;
            else
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}