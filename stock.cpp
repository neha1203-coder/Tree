#include <iostream>
using namespace std;
int maxProfit(int prices[], int n){
    int minPrice = prices[0];
    int maxProfit = 0;
    for(int i=1; i<n; i++){
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i]-minPrice);

    }
    return maxProfit;
}
int main(){
    int n = 6;
    int prices[] = {7,1,5,3,6,4};
    cout<<"maximum profit: "<<maxProfit(prices, n);
    return 0;
}