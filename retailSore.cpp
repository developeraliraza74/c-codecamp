/*
    START
        initialize item1Price, item2Price, item3Price, item1Quantity, item2Quantity, item3Quantity totalAmount, finalAmount, discountAmount, 
        Display "Enter item1 Price"
        Input item1Price
        Display "Enter item1 Quantity"
        Input item1Quantity
        Display "Enter item2 Price"
        Input item2Price
        Display "Enter item1 Quantity"
        Input item1Quantity
        Display "Enter item3 Price"
        Input item3Price
        Display "Enter item1 Quantity"
        Input item1Quantity
        
        
        
        SET totalAmount = (item1Price * item1Quantity) + (item2Price * item2Quantity) + (item3Price * item3Quantity) 
        SET discountAmount = totalAmount * 0.10
        SET finalAmount = totalAmount - discountAmount

        DISPLAY \tItem \tPrice\t Quantity\n
        DISPLAY \tItem1\titem1Price\titem1Quantity\n
        DISPLAY \tItem2\titem2Price\titem2Quantity\n
        DISPLAY \tItem3\titem3Price\titem3Quantity\n

        DISPLAY "Total Amount : ", totalAmount\n
        DISPLAY "discount Amount : ", discountAmount\n 
        DISPLAY "Final Amount : ", finalAmount \n
    END
         
 */

#include<iostream>
using namespace std;
int main(){
    int item1Price, item2Price, item3Price, item1Quantity, item2Quantity, item3Quantity, totalAmount, finalAmount, discountAmount;
    string item1, item2, item3;
    cout << "Enter Item 1 Name : ";
    cin >> item1;
    cout << "Enter item 1 Price : ";
    cin >> item1Price;
    cout << "Enter item 1 Quantity : ";
    cin >> item1Quantity;
     cout << "Enter Item 2 Name : ";
    cin >> item2;
    cout << "Enter item 2 Price : ";
    cin >> item2Price;
    cout << "Enter item 1 Quantity : ";
    cin >> item2Quantity;
     cout << "Enter Item 3 Name : ";
    cin >> item3;
     cout << "Enter item 3 Price : ";
    cin >> item3Price;
    cout << "Enter item 1 Quantity : ";
    cin >> item3Quantity;

    totalAmount = (item1Price * item1Quantity) + (item2Price * item2Quantity) + (item3Price * item3Quantity);
    discountAmount = totalAmount * 0.10;
    finalAmount = totalAmount - discountAmount;

    cout << "\t Item\t\tPrice\t\tQuantity\n";
    cout << "-------------------------------------------\n";
    cout << "\t "<<item1<< "\t\t" << item1Price << "\t\t\t" << item1Quantity << endl;
    cout << "\t "<<item2<< "\t\t" << item2Price << "\t\t\t" << item2Quantity << endl;
    cout << "\t "<<item3<< "\t\t" << item3Price << "\t\t\t" << item3Quantity << endl <<endl;
    cout << "-------------------------------------------\n";
    cout << "\t Total Amount : \t\t" << totalAmount <<endl;
    cout << "\t discount Amount : \t\t" << discountAmount << endl;
    cout << "\t Final bill : \t\t\t" << finalAmount << endl;
    return 0; 
}