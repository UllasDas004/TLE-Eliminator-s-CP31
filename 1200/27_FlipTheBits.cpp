// Q = 1504B
// https://codeforces.com/problemset/problem/1504/B

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
        string a,b;
        cin>>a>>b;
        ll za = 0,oa = 0,zb = 0,ob = 0;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(a[i] == '1') oa++;
            else za++;
            if(b[i] == '1') ob++;
            else zb++;
            if((oa == ob && za == zb) || (oa == zb && ob == za)) continue;
            flag = false;
            break;
        }
        if(flag && za == zb) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}