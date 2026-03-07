#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            pageSum = arr[i];
            if(studentCount>m)
            return false;
        }
    }
    return true;

}
int bookAllocation(int arr[], int n, int m){
    if(m>n)
    return -1;
    int sum = 0; 
    int maxBook = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxBook = max(maxBook, arr[i]);
    }
    int start = maxBook, end=sum, ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossible(arr, n, m, mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {12,34,67,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m=2;
    cout<<bookAllocation(arr, n, m);
    return 0;
}

