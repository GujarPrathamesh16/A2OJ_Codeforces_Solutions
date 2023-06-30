#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    int k, mini = INT_MAX;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> freq;
    for (int i = 0; i < n; i++){
        freq[s[i]]++;
    }
    if (k != freq.size()){
        cout << "0" << endl;
    }
    else{
        for (auto i : freq){
            if (i.second < mini){
                mini = i.second;
            }
        }
        cout << (mini*k) << endl;
    }

    return 0;
}