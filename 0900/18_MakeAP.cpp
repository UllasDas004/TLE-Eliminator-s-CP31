// Q = 1624B
// https://codeforces.com/problemset/problem/1624/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        b += b;
        if(((b-c)%a == 0 && (b-c)/a > 0) || ((b-a)%c == 0 && (b-a)/c > 0) || ((a+c)%b == 0 && (a+c)/b > 0))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}