  #include <iostream>
  using namespace std;
  int main(){
    int arr[] = {5,10,20,40,80};
    int n = sizeof(arr)/4;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int brr[n];
    for(int i=0; i<n; i++){
        brr[i]=arr[n-1-i];
    }
    for(int i=0; i<n; i++){
        cout<<brr[i]<<" ";
    }
    return 0;
  }