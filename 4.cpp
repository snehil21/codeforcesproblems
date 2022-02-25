#include <bits/stdc++.h>
using namespace std;
int solve(string s, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    return (count + 1);
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s, n) << endl;
    }
    return 0;
}
