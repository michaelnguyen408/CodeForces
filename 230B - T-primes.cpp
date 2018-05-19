#include<iostream>
#include<cmath>

using namespace std;

// check if has sqrt, check if sqrt is prime
int main()
{
    long long n, x;
    cin >> n;
    
    long long sq = 1e6;
    bool *ar = new bool [sq + 1];
    for (long long i = 2; i <= sq; i++)
        ar[i] = true;
    for (long long i = 2; i <= sq; i++)
    {
        if (ar[i])
        {
            for (long long j = i * i; j <= sq; j += i)
                ar[j] = false;
        }
    }
    
    
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        long long b = sqrt(x);
        if (b * b != x || x == 1)
            cout << "NO\n";
        else
        {
            if (ar[b]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}