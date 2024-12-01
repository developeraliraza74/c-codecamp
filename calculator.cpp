/*
    start
        display "Enter first Number"
        input num1
        display "Enter second Number"
        input num2
        display "Sum is : ", a+b
        display "Modulus is : ", a%b
        display "product is : ", a*b
        display "division is : ", a/b
    END

*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter first Number : ";
    cin >> num1;
    cout << "Enter second Number : ";
    cin >> num2;
    cout << "Sum of " << num1 << " and " << num2 <<" is: " << num1+num2 << endl;
    cout << "Product of " << num1 << " and " << num2 <<" is: " << num1*num2 << endl;
    cout << "Division of " << num1 << " and " << num2 <<" is: " << num1/num2 << endl;
    cout << "Modulus of " << num1 << " and " << num2 <<" is: " << num1%num2 << endl;

}