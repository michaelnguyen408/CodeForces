#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> primes(n + 2, true);
    int len = n + 1;
    for (int i = 2; i <= len; i++)
        if (primes[i])
            for (int j = i + i; j <= len; j += i)
                primes[j] = false;
    
    int color = 1;
    vector<int> ans(len + 1);
    for (int i = 2; i <= len; i++)
    {
        if (!primes[i])
        {
            ans[i] = 2;
            color = 2;
        }
        else
            ans[i] = 1;
    }
    
    cout << color << endl;
    for (int i = 2; i <= len; i++)
        cout << ans[i] << " ";
}