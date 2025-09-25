#include <bits/stdc++.h>
using namespace std;

int dp[100005];

bool reach_or_not(int src, int des)
{
    if (src == des)
        return true;
    if (src > des)
        return false;

    if (dp[src] != -1)
        return dp[src];
    return (dp[src] = reach_or_not(src + 3, des) || reach_or_not(src * 2, des));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        memset(dp, -1, sizeof(dp));
        if (reach_or_not(1, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
