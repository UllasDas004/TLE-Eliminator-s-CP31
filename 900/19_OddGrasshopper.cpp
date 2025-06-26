// Q = 1607B
// https://codeforces.com/problemset/problem/1607/B

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>x>>n;
        int mod = n % 4;
        if(x % 2 == 0)
        {
            if(mod == 1) x -= n;
            else if(mod == 2) x += 1;
            else if(mod == 3) x += n + 1;
        }
        else
        {
            if(mod == 1) x += n;
            else if(mod == 2) x -= 1;
            else if(mod == 3) x -= n + 1;
        }
        cout<<x<<endl;
    }
}