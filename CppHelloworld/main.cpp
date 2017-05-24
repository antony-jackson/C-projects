/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on April 25, 2017, 9:03 PM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */
int getincrement(int a);

int a=10;
int main(int argc, char** argv) {


   int a=20;
   ::a=15;
   int b=getincrement(a);
    
    cout<<"Area of circle : "<<getincrement(a)<<endl;
    
    cout<<"Area of circle : "<<::a<<endl;

    return 0;
}



int getincrement(int a)
{
    a=a+1;
    
    return a;
}