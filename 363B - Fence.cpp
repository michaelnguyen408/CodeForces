#include<vector>
#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int>h(n), sums(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
        
    for (int i = 0; i < k; i++)
        sums[0] += h[i];
    
    int len = n + 1 - k;
    int result = 0, min = sums[0];
    
    for (int i = 1; i < len; i++)
    {
        sums[i] = sums[i - 1] - h[i - 1] + h[i + k - 1];
        if (min > sums[i])
        {
            min = sums[i];
            result = i;
        }   
    }
    cout << result + 1;
}