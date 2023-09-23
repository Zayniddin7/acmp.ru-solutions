#include <iostream>
using namespace std;
int main(){
    int sum=0,a,b;
    cin>>b;
    do{
        sum+=b; a=b;
        cin>>b;
    }while(a+b);
    cout <<sum;
    return 0;
}
