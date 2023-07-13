#include <iostream>
using namespace std;
int main(){
    int k, w, a1, a2, a3, b1, b2, b3;
    cin >>k >>w >>a1 >>b1 >>a2 >>b2 >>a3 >>b3;
    cout <<((a1 <= w and b1 >= k) or
            (a2 <= w and b2 >= k) or
            (a3 <= w and b3 >= k) or
            (a1+a2 <= w and b1+b2 >= k) or
            (a1+a3 <= w and b1+b3 >= k) or
            (a2+a3 <= w and b2+b3 >= k) or
            (a1+a2+a3 <= w and b1+b2+b3 >=k) ?
            "YES" : "NO");
    return 0;
}
