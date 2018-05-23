#include<iostream>
#include<stack>

using namespace std;

int main ()
{
    int n; 
    cin >> n;
    
    // find the primes
    bool prime [1001];
    for (int i = 2; i <= 1000; i++)
        prime[i] = true;
    
    for (int i = 2; i * i <= 1000; i++)
        if (prime[i])
            for (int j = 2; j * i <= 1000; j++)
                prime[i * j] = false;
    
    /** Alternative algo
     * for (int i = 2; i * i <= 1000; i++)
     *  if (prime[i])
     *      for (int j = i + i; j <= 1000; j += i)
     *          prime[j] = false;
    **/
    
    int questions = 0;   
    stack<int> results;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i; j <= n; j *= i) // primes[i]^k
            {
                questions++;
                results.push(j);
            }
        }
    }
    
    cout << questions << endl;
    while (!results.empty())
    {
        cout << results.top() << " ";
        results.pop();
    }
}