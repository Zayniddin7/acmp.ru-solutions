#include <iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin >>x1 >>y1 >>x2 >>y2;
    cout <<( y1>1 && x1==x2 && (y2-y1==1 || (y1==2 && y2==4)) ? "YES" : "NO");
    return 0;
}
