// Q = 1866A
// https://codeforces.com/problemset/problem/1866/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mn = min(mn,abs(x));
    }
    cout<<mn<<endl;
    return 0;
}