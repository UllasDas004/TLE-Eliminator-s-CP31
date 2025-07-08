// Q = 1362A
// https://codeforces.com/problemset/problem/1362/A

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
        if(a == b) cout<<0<<endl;
        else if((a > b && a%b != 0) || (a < b && b%a != 0)) cout<<-1<<endl;
        else
        {
            long long div = a / b;
            if(b > a) div = b / a;
            int bitCount = -1,setBit = 0;
            long long d = div;
            while(d > 0)
            {
                bitCount++;
                setBit += (d % 2);
                if(setBit > 1) break;
                d /= 2;
            }
            if(setBit > 1) cout<<-1<<endl;
            else cout<<bitCount / 3 + (bitCount % 3 != 0)<<endl;
        }
    }
}