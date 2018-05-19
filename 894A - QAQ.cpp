#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int len = s.size();
    
    
    vector<char> v;
    for (int i = 0; i < len; i++)
        if (s[i] == 'Q' || s[i] == 'A')
            v.push_back(s[i]);
            
    len = v.size();
    
    int result = 0;
    for (int i = 0; i < len - 2; i++)
        for (int j = i + 1; j < len - 1; j++)
            for (int k = j + 1; k < len; k++)
                if (v[i] == 'Q' && v[j] == 'A' && v[k] == 'Q')
                    result++;
    
    cout << result;
}