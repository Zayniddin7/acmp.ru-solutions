#include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cin >>n;
    if(n%5 == 3) x=1;
    if(n%5 == 4) x=3;
    if(n%5 == 0) x=0;
    if(n%5 == 1) x=2;
    if(n%5 == 2) x=4;
    y = (n-x*3) / 5;
    cout <<y <<" " <<x;
    return 0;
}
