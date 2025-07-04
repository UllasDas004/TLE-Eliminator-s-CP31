// Q = 1374B
// https://codeforces.com/problemset/problem/1374/B

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
        bool flag = true;
        int count = 0;
        while(n > 1)
        {
            if(n%3 != 0)
            {
                flag = false;
                break;
            }
            if(n%6 == 0)
            n /= 6;
            else
            n *= 2;
            count++;
        }
        if(flag) cout<<count<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}