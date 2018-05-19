#include<iostream>
#include<vector>

using namespace std;

int dp [100002][2];

int main ()
{
    int n;
    cin >> n;

    vector<int> x(n), h(n);

    for (int i = 0; i < n; i++)
        cin >> x[i] >> h[i];
    
    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
        if (x[i] - x[i - 1] >= h[i])
            dp[i][0] = dp[i - 1][0] + 1;
        if (x[i] - x[i - 1] >= h[i] + h[i-1])
            dp[i][0] = dp[i - 1][1] + 1;
        
        if (x[i + 1] - x[i] >= h[i])
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
        else
            dp[i][1] = -1;
    }
    cout << max(dp[n][1], dp[n][0]);
}