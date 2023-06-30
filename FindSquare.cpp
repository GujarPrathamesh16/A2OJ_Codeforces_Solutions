#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x=0,y=0,p=0,q=0,flag=0;
    cin>>n>>m;
    char c;
    vector<vector<char>>a;
    for(int i=0;i<n;i++){
        vector<char>temp;
        for(int j=0;j<m;j++){
            cin>>c;
            temp.push_back(c);
        }
        a.push_back(temp);
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 'B' && flag==0){
                x = i;
                y = j;
                flag = 1;
            }
            if(a[i][j]=='B' && (a[i][j+1]=='W' || j==m-1) && flag==1){
                q = j;
                flag = 2;
            }
            if(a[i][j]=='B'){
                if(j==0 || a[i][j-1] == 'W'){
                    if(i==n-1 || a[i+1][j]=='W'){
                        if(flag==2){
                            flag = 3;
                            p = i;
                        }
                    }
                }
            }
        }
    }
    
    int xDiff = (x+(q-y)/2)+1;
    int yDiff = (y+(p-x)/2)+1;
    cout<<(xDiff)<<"\t"<<(yDiff)<<endl;
    return 0;
}