#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    size_t len = s.length();
    
    if (len > 2)
        s = s.substr(s.length() - 2);
    
    int n = stoi(s);
    
    if (n % 4 == 0) cout << 4;
    else cout << 0;
}