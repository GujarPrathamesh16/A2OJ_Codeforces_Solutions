#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int findDistinct(string s){
    set<char>uniq;
    for(ll i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i]<='z'){
            uniq.insert(s[i]);
        }
    }
    return uniq.size();
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = -1, start, end, ans = 0, maxi = INT_MIN;
    if (n == 1){
        if (s[0] >= 'a' && s[0] <= 'z'){
            ans = 1;
        }
        cout<<ans<<endl;
    }
    else{
        for (int i = 0; i < s.length(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                if (flag == 0 || flag == -1){
                    start = i;
                    flag = 1;
                }
                else{
                    flag = 0;
                    end = i;
                    int x = (findDistinct(s.substr(start, end - (start-1))));
                    if (x > maxi){
                        maxi = x;
                    }
                }
            }
        }
        if(flag == -1){
            ans = findDistinct(s);
        }
        else{
            ans = maxi;
        }
        cout << ans << endl;
    }
    return 0;
}