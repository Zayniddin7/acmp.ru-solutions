#include <iostream>
using namespace std;

int main(){
    int l1, w1, h1, l2, w2, h2, lc, wc, hc;
    cin >>l1 >>w1 >>h1 >>l2 >>w2 >>h2 >>lc >>wc >>hc;
    if(h1+h2 <= hc){
        if(min(l1,w1) <= min(lc,wc) &&
           max(l1,w1) <= max(lc,wc) &&
           min(l2,w2) <= min(lc, wc) &&
           max(l2,w2) <= max(lc, wc))
            cout <<"YES";
        else
            cout <<"NO";
    }
    else if(max(h1,h2) > hc)
        cout <<"NO";
    else if((max(l1,l2) <= lc && w1 +w2 <= wc) ||
           (max(w1,l2) <= lc && l1 +w2 <= wc) ||
           (max(l1,w2) <= lc && w1 +l2 <= wc) ||
           (max(w1,w2) <= lc && l1 +l2 <= wc) ||
           (max(l1,l2) <= wc && w1 +w2 <= lc) ||
           (max(w1,l2) <= wc && l1 +w2 <= lc) ||
           (max(l1,w2) <= wc && w1 +l2 <= lc) ||
           (max(w1,w2) <= wc && l1 +l2 <= lc))
           cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
