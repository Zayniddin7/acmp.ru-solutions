#include <iostream>
using namespace std;
int main(){
    char x1, x2;
    int y1, y2;
    bool nobody = true;
    cin >>x1 >>y1 >>x2 >>y2;
    if(abs(x1-x2)==abs(y1-y2) || x1==x2 || y1==y2){
        cout <<"Queen\n";
        nobody = false;
    };
    if(x1==x2 || y1==y2) cout <<"Rook\n";
    if(abs(x1-x2)==abs(y1-y2)) cout <<"Bishop\n";
    if( abs((x1-x2)*(y1-y2))==2){
        cout <<"Knight\n";
        nobody = false;
    };
    if(max(abs(x1-x2), abs(y1-y2))==1) cout <<"King\n";
    if(y1>1 && x1==x2 && (y2-y1==1 || (y1==2 && y2==4))) cout <<"Pawn\n";
    if(nobody) cout <<"Nobody\n";
    return 0;
}
