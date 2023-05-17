#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x1, x2, y1, y2;
    cout.precision(5); cout <<fixed;
    cin >>x1 >>y1 >>x2 >>y2;
    cout <<(sqrt((x2-x1)*(x2-x1) + (y2-y1)* (y2-y1)));
}
