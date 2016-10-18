//
//  1.cpp
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
};

void displayData (MovieData movie);

int main()
{
  
    
    MovieData movie1;
    movie1.title = "Divergent";
    movie1.director = "Neil Burger";
    movie1.yearReleased = 2014;
    movie1.runningTime = 139;
    
    MovieData movie2;
    movie2.title = "Insurgent";
    movie2.director = "Robert Schwenke";
    movie2.yearReleased = 2015;
    movie2.runningTime = 119;
    
    displayData(movie1);
    displayData(movie2);
}

void displayData (MovieData movie)
{
    cout<<"Movie: "<<movie.title<<endl;
    cout<<"Director: "<<movie.director<<endl;
    cout<<"Year Released: "<<movie.yearReleased<<endl;
    cout<<"Duration: "<<movie.runningTime<<"m"<<endl;
    cout<<endl;

}
