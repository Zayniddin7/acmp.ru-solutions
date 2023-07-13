#include <iostream>
using namespace std;

int main(){
    int a, cnt=1, c;
    cin>>a;
    do{
        cin>>c;
        if (c>a){a=c; cnt=1;}
        else if (c==a) cnt++;
    }while (c != 0);
    cout <<cnt;
    return 0;
}
