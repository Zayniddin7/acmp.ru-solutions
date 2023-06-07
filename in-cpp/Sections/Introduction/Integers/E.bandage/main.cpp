#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int sum = n/10;
    if(n%10 > 0){
        sum += 1;
    }
    cout <<sum;
    return 0;
}
