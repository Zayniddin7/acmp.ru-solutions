#include <iostream>
using namespace std;

int main(){
    int cnt=1,y=1,a,b;
    cin>>b;
    do{
        a=b;
        cin>>b;
        if(a==b)cnt++;
        else{
            if(cnt>y)y=cnt;cnt=1;
        }
    }while(b);
    cout<<y;
    return 0;
}
