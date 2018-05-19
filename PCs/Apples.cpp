#include<iostream>
using namespace std;

bool DEBUG = false;

// COCI 2011
int main()
{
    int n, m, j;
    cin >> n >> m >> j;
    
    int l = 1, r = m, result = 0;
    int dest;
    for (int i = 0; i < j; i++)
    {
        cin >> dest;
        if (dest > r)     // right
        {
            int calc = dest - r;
            result += calc;
            
            r = dest;
            l = dest - m + 1;
        }
        else if (dest < l)
        {
            int calc = l - dest;
            result += calc;

            l = dest;
            r = dest + m - 1;
        }
    }
    cout << result;
}