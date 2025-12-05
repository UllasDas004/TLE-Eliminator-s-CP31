// Q = 1527B1
// https://codeforces.com/problemset/problem/1527/B1

#include<bits/stdc++.h>
#define ll long long
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
        int zc = 0;
        for(int i=0;i<n;i++) if(s[i] == '0') zc++;
        if(zc == 1)
        {
            cout<<"BOB"<<endl;
            continue;
        }
        if(zc == 0)
        {
            cout<<"DRAW"<<endl;
            continue;
        }
        char curr = 'a';
        int a = 0,b = 0;
        if(n%2 == 1 && s[n/2] == '0')
        {
            a++;
            curr = 'b';
            zc--;
        }
        if(curr == 'a') cout<<"BOB"<<endl;
        else if(curr == 'b') cout<<"ALICE"<<endl;
    }
    return 0;
}