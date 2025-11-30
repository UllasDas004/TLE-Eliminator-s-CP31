// Q = 1703E
// https://codeforces.com/problemset/problem/1703/E

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
        vector<string> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll ans = 0;
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=i;j<(n+1)/2;j++)
            {
                if(i == j || (n-1-j) == j)
                {
                    ll oc = 0;
                    oc += (a[i][j] == '1');
                    oc += (a[j][n-1-i] == '1');
                    oc += (a[n-1-i][n-1-j] == '1');
                    oc += (a[n-1-j][i] == '1');
                    ll zc = 4 - oc;
                    ans += min(zc,oc);
                }
                else
                {
                    ll k = 0;
                    ll oc1 = 0;
                    oc1 += (a[i][j] == '1');
                    oc1 += (a[j][n-1-i] == '1');
                    oc1 += (a[n-1-i][n-1-j] == '1');
                    oc1 += (a[n-1-j][i] == '1');
                    ll zc1 = 4 - oc1;
                    k += min(zc1,oc1);
                    ll oc2 = 0;
                    oc2 += (a[j][i] == '1');
                    oc2 += (a[i][n-1-j] == '1');
                    oc2 += (a[n-1-j][n-1-i] == '1');
                    oc2 += (a[n-1-i][j] == '1');
                    ll zc2 = 4 - oc2;
                    k += min(zc2,oc2);
                    ll oc = oc1 + oc2;
                    ll zc = 8 - oc;
                    ans += min(k,min(oc,zc));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}