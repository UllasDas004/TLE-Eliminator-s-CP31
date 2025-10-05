// Q = 1797B
// https://codeforces.com/problemset/problem/1797/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        }
        int count = 0;
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(n%2 && i == (n+1)/2 - 1 && j == (n+1)/2) break;
                if(a[i][j] != a[n-1-i][n-1-j])
                count++;
            }
        }
        if(count > k) cout<<"NO"<<endl;
        else
        {
            if((k - count)%2 == 0) cout<<"YES"<<endl;
            else if(n%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}