/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Homework: Final Project
 * Author: Seth Garrison
 * File:   main.cpp
 * Created on April 26, 2017, 2:20 PM
 */

#include <iostream> //to use cout and cin and endl// allows using cout without std::cout
#include <string> // to use string data type
#include <cstdlib> //for random numbers, exit function
#include <ctime> //time function used for rand seed
#include <fstream> //for file input

#include "coinFlip.h"

using namespace std;

int main()

{ //Start of main.
    
    coinClass cC;
    
while ( cC.run == 1)
{ //Start of while loop.

    srand (time(0) );
    cout << "How many times would you like to flip the coin? Please enter a number.\n " << endl;
    cin >> cC.coinToss;
    cout << endl;

for ( int x = 0; x < cC.coinToss; x++ )
{ //Start of for loop.

    coinFlip(cC);

} //End of for loop.

    ofstream outfile;    
    outfile.open("Seth_Garrison_Final_Project_Coin_Flip_Total_File.txt");
    

    cout << "Heads was flip " << cC.headsCounter << " times.\n" << endl;
    outfile << "Heads was flip " << cC.headsCounter << " times.\n" << "\r\n\r\n";
    
    cout << "Tails was flip " << cC.tailsCounter << " times.\n" << endl;
    outfile << "Tails was flip " << cC.tailsCounter << " times.\n" << "\r\n\r\n";
    
    outfile.close();
    
    cout << "Do you want to flip the coin again? Press 1 for yes and 2 to quit the program.\n " << endl;
    cin >> cC.run;
    cout << endl;
    cC.headsCounter = 0;
    cC.tailsCounter = 0;

if(cC.run < 1 || cC.run > 2) 

{ //Start of if statement.
	
    cout << "Error you have not entered a valid value. Please enter 1 to play again or 2 to quit the program.\n" << endl;
    cin >> cC.run;
    cout << endl;

} //End of if statement.

} //End of while loop.

} //End of main.