//
//  6.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 17/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

struct soccerPlayer
{
    string playerName;
    int playerNumber;
    int pointsScored;
};

void getHighestScore (soccerPlayer arr[]);

int main()
{
    soccerPlayer input[12];
    
    for (int i = 0; i < 12; i++)
    {
        cout<<"Player's Name: ";
        cin>>input[i].playerName;
        
        cout<<"Player's Number: ";
        cin>>input[i].playerNumber;
        
        cout<<"Points Scored by Player: ";
        cin>>input[i].pointsScored;
        
        if (input[i].playerNumber<0 || input[i].pointsScored<0)
        {
            cout<<"Invalid input. Input cannot be negative.";
            return 0;
        }
        
        cout<<endl;
    }
    
    int totalScores = 0;
    for (int i=0; i < 12; i++)
    {
        totalScores+=input[i].pointsScored;
    }
    
    cout<<"Player's Name"<<"\t"<<"Player's Number"<<"\t\t"<<"Points Scored"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    
    for (int i = 0; i < 12; i++)
    {
        cout<<input[i].playerName<<"\t\t\t\t\t"<<input[i].playerNumber<<"\t\t\t\t"<<input[i].pointsScored<<endl;
    }
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Total points earned: "<<totalScores<<endl;
    
    int position = 0;
    int highestScore = 0;
    for (int i=0; i< 12; i++)
    {
        if(input[i].pointsScored>highestScore)
        {
            highestScore = input[i].pointsScored;
            position = i;
        }
    }

    cout<<"Player earned the most points: ";
    cout<<input[position].playerName<<" "<<input[position].playerNumber;
    
    return 0;
}


