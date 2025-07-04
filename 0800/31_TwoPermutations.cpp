// Q = 1761A
// https://codeforces.com/problemset/problem/1761/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(n == 1) cout<<"YES"<<endl;
        else if(n - a - b >= 2) cout<<"YES"<<endl;
        else if(n == a && n == b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}