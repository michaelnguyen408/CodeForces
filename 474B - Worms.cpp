#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> q(n + 1);
    long long sum = 0;
    q[0] = 0;
    cin >> q[1];
    sum += q[1];
    q[1]++;

    for (int i = 2; i <= n; i++)
    {
        cin >> q[i];
        sum += q[i];
        q[i] += q[i - 1];
    }

    vector<int> piles(sum + 1);
    long long pile = 1;
    for (long long i = 0; i <= sum; i++)
    {
        if (i == q[pile]) pile++;
        piles[i] = pile;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        cout << piles[a] << endl;
    }
}