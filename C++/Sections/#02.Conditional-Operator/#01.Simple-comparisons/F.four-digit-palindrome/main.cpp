#include <iostream>
using namespace std;
int main (){
int n;
cin >>n;
    if (n%10 == n/1000 and n/10%10 == n/100%10)cout <<"YES";
    else cout <<"NO";
}
