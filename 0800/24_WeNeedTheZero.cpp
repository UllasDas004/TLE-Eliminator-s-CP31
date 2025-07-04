// Q = 1805A
// https://codeforces.com/problemset/problem/1805/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int x = a[0];
        for(int i=1;i<n;i++)
        x ^= a[i];
        if(n%2 == 0)
        {
            if(x == 0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
        else cout<<x<<endl;
    }
    return 0;
}