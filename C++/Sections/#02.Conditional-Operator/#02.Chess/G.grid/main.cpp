#include <iostream>
using namespace std;
int main(){
    char symbol;
    int y;
    cin >>symbol >>y;
    cout <<( (symbol+y)%2==0 ? "BLACK" : "WHITE" );
    return 0;
}
