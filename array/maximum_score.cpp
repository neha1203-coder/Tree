#include <iostream>
using namespace std;
int maxScore(int nums[], int n){
    int suffixMin = nums[n-1];
    for(int i=n-2; i>=1; i--){
        suffixMin = min(suffixMin, nums[i]);

    }
int prefixSum=0;
int maxScore=nums[0];
for(int i=0; i<n-1; i++){
    prefixSum += nums[i];
    int score = prefixSum - suffixMin;
    maxScore = max(maxScore, score);
    suffixMin = min(suffixMin, nums[i+1]);
}
return maxScore;
}
int main(){
    int nums[]= {10,-1,3,-4,-5};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<maxScore(nums, n);
    return 0;
}