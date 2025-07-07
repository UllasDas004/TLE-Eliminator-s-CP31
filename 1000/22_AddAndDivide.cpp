// Q = 1485A
// https://codeforces.com/problemset/problem/1485/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        int ans = INT_MAX;
        for(int k=0;k<=40;k++)
        {
            int nb = b + k;
            if(nb == 1) continue;
            int x = a;
            int ops = k;
            while(x > 0)
            {
                x /= nb;
                ops++;
            }
            ans = min(ans,ops);
        }
        cout<<ans<<endl;
    }
    return 0;
}