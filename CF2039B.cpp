#include <bits/stdc++.h>
using namespace std;
void solve(int __test_case)
{
    string str; 
    cin >> str; 
    if(str.length() == 1)
    {
        cout << -1; 
        return;
    }
    for(int i = 0; i < str.length() - 1; ++i)
        if(str[i] == str[i+1])
        {
            cout << str[i] << str[i+1]; 
            return; 
        }
    for(int i = 0; i < str.length() - 2; ++i)
        if(str[i] != str[i+2])
        {
            cout << str.substr(i, 3); 
            return; 
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