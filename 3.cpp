//
//  3.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 17/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

struct companyData
{
    string divisionName;
    unsigned int firstSales;
    unsigned int secondSales;
    unsigned int thirdSales;
    unsigned int fourthSales;
};

void dataInput(companyData input);

int main()
{
    companyData east;
    dataInput(east);
    
    companyData west;
    dataInput(west);
    
    companyData south;
    dataInput(south);
    
    companyData north;
    dataInput(north);
}

void dataInput(companyData input)
{
    cout<<"Plese enter the division: ";
    cin>>input.divisionName;
    
    cout<<"Please enter the first quarter sales of this division: ";
    cin>>input.firstSales;
    
    cout<<"Please enter the second quarter sales of this division: ";
    cin>>input.secondSales;
    
    cout<<"Please enter the third quarter sales of this division: ";
    cin>>input.thirdSales;
    
    cout<<"Please enter the fourth quarter sales of this division: ";
    cin>>input.fourthSales;
    
    int total = input.firstSales+input.secondSales+input.thirdSales+input.fourthSales;
    cout<<"The total sales of the four quarters' is $"<<total<<endl;
    
    float average = total/4;
    cout<<"The average of the four quarters' is $"<<average<<endl;
}