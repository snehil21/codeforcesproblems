#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int solve(int b, int c)
{
    int ans = gcd(b, c);
    return (c / ans);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c;
        cin >> b >> c;
        cout << solve(b, c) << endl;
    }
    return 0;
}
