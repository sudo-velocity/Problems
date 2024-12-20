#include <bits/stdc++.h>
using namespace std;
void solve(int __test_case)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    if (a == b)
        cout << "Bob";
    else
    {
        reverse(a.begin(), a.end());
        if (a == b)
            cout << "Bob";
        else
            cout << "Alice";
    }
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