//
//  7.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 17/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int const NAME_WORD =9999;

struct customerData
{
    char name [NAME_WORD];
    string address;
    string cityStateZip;
    int telNumber;
    int accountBalance;
    int dateLastPay;
};

int main ()
{
    const int amountData = 1;
    customerData info[amountData];
    cout<<"How many data you want to input?";
    cin>>amountData;
    cin.ignore();
    
    
    for(int i = 0; i<=amountData; i++)
    {
        cout<<"Name: ";
        //cin.getline (info[i].name, NAME_WORD);
        
    }
}
