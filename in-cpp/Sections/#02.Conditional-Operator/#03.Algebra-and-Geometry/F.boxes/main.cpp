#include <iostream>
using namespace std;
int main(){
    int a, b, c, A, B, C;
    cin >>a >>b >>c >>A >>B >>C;
    if(a>b) swap(a,b);
    if(a>c) swap(a,c);
    if(b>c) swap(b,c);
    if(A>B) swap(A,B);
    if(A>C) swap(A,C);
    if(B>C) swap(B,C);
    if(a == A && b == B && c == C) cout <<"Boxes are equal";
    else if(a <= A && b <= B && c <= C) cout <<"The first box is smaller than the second one";
    else if(a >= A && b >= B && c >= C) cout <<"The first box is larger than the second one";
    else cout <<"Boxes are incomparable";
    return 0;
}
