#include<iostream>
using namespace std;
int main(){
    unsigned int numberOfKills, numberOfAssist, numOfDeaths, score;
    cout << "Enter Number of Kills : ";
    cin >> numberOfKills;
    cout << "Enter Number of Assists : ";
    cin >> numberOfAssist;
    cout << "Enter Number of Deaths : ";
    cin >> numOfDeaths;
    score = (numberOfKills * 100) + (numberOfAssist * 50) - (numOfDeaths * 20);
    if(score > 1000){
        cout << "Excellent Performace: Keep it up!\n";
    }
    else if(score < 500){
        cout << "Need Improvement: Focus on strategy\n";
    }
    else{
        cout << "Something went wrong...\n";
    }

    return 0;
}