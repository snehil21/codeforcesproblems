#include <bits/stdc++.h>
using namespace std;
int solve(string str)
{
    int n = str.size();
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, rev;
        cin >> s;
        rev = s;
        reverse(rev.begin(), rev.end());
        if (rev == s)
        {
            cout << 0 << endl;
        }
        else
            cout << solve(s) << endl;
    }
}