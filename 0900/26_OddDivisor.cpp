// Q = 1475A
// https://codeforces.com/problemset/problem/1475/A

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
        bool flag = false;
        while(n > 1)
        {
            if(n%2 != 0)
            {
                flag = true;
                break;
            }
            n /= 2;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}