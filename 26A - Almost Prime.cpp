#include<iostream>
#include<vector>

using namespace std;
const int CAPACITY = 3001;
bool prime[3001];
int almost[3001];

bool primeFactors(int n, const vector<int>& primes);    // returns true if only 2

int main()
{
    // Populate prime (indicator) & primes (numbers)
    for (int i = 0; i < CAPACITY; i++)
        prime[i] = true;
    
    for (int i = 2; i < CAPACITY; i++)
        if (prime[i])
            for (int j = i + i; j < CAPACITY; j += i)
                prime[j] = false;
    
    vector<int>primes;
    for (int i = 2; i < CAPACITY; i++)
        if (prime[i])
            primes.push_back(i);
    
    // Problem
    int n;
    cin >> n;
    for (int i = 6; i < CAPACITY; i++)
    {
        almost[i] = almost[i - 1];
        if (primeFactors(i, primes))
            almost[i]++;
    }
    cout << almost[n];
}

bool primeFactors(int n, const vector<int>& primes)
{
    int result = 0;
    int len = static_cast<int>(primes.size());

    int i = 0;
    while (n > 0 && i < len)
    {
        if (n % primes[i] == 0)
        {
            if (result == 2)    // cut early
                return false;
            
            result++;
            n /= primes[i];
            while (n % primes[i] == 0)
                n /= primes[i];
        }
        i++;
    }
    return result == 2;
}