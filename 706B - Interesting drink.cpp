#include<iostream>
#include<algorithm>

using namespace std;

int main ()
{
    int n, q;
    cin >> n;
    
    int shops[n];
    
    for (int i = 0; i < n; i++)
        cin >> shops[i];
    sort(shops, shops + n);
    
    cin >> q;
    int coins;
    for (int i = 0; i < q; i++)
    {
        cin >> coins;
        
        if (coins < shops[0])
            cout << 0 << endl;
        else if (coins > shops[n - 1])
            cout << n << endl;
        else
        {
            int l = 0, r = n - 1, mid;
            while (l < r)
            {
                mid = l + (r - l + 1) / 2;
                if (coins < shops[mid])
                    r = mid - 1;
                else
                    l = mid;
            }
            cout << l + 1 << endl;
        }
    }
}