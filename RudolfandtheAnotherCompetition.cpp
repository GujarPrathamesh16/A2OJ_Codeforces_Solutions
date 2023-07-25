#include <iostream>
#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> solve(vector<long long> v, long long h)
{
    sort(v.begin(), v.end());
    long long sum = 0, i = 0, prev = 0;
    while (sum + v[i] <= h && i < v.size())
    {
        sum += v[i];
        prev += sum;
        i++;
    }
    pair<long long, long long> ans;
    ans.first = i;
    ans.second = prev;
    return ans;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, h, ans = 0;
        cin >> n >> m >> h;
        vector<vector<long long>> times;
        for (long long i = 0; i < n; i++)
        {
            vector<long long> x;
            for (long long j = 0; j < m; j++)
            {
                long long val;
                cin >> val;
                x.push_back(val);
            }
            times.push_back(x);
        }
        if (n == 1)
        {
            ans = 0;
        }
        else
        {

            vector<pair<long long, long long>> helper;

            for (long long i = 0; i < n; i++)
            {
                helper.push_back(solve(times[i], h));
            }
            pair<long long, long long> rud = helper[0];
            for (long long i = 1; i < n; i++)
            {
                if (helper[i].first > rud.first)
                {
                    ans++;
                }
                else if (helper[i].first == rud.first && helper[i].second < rud.second)
                {
                    ans++;
                }
            }
        }
        cout << (ans + 1) << endl;
    }
    return 0;
}