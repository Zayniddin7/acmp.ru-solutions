#include <iostream>
using namespace std;

int main(){
    int a=0,b=0,x,y;
    cin>>y>>x;
    do{
        cin>>b;
        if (b!=0&&x>b&&x>y)a++;
        y=x; x=b;
    }while (b!=0);
    cout<<a;
    return 0;
}
