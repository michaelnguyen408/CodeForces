#include<iostream>
using namespace std;

/**
 * 1 <= n <= 1e5
 * 1 <= x <= 1e9
**/
int main()
{
    long long n, x;
    cin >> n >> x;
    
    int result = 0;
    
    for (long long i = 1; i <= n; i++)
        if (x % i == 0 && x / i <= n) 
            result++;
    cout << result;
}