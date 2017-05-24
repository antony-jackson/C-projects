/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on May 19, 2017, 7:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int number;
    
    
    cout<<"Enter day number"<<endl;
    
    cin>>number;
    
    switch(number)
    {
        
        case 1:
            cout<<"The day is sunday";
        break;
        case 2:
            cout<<"The day is monday";
        break;
        case 3:
            cout<<"The day is tuesday";
        break;
        case 4:
            cout<<"The day is wednesday";
        break;
         case 5:
            cout<<"The day is thursday";
        break;
        case 6:
            cout<<"The day is friday";
        break;
        case 7:
            cout<<"The day is saturday";
        break;
        default : cout<<"The number is invalid";
        break;
        
        
        
        
        
        
    }
    
    
    
    

    return 0;
}

