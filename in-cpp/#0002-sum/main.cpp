#include <iostream>
using namespace std;

int main(){
    int a, sum = 0;
    cin >>a;
    if(a > 0){
        for(int i = 1; i <= a; ++i) sum += i;
    }
    else{
        for(int i = 1; i >= a; --i) sum += i;
    }
    cout  <<sum;
    return 0;
}
