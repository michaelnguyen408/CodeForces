#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    
    vector<int> girls(n);
    for (int i = 0; i < n; i++)
        cin >> girls[i];
    
    cin >> m;
    vector<int> boys(m);
    for(int i = 0; i < m; i++)
        cin >> boys[i];
    
    sort(girls.begin(),girls.end());
    sort(boys.begin(),boys.end());
    
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(girls[i] - boys[j]) <= 1)
            {
                result++;
                boys[j] = 102;
                break;
            }
        }
    }
    
    cout << result << endl;
}