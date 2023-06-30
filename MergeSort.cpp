#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int merge(int a[], int temp[], int low, int mid, int high){

    int i=low, j=mid+1, k=low, ans=0;

    while(i <= mid-1 && j<=high){
        if(a[i] <= a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            ans += (mid-i);
        }
    }

    while(i<=mid-1){
        temp[k++] = a[i++];
    }
    while(j<=high){
        temp[k++] = a[j++];
    }
    return ans;
}

int mergeSort(int a[], int temp[], int low, int high){
    int ans = 0;

    if(low < high){
        int mid = (low+high)/2;
        ans += mergeSort(a, temp, low, mid);
        ans += mergeSort(a, temp, mid+1, high);
        ans += merge(a,temp,low,mid,high);
    }
    return ans;

}

int main(){
    int arr[] = {5,3,2,4,1};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp[n];
    int ans = mergeSort(arr,temp,0,n-1);
    cout<<ans<<endl;
}