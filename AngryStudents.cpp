#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--){

        int k, c = 0, ans=0;
        cin >> k;
        vector<char> s;

        for (int i = 0; i < k; i++){
            char c;
            cin >> c;
            s.push_back(c);
        }
        for(int i=k-1;i>=0;i--){
            if(s[i]=='P'){
                c++;
            }
            else{
                ans = max(ans,c);
                c=0;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}