// Q = 1411B
// https://codeforces.com/problemset/problem/1411/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        for(long long i=n;i<=n+2520;i++)
        {
            long long a = i;
            bool flag = true;
            while(a > 0)
            {
                int r = a % 10;
                if(r != 0 && i%r != 0)
                {
                    flag = false;
                    break;
                }
                a /= 10;
            }
            if(flag)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}