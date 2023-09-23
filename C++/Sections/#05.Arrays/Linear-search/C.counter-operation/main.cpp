#include <iostream>
using namespace std;

int main(){
    int arr[1000], n, mn=1001, mx=-1001;
    cin >>n;
    for(int i=0; i<n; i++){
        cin >>arr[i];
        if(arr[i] < mn) mn = arr[i];
        if(arr[i] > mx) mx = arr[i];
    }
    for(int i=0; i<n; i++){
        if(mx == arr[i]) arr[i]=mn;
        cout <<arr[i] <<" ";
    }
}
