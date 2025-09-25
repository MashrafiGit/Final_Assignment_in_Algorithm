#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long tetra[n + 1];

    tetra[0] = 0;
    if (n >= 1)
        tetra[1] = 1;
    if (n >= 2)
        tetra[2] = 1;
    if (n >= 3)
        tetra[3] = 2;

    for (int i = 4; i <= n; i++)
    {
        tetra[i] = tetra[i - 1] + tetra[i - 2] + tetra[i - 3] + tetra[i - 4];
    }

    cout << tetra[n] << "\n";
    return 0;
}
