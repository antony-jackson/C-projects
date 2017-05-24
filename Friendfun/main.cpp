/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on May 24, 2017, 6:08 AM
 */

#include <iostream>
#include<ctime>

using namespace std;

/*
 * 
 */

class Currenttime{
    
    
public:  friend void print_Currtime(char *a);
    
    
};

void print_Currtime(char *a)
{
    cout<<"Time : "<<a;
}





int main(int argc, char** argv) {
    
    time_t t= time(0);
    char* dt = ctime(&t);
    print_Currtime(dt);


    return 0;
}

