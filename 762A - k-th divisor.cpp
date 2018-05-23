#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    long long n, k;

    cin >> n >> k;

    if (k == 1)
        cout << 1;
    else
    {
        vector<long long> divisors = {1};
    
        long long iter = 2, root = sqrt(n);
        
        while (iter * iter <= n)    // find divisors before and at square root
        {
            if (n % iter == 0)
                divisors.push_back(iter);
            
            iter++;
        }
        
        // fill out rest of divisors
        if (root * root != n)  // not a perfect square
            for (int i = divisors.size() - 1; i >= 0; i--)
                divisors.push_back(n / divisors[i]);
        else
            for (int i = divisors.size() - 2; i >= 0; i--)
                divisors.push_back(n / divisors[i]);
        
        if (k <= divisors.size())
            cout << divisors[k - 1];
        else
            cout << -1;
        
    }
}