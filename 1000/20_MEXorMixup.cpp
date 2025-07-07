// Q = 1567B
// https://codeforces.com/problemset/problem/1567/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> xors(3*1e5 + 1,0);
    for(int i=1;i<xors.size();i++)
    xors[i] = (xors[i-1] ^ i);
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a == 0) cout<<2<<endl;
        else
        {
            int xr = xors[a - 1];
            if(xr == b) cout<<a<<endl;
            else if((xr ^ b) == a) cout<<a + 2<<endl;
            else cout<<a + 1<<endl;
        }
    }
    return 0;
}