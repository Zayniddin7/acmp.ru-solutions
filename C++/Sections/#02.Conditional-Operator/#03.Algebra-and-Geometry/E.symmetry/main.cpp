#include <iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2, x, y;
    cin >>x1 >>y1 >>x2 >>y2 >>x >>y;
    if(y1==y2)cout <<x <<" " <<2*y1-y;
    else cout <<2*x2-x <<" " <<y;
    return 0;
}
