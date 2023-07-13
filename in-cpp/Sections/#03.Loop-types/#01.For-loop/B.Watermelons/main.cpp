#include <iostream>
using namespace std;

int main(){
    int a, n, min, max;
    cin >>n >>a;
    min = a;
    max = a;
    for(int i=2; i <= n; ++i){
        cin >>a;
        if (a < min) min=a;
        if(a > max) max=a;
    }
    cout <<min <<" " <<max;
    return 0;
}
