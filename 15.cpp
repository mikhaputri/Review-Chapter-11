//
//  15.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 18/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

struct hourlyPaid
{
    int hoursWorked;
    float hourlyRate;
};

struct salaried
{
    int salary;
    int bonus;
};

union firstData
{
    int hoursWorked;
    int salary;
};
    
union secondData
{
    int hourlyRate;
    int bonus;
};
    
int main ()
{
    firstData hours, regSalary;
    secondData rate,extraBonus;
    int total;
    char choice;
    cout<<"Which one do you want to calculate? Enter H for Hourly Paid Worker or S for Salaried Worker: ";
    cin>>choice;
    
    if (choice == 'h' || choice == 'H')
    {
        cout<<"How many hours you worked? ";
        cin>>hours.hoursWorked;
        while(hours.hoursWorked < 0 || hours.hoursWorked>80)
        {
            cout<<"Input cannot be negative or greater than 80"<<endl;
            cout<<"Hours worked: ";
            cin>>hours.hoursWorked;
        }
        
        cout<<"What is the hourly rate?";
        cin>>rate.hourlyRate;
        
        total = hours.hoursWorked * rate.hourlyRate;
        cout<<"The total payment is "<<total<<endl;
    }
    else if (choice == 's' || choice == 'S')
    {
        cout<<"How much is your salary?";
        cin>>regSalary.salary;
        
        cout<<"How much is your bonus?";
        cin>>extraBonus.bonus;
        
        total = regSalary.salary + extraBonus.bonus;
        cout<<"The total payment is $"<<total<<endl;
    }
}