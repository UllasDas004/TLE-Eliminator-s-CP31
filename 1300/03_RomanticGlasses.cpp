// Q = 1915E
// https://codeforces.com/problemset/problem/1915/E

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
        vector<ll> a(n),prefOdd(n,0),prefEven(n,0);
        map<ll,int> mp;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i == 0) prefEven[0] = a[0];
            else if(i%2 == 0) prefEven[i] += a[i];
            else prefOdd[i] += a[i];
            if(i > 0)
            {
                prefEven[i] += prefEven[i-1];
                prefOdd[i] += prefOdd[i-1];
            }
            mp[prefEven[i] - prefOdd[i]]++;
            if(mp[prefEven[i] - prefOdd[i]] == 2 || prefEven[i] == prefOdd[i])
            flag = true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}