#include <iostream>
#include <string>
#include <map>
#include<vector>
using namespace std;
int main(){

    int n,c=0;
    cin >> n;
    map<string, string> stones;
    map<string,int> helper;
    stones["purple"] = "Power";
    stones["green"] = "Time";
    stones["blue"] = "Space";
    stones["orange"] = "Soul";
    stones["red"] = "Reality";
    stones["yellow"] = "Mind";
    helper["purple"] = 0;
    helper["green"] = 0;
    helper["blue"] = 0 ;
    helper["orange"] = 0;
    helper["red"] =  0;
    helper["yellow"] = 0;
    map<string, string>::iterator it;
    map<string,int>::iterator itr;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (it = stones.begin(); it != stones.end(); it++){
            if(s==it->first){
                helper[s]=1;
                break;
            }
        }  
    }
     cout<<(6-n)<<endl;
    for (itr = helper.begin(); itr!= helper.end(); itr++){
        if(itr->second==0){
            cout<<stones[itr->first]<<endl;
        }
    }
    return 0;
}