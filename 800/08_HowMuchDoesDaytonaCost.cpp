// Q = 1878A
// https://codeforces.com/problemset/problem/1878/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x == k) flag = true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}