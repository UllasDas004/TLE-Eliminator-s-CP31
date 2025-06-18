// Q = 1806A
// https://codeforces.com/problemset/problem/1806/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d>=b && c-a <= d-b)
        {
            long long dia = d - b;
            a += dia;
            long long steps = dia + a - c;
            cout<<steps<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}