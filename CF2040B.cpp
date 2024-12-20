#include <bits/stdc++.h>
using namespace std;
void solve(int __test_case)
{
    int n;
    cin >> n;
    int ans = 1; 
    for(int curr = 1; curr < n; curr = 2 * (curr + 1))
        ans++; 
    cout << ans; 
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