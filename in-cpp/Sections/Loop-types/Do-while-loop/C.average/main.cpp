#include <iostream>
using namespace std;

int main(){
    int x, sum=0, cnt=0;
    cout.precision(6); cout <<fixed;
    do{
        cin >>x;
        sum += x;
        cnt++;
    }while(x != 0);
    cout <<1.0*sum/(cnt-1);
    return 0;
}
