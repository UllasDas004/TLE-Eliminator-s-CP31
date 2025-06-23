// Q = 1657B
// https://codeforces.com/problemset/problem/1675/B

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        bool isSorted = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i > 0 && a[i] <= a[i-1]) isSorted = false;

        }
        if(n == 1 || isSorted) cout<<0<<endl;
        else
        {
            ll ans = 0;
            for(int i=n-2;i>=0;i--)
            {
                while(a[i] >= a[i+1])
                {
                    a[i] /= 2;
                    ans++;
                    if(a[i] == 0)
                    break;
                }
                if(a[i] == 0 && a[i+1] == 0)
                {
                    ans = -1;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}