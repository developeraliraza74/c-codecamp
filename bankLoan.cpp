#include<iostream>
using namespace std;
int main(){
    unsigned int monthlySalary=0;
    unsigned int creditScore = 0;
    cout << "Enter Your Monthly Salary : $";
    cin >> monthlySalary;
    cout << "Enter Your Credit Score :$";
    cin >> creditScore;

    if((monthlySalary>=3000) && (creditScore >= 700)){
        cout << "You're eligible for bank loan";
    }
    else{
        cout << "We are very sorry but we can't give you loan\n";
    }
    return 0;
}