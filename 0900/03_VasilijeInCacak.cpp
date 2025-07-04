// Q = 1878C
// https://codeforces.com/problemset/problem/1878/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long minSum = k*(k + 1) / 2;
        long long maxSum = n * k - k*(k - 1) / 2;
        if(x>= minSum && x<= maxSum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}