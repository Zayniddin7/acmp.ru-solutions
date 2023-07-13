#include <iostream>
using namespace std;

int main(){
    int x, mx1=0, mx2=0;
    do{
        cin >>x;
        if(x>mx1){
            mx2=mx1; mx1=x;
        }else if(x>mx2)mx2=x;
    }while(x!=0);
    cout <<mx2;
    return 0;
}
