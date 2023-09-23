#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, x1, x2;
    cin >>a >>b >>c;
    cout.precision(4); cout <<fixed;

    if(a==0){
        if(b==0){
            if(c==0)cout <<-1;
            else cout <<0;
        }
        else cout <<1 <<" " <<-c/b;
    }
    else{
        double d = b*b - 4*a*c;
        if (d==0){
            cout <<1 <<endl <<-b/(2*a);
        }
        else if(d>0){
            cout <<2 <<endl;
            x1 = (-b - sqrt(d)) / (2*a);
            x2 = (-b + sqrt(d)) / (2*a);
            cout <<x1 <<endl <<x2;
        }
        else cout <<0;
    }
    return 0;
}
