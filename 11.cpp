//
//  11.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 18/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

struct MonthlyBudget
{
    float housing = 500.00;
    float utilities = 150.00;
    float household = 65.00;
    float transportation = 50.00;
    float food = 250.00;
    float medical = 30.00;
    float insurance = 100.00;
    float entertainment = 150.00;
    float clothing = 75.00;
    float misc = 50.00;
};

void getData (MonthlyBudget &input);
void comparingData (float, float);

int main()
{
    MonthlyBudget i;
    getData(i);
    
    MonthlyBudget compare;
    
    cout<<"Here are the comparisons"<<endl;
    cout<<"Housing: ";
    comparingData(i.housing, compare.housing);
    cout<<"Utilities: ";
    comparingData(i.utilities, compare.utilities);
    cout<<"Household Expenses: ";
    comparingData(i.household, compare.household);
    cout<<"Transportation: ";
    comparingData(i.transportation, compare.household);
    cout<<"Food: ";
    comparingData(i.food, compare.food);
    cout<<"Medical: ";
    comparingData(i.medical, compare.medical);
    cout<<"Insurance: ";
    comparingData(i.insurance, compare.insurance);
    cout<<"Entertainment: ";
    comparingData(i.entertainment, compare.entertainment);
    cout<<"Clothing: ";
    comparingData(i.clothing, compare.clothing);
    cout<<"Miscellaneous: ";
    comparingData(i.misc, compare.misc);
    
    return 0;
    
}

void getData (MonthlyBudget &input)
{
    cout<<"Please enter the amounts spent in each category during this month. "<<endl;
    
    cout<<"Housing: ";
    cin>>input.housing;
    
    cout<<"Utilities: ";
    cin>>input.utilities;
    
    cout<<"Household: ";
    cin>>input.household;
    
    cout<<"Transportation: ";
    cin>>input.transportation;
    
    cout<<"Food: ";
    cin>>input.food;
    
    cout<<"Medical: ";
    cin>>input.medical;
    
    cout<<"Insurance: ";
    cin>>input.insurance;
    
    cout<<"Entertainment: ";
    cin>>input.entertainment;
    
    cout<<"Clothing: ";
    cin>>input.clothing;
    
    cout<<"Miscellaneous: ";
    cin>>input.misc;
    
}
void comparingData (float a, float b)
{
   if (a<b)
       cout<<"Below the budget."<<endl;
    else
        cout<<"Over the budget."<<endl;
}