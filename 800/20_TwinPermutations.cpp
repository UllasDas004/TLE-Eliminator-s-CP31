// Q = 1831A
// https://codeforces.com/problemset/problem/1831/A

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
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cout<<n - x + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}