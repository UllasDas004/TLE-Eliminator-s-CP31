// Q = 1294C
// https://codeforces.com/problemset/problem/1294/C

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
        vector<ll> factors;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                factors.push_back(i);
                n /= i;
                if(factors.size() == 2) break;
            }
        }
        if(n == 1 || factors.size() < 2 || n == factors[0] || n == factors[1]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<factors[0]<<" "<<factors[1]<<" "<<n<<endl;
    }
    return 0;
}