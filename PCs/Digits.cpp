#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

// COCI 2011/2012 4th round
int main()
{
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;

    stack<char> chars;

    for (int i = 0; i < n; i++)
    {
            while (!chars.empty() && s[i] > chars.top() && k)
            {
                chars.pop();
                k--;
            }
        chars.push(s[i]);
    }

    string output;
    while (!chars.empty())
    {
        output += chars.top();
        chars.pop();
    }
    reverse(output.begin(),output.end());

    cout << output;
}