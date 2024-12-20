#include <bits/stdc++.h>
using namespace std;
void solve(int __test_case)
{
    int n;
    cin >> n;
    int odd = n;
    if (n % 2 == 0)
        odd--;
    for (int i = 2; i <= n; i += 2)
    {
        int curr = odd + i;
        for (int j = 2; j * j <= curr; ++j)
            if (curr % j == 0)
            {
                for (int k = 1; k <= n; k += 2)
                    cout << k << ' ';
                cout << i << ' ';
                for (int k = 2; k <= n; k += 2)
                    if (k != i)
                        cout << k << ' ';
                return;
            }
    }
    cout << -1; 
}
int main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;
    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }
    return 0;
}