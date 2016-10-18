//
//  4.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 17/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

struct weatherData
{
    int totalRainfall;
    float highTemp;
    float lowTemp;
    float averageTemp;
};

int main()
{
    int const NUM_MONTHS = 12;
    weatherData input[NUM_MONTHS];
    
    cout<<"Please enter data for "<<NUM_MONTHS<<" months"<<endl;
    cout<<endl;
    
    for (int i = 0; i<NUM_MONTHS; i++)
    {
        cout<<"Month "<<(i+1);
        
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

