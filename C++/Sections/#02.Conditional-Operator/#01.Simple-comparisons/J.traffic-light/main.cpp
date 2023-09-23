#include <iostream>
using namespace std;
int main (){
    string r,y,g;
    cin>>r>>y>>g;
    if(r == "black" && y == "black" && g == "green")
        cout<<"black\nblack\nGREEN\n";
    else if(r == "black" && y == "black" && g == "GREEN")
        cout<<"black\nyellow\nblack\n";
    else if(r == "black" && y == "yellow" && g == "black")
        cout<<"red\nblack\nblack\n";
    else if(r == "red" && y == "black" && g == "black")
        cout<<"red\nyellow\nblack\n";
    else if(r == "red" && y == "yellow" && g == "black")
        cout<<"black\nblack\ngreen\n";
    else if(r == "black" && y == "YELLOW" && g == "black")
        cout<<"black\nYELLOW\nblack\n";
    else
        cout<< "error";
    return 0;
}
