/*
    START
    initialize float variables sub1, sub2, sub3, sub4
    DISPLAY "Enter sub1"
    Input sub1
    DISPLAY "Enter sub1"
    Input sub2
    DISPLAY "Enter sub1"
    Input sub3
    DISPLAY "Enter sub1"
    Input sub4
    DISPLAY SUB1 Marks \t
    DISPLAY SUB2 Marks \t
    DISPLAY SUB3 Marks \t
    DISPLAY SUB4 Marks \n
    DISPLAY ------------------------\n
    DISPLAY SUB1 value\t
    DISPLAY SUB2 value\t
    DISPLAY SUB3 value\tx
    DISPLAY SUB4 value\n

*/

#include<iostream>
using namespace std;
int main(){
    float s1, s2, s3, s4;
    cout << "Enter Subj1 Marks : ";
    cin >> s1;
    cout << "Enter Subj2 Marks : ";
    cin >> s2;
    cout << "Enter Subj3 Marks : ";
    cin >> s3;
    cout << "Enter Subj4 Marks : ";
    cin >> s4;

    cout << "Subj1 Marks\tSubj2 Marks\tSubj3 Marks\tSubj4 Marks\n";
    cout << "-------------------------------------------------------------\n";
    cout << s1 << "\t\t" << s2 << "\t\t" << s3 << "\t\t" << s4 << "\n";
}


