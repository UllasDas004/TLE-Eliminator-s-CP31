// Q = 1791C
// https://codeforces.com/problemset/problem/1791/C

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
        string s;
        cin>>s;
        for(int i=0,j=n-1;i<=j;i++,j--)
        {
            int start = (int)s[i] - 48;
            int end = (int)s[j] - 48;
            if(start != end) n -= 2;
            else break;
        }
        cout<<n<<endl;
    }
    return 0;
}