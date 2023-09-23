#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >>n >>m;
    cout <<(n+1)*m+(m+1)*n+n+m-2*(n*m%2==1||min(n, m)==1) <<endl;
    return 0;
}
