#include<iostream>
using namespace std;
int main(){
    int y,x;
    cout << "Enter the value of x";
    cin >> x;
    if((x>=4) && (x < 7)){
        x=y;
        cout << x;
    }
    else if(x>=7){
        x=1;
        cout << x;
    }
    else{
        cout << "Undefined";
    }
}