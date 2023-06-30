#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    string s, a = "", b = "";
    cin >> s;
    map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }
    if (freq['0'] != freq['1'])
    {
        cout << "1" << endl
             << s << endl;
    }
    else
    {
        if (n == 2)
        {
            cout << "2" << endl<< s[0] << "\t" << s[1] << endl;
        }
        else{
            
            cout << "2" << endl<< a << "\t" << b << endl;
        }
    }

    return 0;
}