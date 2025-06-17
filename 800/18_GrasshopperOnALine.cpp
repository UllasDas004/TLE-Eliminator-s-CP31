// Q = 1837A
// https://codeforces.com/problemset/problem/1837/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        if(x%k != 0) cout<<1<<endl<<x<<endl;
        else
        {
            cout<<2<<endl;
            int first = x - k + 1;
            int second = k - 1;
            cout<<first<<" "<<second<<endl;
        }
    }
    return 0;
}