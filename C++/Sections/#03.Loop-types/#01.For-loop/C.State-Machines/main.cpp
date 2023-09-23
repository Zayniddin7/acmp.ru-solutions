#include <iostream>
using namespace std;

int main(){
    int a, n, m;
    cin >>a;
    for(int i=0; i < a; ++i){
        cin >>n >>m;
        cout <<19*m + (n+239)*(n+366) / 2 <<endl;
    }
    return 0;
}
