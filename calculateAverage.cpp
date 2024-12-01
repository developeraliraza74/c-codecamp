/*
    START
    initialize marks = 0
    initialize i = 0
    initialize totalMarks = 0
    initialize float avg = 0;
    while(i<5) DO
        cout << "Enter marks of " << i << " subject"
        cin >> marks
        totalMarks = totalMarks + marks
        i++
    END While
    Set Avg to totalMarks/4;
    DISPLAY "Average is : ", avg;
*/
#include<iostream>
using namespace std;
int main(){
    float marks = 0;
    int i = 1;
    float totalMarks = 0;
    float avg = 0;
    while(i<5){
        cout << "Enter marks of Subject " << i << ": ";
        cin >> marks;
        totalMarks += marks;
        i++;
    }
    avg = totalMarks/4;
    cout << "The average is : " << avg;
}