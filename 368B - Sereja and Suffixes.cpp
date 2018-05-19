#include<vector>
#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<int>v (n);
    vector<int>db(n+1);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    vector<bool> found(1000000);
    
    
    db[n] = 1;
    found[v[n-1]] = true;
    for (int i = n - 1; i >= 0; i--)
    {
        int iter = v[i];
        if (found[iter])
            db[i] = db[i+1];
        else
        {
            db[i] = db[i+1] + 1;
            found[iter] = true;
        }
    }
    
    int l;
    for (int i = 0; i < m; i++)
    {
        cin >> l;
        
        cout << db[l-1] << endl;
    }
}