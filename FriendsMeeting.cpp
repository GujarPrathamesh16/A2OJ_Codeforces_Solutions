#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, diff, k, sum = 0;
    cin >> a >> b;
    diff = abs(a - b);
    if (diff > 1){
        
        k = diff / 2;
        for (int i = 1; i <= k; i++)
        {
            sum = sum + i;
        }
        if (diff % 2 == 0)
        {
            cout << 2 * sum << endl;
        }
        else
        {
            cout << (2 * sum )+ k + 1 << endl;
        }
    }
    else
    {
        cout << "1" << endl;
    }
    return 0;
}