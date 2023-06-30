#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    string addBinary(string a, string b) {

        int n = a.length();
        int m = b.length();
        string ans = "";

        if((n==1 || m==1) && (a[0]=='0' || b[0]=='0')){
            ans = (a[0]=='0') ? b : a;  
        }
        else{

            int maxi = max(n,m);

            if(maxi == m){
                for(int k=0; k<(m-n); k++){
                    a = "0" + a;
                }
            }
            else{
                for(int k=0; k<(n-m); k++){
                    b = "0" + b;
                }
            }

            int i=maxi-1, carry=0; 

            while(i>=0){
                if(a[i]=='0' && b[i]=='0'){
                    if(carry == 0){
                        ans = "0" + ans;
                    }
                    else{
                        ans = "1" + ans;
                        carry = 0;
                    }
                }
                else if(a[i]=='0' && b[i]=='1'){
              
                    if(carry == 0){
                        ans = "1" + ans;
                    }
                    else{
                        ans = "0" + ans;
                        carry = 1;
                    }
                }
                else if(a[i]=='1' && b[i]=='0'){
         
                    if(carry == 0){
                        ans = "1" + ans;
                    }
                    else{
                        ans = "0" + ans;
                        carry = 1;
                    }
                }
                else{
                    if(carry == 0){
                        ans = "0" + ans;
                    }
                    else{
                        ans = "1" + ans;
                    }
                    carry = 1;                
                }
                i--;
            }

            if(carry == 1){
                ans = "1" + ans;
            }
        }
        return ans;
    }
};