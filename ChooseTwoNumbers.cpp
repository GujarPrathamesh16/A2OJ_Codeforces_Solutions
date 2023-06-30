#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int>A;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    cin>>m;
    vector<int>B;  
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    vector<int> sums;
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum = A[i]+B[j];
            sums.push_back(sum);
        }
    }
    cout<<endl;
    return 0;
}