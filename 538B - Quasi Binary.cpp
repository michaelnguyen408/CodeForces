#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int>v(8);
    int k = 0;
    for (int i = 1; i <= 7; i++)
    {
        v[i] = n % 10;
        n /= 10;
        if (k < v[i]) k = v[i];
    }
    
    cout << k << endl;
    
    for (int i = 7; i >= 1; i--)
    {
        if (v[i] > 0)
        {
            int result = 1;
            for (int j = i - 1; j >= 1; j--)
            {
                result *= 10;
                if (v[j] > 0)
                {
                    result++;
                    v[j]--;
                }
            }
            cout << result << " ";
            
            v[i]--;
            if (v[i] > 0) i++;
        }
    }
}