#include <iostream>
using namespace std;
int main(){
    int n=7;
    int arr[] ={3,-5,3,5,-1,9,-8};
    int currsum;
    int maxSum=arr[0];
    for(int st=0; st<n; st++){
        currsum=0;
        for(int end=st; end<n; end++){
            currsum+=arr[end];
            maxSum=max(currsum, maxSum);
            
            }

        }
    // for(int i=0; i<n; i++){
    //     currsum+=arr[i];
    //     maxSum = max(maxSum, currsum);
    //     if(currsum<0)
    //         currsum = 0;
        
    // }
        
    
    cout<<"maximum subarray sum:"<<maxSum<<endl;
    
    return 0;
}