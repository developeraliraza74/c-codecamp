/*
    regular ticket 2000
    vip ticket 5000

    total expense 500000


    START
        display "Enter regular tickets: "
        input regularTicket
        Display "VIP Tickets sold : "
        input vipTicket
        calculate totalfund = (vipTicket * 5000) + (regularTicket * 2000)
        if(totalfund > 500000) do
            DISPLAY Well Managed
        else if(totalfund == 500000) do
            DISPLAY "Fully Achieved"
       else
            DISPLAY "Fall Below"
        end if
    END
*/

#include<iostream>
using namespace std;
int main(){
    int regularSold, vipSold, totalfund;
    cout << "Number of Regular Tickets Sold : ";
    cin >> regularSold;
    cout << "Number of VIP Tickets Sold : ";
    cin >> vipSold;

    totalfund = (regularSold * 2000) + (vipSold * 5000);
    if(totalfund > 500000){
        cout << "Well Managed and gained profit\n";
    }
    else if(totalfund == 500000){
        cout << "Fully Achieved\n";
    }
    else{
        cout << "Fall Below the allocated fund\n";
    }
    cout << "Thanks for Using this :-)";

    return 0;
}