#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a, b, c;
    cin >> a >> b >> c;
    
    vector<int>dp (n+1,-1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a <= i)
            dp[i] = max(dp[i], dp[i - a] + 1);
        if (b <= i)
            dp[i] = max(dp[i], dp[i - b] + 1);
        if (c <= i)
            dp[i] = max(dp[i], dp[i - c] + 1);
    }
    cout << dp[n] << endl;
}