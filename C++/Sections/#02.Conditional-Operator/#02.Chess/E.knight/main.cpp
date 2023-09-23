#include <iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin >>x1 >>y1 >>x2 >>y2;
    cout <<(abs((x1-x2)*(y1-y2))==2 ? "YES" : "NO");
    return 0;
}
