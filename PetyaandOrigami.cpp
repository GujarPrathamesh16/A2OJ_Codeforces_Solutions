#include<iostream>
using namespace std;
int main(){
    int k,n,count=0;
    cin>>n>>k;
    int red,blue,green;
    red = n*2;
    blue = n*8;
    green = n*5;
    if(red%k==0){
        count = count = count + red/k;
    }
    else{
        count = count = count + (red/k)+1;
    }
    if(blue%k==0){
        count = count = count + blue/k;
    }
    else{
        count = count = count + (blue/k)+1;
    }
    if(green%k==0){
        count = count = count + green/k;
    }
    else{
        count = count = count + (green/k)+1;
    }
    cout<<count<<endl;
    return 0;
}