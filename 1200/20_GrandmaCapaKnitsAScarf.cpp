// Q = 1582/C
// https://codeforces.com/problemset/problem/1582/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<char> st;
        for(int i=0;i<n;i++) st.insert(s[i]);
        int minCount = INT_MAX;
        for(auto c : st)
        {
            int i = 0,j = n-1,count = 0;
            bool flag = true;
            while(i < j)
            {
                if(s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else if(s[i] == c)
                {
                    i++;
                    count++;
                }
                else if(s[j] == c)
                {
                    j--;
                    count++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(flag) minCount = min(minCount,count);
        }
        cout<<(minCount == INT_MAX ? -1 : minCount)<<endl;
    }
    return 0;
}