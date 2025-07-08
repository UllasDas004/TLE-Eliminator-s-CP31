// Q = 1155A
// https://codeforces.com/problemset/problem/1155/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool isSorted = true;
    int l = -1,r = -1;
    for(int i=1;i<n;i++)
    {
        if(s[i] < s[i-1])
        {
            l = i;
            r = i + 1;
            isSorted = false;
            break;
        }
    }
    if(isSorted) cout<<"NO"<<endl;
    else cout<<"YES"<<endl<<l<<" "<<r<<endl;
    return 0;
}