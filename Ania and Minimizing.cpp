#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 0)
    {
        cout << s << endl;
    }
    else
    {

        if (n == 1)
        {
            s[0] = '0';
        }
        else
        {

            if (s[0] == '1')
            {
                int i = 1;
                while (k != 0 && i < n)
                {
                    if (s[i] != '0')
                    {
                        s[i] = '0';
                        k--;
                    }
                    i++;
                }
            }
            else
            {
                s[0] = '1';
                k--;
                int i = 1;
                while (k != 0 && i < n)
                {
                    if (s[i] != '0')
                    {
                        s[i] = '0';
                        k--;
                    }
                    i++;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}