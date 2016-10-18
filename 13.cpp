//
//  13.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 18/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct drinkData
{
    string drinkName;
    float drinkCost;
    int numOfDrinks;
};

drinkData num1 = {"Cola", 0.75, 20};
drinkData num2 = {"Root Beer", 0.75, 20};
drinkData num3 = {"Lemon-Lime", 0.75, 20};
drinkData num4 = {"Grape Soda", 0.80, 20};
drinkData num5 = {"Cream Soda", 0.80, 20};
    
float money, change;
int total;

void cola(drinkData &);
void rootBeer(drinkData &);
void lemonLime(drinkData &);
void grapeSoda (drinkData &);
void creamSoda (drinkData &);

int main()
{
    int choice;
    do
    {
    cout<<"LIST OF DRINKS"<<endl;
    cout<<"Drink Name \t\t\t Cost \t\t\t Number in Machine"<<endl;
    cout<<"1. Cola \t\t\t 0.75 \t\t\t 20"<<endl;
    cout<<"2. Root Beer \t\t 0.75 \t\t\t 20"<<endl;
    cout<<"3. Lemon-Lime \t\t 0.75 \t\t\t 20"<<endl;
    cout<<"4. Grape Soda \t\t 0.80 \t\t\t 20"<<endl;
    cout<<"5. Cream Soda \t\t 0.80 \t\t\t 20"<<endl;
    cout<<"6. Quit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    if (choice == 1)
    {
        cola(num1);
    }
    else if (choice == 2)
    {
        rootBeer(num2);
    }
    else if (choice == 3)
    {
        lemonLime(num3);
    }
    else if (choice == 4)
    {
        grapeSoda(num4);
    }
    else if (choice == 5)
    {
        creamSoda(num5);
    }
    else if (choice==6)
        return 0;
    else
        cout<<"Must chooce from 1-6"<<endl;
    }while (choice != 6);
    return 0;
        
}

void cola (drinkData &num1)
{
    if (num1.numOfDrinks == 0)
    {
        cout<<"Run out of drink."<<endl;
        exit(0);
    }
    cout<<"How much money you want to insert?";
    cin>>money;
    
    if (money>1 || money<num1.drinkCost)
    {
        exit(0);
    }
    
    change = money - num1.drinkCost;
    cout<<"The change is $"<<change<<endl;
    num1.numOfDrinks--;
    total=+num1.numOfDrinks;
    
}

void rootBeer (drinkData &num2)
{
    if (num2.numOfDrinks == 0)
    {
        cout<<"Run out of drink."<<endl;
        exit(0);
    }
    cout<<"How much money you want to insert?";
    cin>>money;
    
    if (money>1 || money<num2.drinkCost)
    {
        exit(0);
    }
    
    change = money - num2.drinkCost;
    cout<<"The change is $"<<change;
    num2.numOfDrinks--;
    total=+num2.numOfDrinks;
}

void lemonLime (drinkData &num3)
{
    if (num3.numOfDrinks == 0)
    {
        cout<<"Run out of drink."<<endl;
        exit(0);
    }
    cout<<"How much money you want to insert?";
    cin>>money;
    
    if (money>1 || money<num3.drinkCost)
    {
        exit(0);
    }
    
    change = money - num3.drinkCost;
    cout<<"The change is $"<<change;
    num3.numOfDrinks--;
    total=+num3.numOfDrinks;
}

void grapeSoda (drinkData &num4)
{
    if (num4.numOfDrinks == 0)
    {
        cout<<"Run out of drink."<<endl;
        exit(0);
    }
    cout<<"How much money you want to insert?";
    cin>>money;
    
    if (money>1 || money<num4.drinkCost)
    {
        exit(0);
    }
    
    change = money - num4.drinkCost;
    cout<<"The change is $"<<change;
    num4.numOfDrinks--;
    total=+num4.numOfDrinks;
}

void creamSoda (drinkData &num5)
{
    if (num5.numOfDrinks == 0)
    {
        cout<<"Run out of drink."<<endl;
        exit(0);
    }
    cout<<"How much money you want to insert?";
    cin>>money;
    
    if (money>1 || money<num5.drinkCost)
    {
        exit(0);
    }
    
    change = money - num5.drinkCost;
    cout<<"The change is $"<<change;
    num5.numOfDrinks--;
    total=+num5.numOfDrinks;
}