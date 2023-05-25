#include <iostream>
using namespace std;

int main(){
    int x, cnt=0, p=101;
    do{
        cin >>x;
        if(x>p)cnt++;
        p=x;
    }while(p!=0);
    cout <<cnt;
    return 0;
}
