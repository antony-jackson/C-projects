/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on May 19, 2017, 8:35 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int sum_of_array(int l,int b);

int sum_of_array(int l,int b,int h);

int main(int argc, char** argv) {

    int l=12;
      int b=15;
      
            int h=15;

 




   
    cout << "the sum of array  is " << sum_of_array(l,b) << endl;
    
     cout << "the sum of array  is " << sum_of_array(l,b,h) << endl;

    return 0;
}

int sum_of_array(int l,int b) {
    int sum=0;
    
    sum=l+b;
    
   
    return sum;
}

int sum_of_array(int l,int b,int h)
{
    int sum=0;
    
    sum=l*b*h;
      return sum;
}