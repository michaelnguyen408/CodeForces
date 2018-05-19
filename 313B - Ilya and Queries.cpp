#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int m;
    cin >> m;
    
    int len = s.size();
    
    vector<int> dp(len + 1);
    for (int i = 1; i <= len; i++)
        dp[i] = (s[i] == s[i-1]) ? dp[i-1] + 1 : dp[i-1];
    
    int l, r;
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        cout << (dp[r-1] - dp[l - 1]) << endl;
    }
}