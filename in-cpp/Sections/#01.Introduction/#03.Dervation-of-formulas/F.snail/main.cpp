#include <iostream>
#include <cmath>
using namespace std;
 int main() {
    int a, b, h, x;
    cin >>h >>a >>b;
    x = (h-b-1) /(a-b);
    cout <<max(x,0)+1;
return 0;
}
