#include<iostream>

using namespace std;

int main()
{
    long long k;
    cin >> k;

    long long b = k / 2;
    cout << b << endl;
    
    for (int i = 1; i < b; i++)
        cout << "2 ";
    
    if (k % 2 == 0)
        cout << "2";
    else
        cout << "3";
}