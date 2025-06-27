// Q = 1582B
// https://codeforces.com/problemset/problem/1582/B

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
        long long oc = 0,zc = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] == 1) oc++;
            else if(a[i] == 0) zc++;
        }
        cout<<oc * (1LL << zc)<<endl;
    }
    return 0;
}