#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3, ans="";
    cin>>s1>>s2>>s3;
    map<char, char> match;
    for(int i=0; i<s1.length(); i++){
        match[s1[i]] = s2[i];
    }

    for(int i=0; i<s3.length(); i++){
        if(s3[i] >= 'a' && s3[i] <= 'z'){
            ans += match[s3[i]];
        }
        else if(s3[i] >= 'A' && s3[i] <= 'Z'){
            
            char x = match[char(int(s3[i]) + 32)];
            // char y = char (int(x) - 32);
            ans += char (int(x) - 32);
        }
        else{
            ans += s3[i];
        }
    }

    cout<<ans<<endl;
    return 0;
}