#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    cout <<(n == 1 ? 0 : n%2 ==1 ? n : n/2);
    return 0;
}
