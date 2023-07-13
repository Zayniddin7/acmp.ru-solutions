#include <iostream>
using namespace std;

int main(){
    int arr[1001], mx_id, n, l, r;
    cin >>n;
    for(int i=1; i<=n; i++){
        cin >>arr[i];
    }
    cin >>l;
    cin >>r;
    mx_id = l;

    for(int i=l+1; i<=r; i++){
        if(arr[mx_id] < arr[i]) mx_id = i;
    }
    cout << arr[mx_id] <<" " <<mx_id <<endl;
}
