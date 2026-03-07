#include <iostream>
using namespace std;
// int maxArea(int height[], int n){
//     int maxWater = 0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             int width=j-i;
//             int water = min(height[i], height[j])*width;
//             maxWater = max(maxWater, water);
//         }
//     }
//     return maxWater;
// }
// int main(){
//     int height[] = {1,8,6,2,5,4,8,3,7};
//     int n = sizeof(height) / sizeof(height[0]);
//     cout<<"maximum water: "<<maxArea(height, n);
//     return 0;
// }



int maxArea(int height[], int n) {
    int left = 0, right = n-1;
    int maxWater = 0;

    while (left<right) {
        int width = right - left;
        int currWater = min(height[left], height[right]) * width;
        maxWater = max(maxWater, currWater);

        if (height[left]<height[right])
            left++;
        else
            right--;
    }
    return maxWater;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);

    cout<<"maximum water: "<<maxArea(height, n);
    return 0;
}
