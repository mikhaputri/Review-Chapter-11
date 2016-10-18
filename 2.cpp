//
//  2.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 17/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime;
    int productionCost;
    int firstRevenues;
};

void displayData (MovieData movie);

int main()
{
    
    
    MovieData movie1;
    movie1.title = "Divergent";
    movie1.director = "Neil Burger";
    movie1.yearReleased = 2014;
    movie1.runningTime = 139;
    movie1.productionCost = 200000;
    movie1.firstRevenues = 150000;
    
    MovieData movie2;
    movie2.title = "Insurgent";
    movie2.director = "Robert Schwenke";
    movie2.yearReleased = 2015;
    movie2.runningTime = 119;
    movie2.productionCost = 300000;
    movie2.firstRevenues = 500000;
    
    displayData(movie1);
    displayData(movie2);
}

void displayData (MovieData movie)
{
    cout<<"Movie: "<<movie.title<<endl;
    cout<<"Director: "<<movie.director<<endl;
    cout<<"Year Released: "<<movie.yearReleased<<endl;
    cout<<"Duration: "<<movie.runningTime<<"m"<<endl;
    
    int firstProfit;
    if (movie.productionCost<movie.firstRevenues)
    {
        firstProfit=movie.firstRevenues-movie.productionCost;
        cout<<"Profit: $"<<firstProfit<<endl;
    }
    else
    {
        firstProfit=movie.productionCost-movie.firstRevenues;
        cout<<"Lost: $"<<firstProfit<<endl;
    }
    cout<<endl;
    
}
