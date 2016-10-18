//
//  5.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 17/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

  enum monthsName { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

struct weatherData
{
    int totalRainfall;
    float highTemp;
    float lowTemp;
    float averageTemp;
};

void displayMonthsName (monthsName);

int main()
{
    int const NUM_MONTHS = 12;
    weatherData input[NUM_MONTHS];
    monthsName inputs;
    
    cout<<"Please enter data for "<<NUM_MONTHS<<" months"<<endl;
    cout<<endl;
    
    for (inputs = JANUARY; inputs<=DECEMBER; inputs=static_cast<monthsName>(inputs+1))
    {
        cout<<"Month: ";
        displayMonthsName(inputs);
    
        for (int i=0; i<1; i++)
        {
            cout<<endl<<"Total rainfall: ";
            cin>>input[i].totalRainfall;
        
            cout<<"High temperature: ";
            cin>>input[i].highTemp;
            
            while (input[i].highTemp<-100 || input[i].highTemp>140)
            {
                cout<<"The minimum and maximum temperature is -100 and 140, Input the temperature again: ";
                cin>>input[i].highTemp;
            }
        
            cout<<"Low temperature: ";
            cin>>input[i].lowTemp;
            
            while (input[i].lowTemp<-100 || input[i].lowTemp>140)
            {
                cout<<"The minimum and maximum temperature is -100 and 140, Input the temperature again: ";
                cin>>input[i].lowTemp;
            }
        
            cout<<"Average rainfall for this month: "<<(input[i].highTemp+input[i].lowTemp)/2<<endl;
            cout<<endl;
        }
    }
    
    int rainFallYearly = 0;
    for (int i = 0; i <= NUM_MONTHS; i++)
    {
        rainFallYearly += input[i].totalRainfall;
    }
    cout<<"Total rainfall in this year: "<<rainFallYearly<<endl;
    cout<<"Average rainfall in this year: "<<rainFallYearly/12<<endl;
    
    int highestTemp = 0;
    for (int i = 0 ; i < NUM_MONTHS ; i++)
    {
        if (input[i].highTemp > highestTemp)
        {
            highestTemp = input[i].highTemp;
        }
    }
    cout << "The Highest temperature is : " << highestTemp << endl;
    
    int lowestTemp = 99999;
    for (int i = 0 ; i < NUM_MONTHS ; i++)
    {
        if (input[i].lowTemp < lowestTemp)
        {
            lowestTemp = input[i].lowTemp;
        }
    }
    cout << "The lowest temperature is : " << lowestTemp<<endl;
    
}

void displayMonthsName (monthsName input)
{
    switch (input)
    {
        case JANUARY : cout<<"January";
            break;
        case FEBRUARY : cout<<"February";
            break;
        case MARCH : cout<<"March";
            break;
        case APRIL : cout<<"April";
            break;
        case MAY : cout<<"May";
            break;
        case JUNE : cout<<"June";
            break;
        case JULY : cout<<"July";
            break;
        case AUGUST : cout<<"August";
            break;
        case SEPTEMBER : cout<<"September";
            break;
        case OCTOBER : cout<<"October";
            break;
        case NOVEMBER : cout<<"November";
            break;
        case DECEMBER : cout<<"December";
            break;
            
    }
}
