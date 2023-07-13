#include <iostream>
using namespace std;

int main(){
    int arr[1000], n, x, cnt = 0;
    cin >>n;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    cin >>x;
    for(int i=0; i<n; i++){
        if(arr[i]==x)cnt++;
    }
    cout <<cnt;
    return 0;
}
