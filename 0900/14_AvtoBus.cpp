// Q = 1679A
// https://codeforces.com/problemset/problem/1679/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<4 || n%2 == 1) cout<<-1<<endl;
        else
        cout<<((n%6 == 0) ? n / 6 : n / 6 + 1)<<" "<<n / 4<<endl;
    }
    return 0;
}