#include<vector>
#include<iostream>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    
    vector<long long> n(5), m(5);
    
    for (int i = 0; i < 5; i++)
    {
        n[i] = x / 5;
        
        if (x % 5 >= i && i != 0) n[i]++;
        
        m[i] = y / 5;
        if (y % 5 >= i && i != 0) m[i]++;
    }
    
    long long result = n[0] * m[0] + n[1] * m[4] + n[2] * m[3] + n[3] * m[2] + n[4] * m[1];
    cout << result;
}