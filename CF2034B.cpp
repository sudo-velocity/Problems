#include <bits/stdc++.h>
using namespace std;
void solve(int __test_case)
{
    int n, m, k; 
    cin >> n >> m >> k; 
    string str; 
    cin >> str; 
    int zero = 0; 
    int ans = 0; 
    for(int i = 0; i < n; ++i)
    {
        if(str[i] == '0')
            zero++; 
        else
            zero = 0; 
        if(zero == m)
        {
            ans++; 
            for(int j = i, l = k; j < n && l > 0; j++, l--)
                str[j] = '1';
            zero = 0; 
        }
    }
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