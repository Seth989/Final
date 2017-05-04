/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Homework: Final Project
 * Author: Seth Garrison
 * File: coinFlip.h
 * Created on May 2, 2017, 2:08 PM
 */

#ifndef COINFLIP_H
#define COINFLIP_H

#include <iostream> //to use cout and cin and endl// allows using cout without std::cout
#include <string> // to use string data type
#include <cstdlib> //for random numbers, exit function
#include <ctime> //time function used for rand seed


using namespace std;

class coinClass
{ //Start of class coinClass.
    
public:
    int tailsCounter;
    int headsCounter;
    int coinToss;
    int run;  
   
    


coinClass()
{ //Start of coinClass.

tailsCounter = 0;
headsCounter = 0;
coinToss =0;
run = 1;
        
} //End of coinClass.
        
       
}; //End of class coinClass.

void coinFlip(coinClass& cC)
{ //Start of coinFlip.
  
    int coin;
  
    coin = rand() % 2;
    
if (coin == 1)
{ //Start of if loop.

    cC.headsCounter++;
    cout << "Heads\n" << endl;

} //End of if loop.

else
{ // Start of else loop.

    cC.tailsCounter++;
    cout << "Tails\n" << endl;
    
} // End of else loop.
    
}//End of coinFlip.

#endif /* COINFLIP_H */