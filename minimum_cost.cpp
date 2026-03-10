#include <iostream>
#include <climits>
using namespace std;
int minimumCost(int cost1, int cost2, int costBoth, int need1, int need2){
    int maxBoth = min(need1, need2);
    int ans = INT_MAX;
    
    for(int both=0; both<=maxBoth; both++){
        int rem1 = need1-both; 
        int rem2 = need2-both;
        if(rem1<0)
        rem1=0;
        if(rem2<0)
        rem2=0;
        int totalCost = both*costBoth+rem1*cost1+rem2*cost2;
        ans = min(ans, totalCost);
    }
    return ans;

}
int main(){
    int cost1 = 3, cost2 = 4, costBoth =5;
    int need1 = 2, need2 = 3;
    cout<<minimumCost(cost1, cost2, costBoth, need1, need2);
    return 0;
}