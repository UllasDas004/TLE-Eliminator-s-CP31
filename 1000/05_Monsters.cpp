// Q = 1849B
// https://codeforces.com/problemset/problem/1849/B

#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>& a,vector<int>& b)
{
    if(a[0] != b[0]) return a[0] > b[0];
    return a[1] < b[1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int>(2));
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0];
            if(a[i][0]%k == 0) a[i][0] = k;
            else a[i][0] %= k;
            a[i][1] = i + 1;
        }
        sort(a.begin(),a.end(),cmp);
        for(int i=0;i<n;i++) cout<<a[i][1]<<" ";
        cout<<endl;
    }
    return 0;
}