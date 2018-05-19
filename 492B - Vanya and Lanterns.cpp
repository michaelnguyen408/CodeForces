#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main ()
{
    int n, l;
    cin >> n >> l;
    
    double lanterns[n];
    
    for (int i = 0; i < n; i++)
        cin >> lanterns[i];
    sort(lanterns, lanterns + n);
    
    double distance[n];
    distance[0] = 0;
    for (int i = 1; i < n; i++)
        distance[i] = max(lanterns[i] - lanterns[i - 1], distance[i - 1]);
    
    double result = max(distance[n - 1] / 2, max(lanterns[0] - 0, l - lanterns[n-1]));
    cout << fixed << setprecision(10) << result;
}