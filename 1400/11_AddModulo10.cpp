// Q = 1714E
// https://codeforces.com/problemset/problem/1714/E

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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if((a[i]%10)%2 == 1)
            a[i] += a[i]%10;
        }
        if(n == 1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]%10 != 0)
            {
                ll diff = a[i+1] - a[i];
                diff /= 20;
                a[i] += diff*20;
            }
            while(a[i] < a[i+1])
            {
                if(a[i]%10 == 0) break;
                a[i] += a[i]%10;
            }
            if(a[i] !=  a[i+1])
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