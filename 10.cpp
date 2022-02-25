#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

bool check(int year)
{
    unordered_map<int, int> mp;
    while (year > 0)
    {
        int num = year % 10;
        year /= 10;
        mp[num]++;
    }
    if (mp.size() == 4)
        return true;
    return false;
}
int main()
{
    int y;
    cin >> y;
    int i = 1;
    while (i > 0)
    {
        if (check(y + i))
        {
            cout << y + i << endl;
            break;
        }
        i++;
    }

    return 0;
}