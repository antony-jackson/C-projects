/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on May 19, 2017, 8:22 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a=0;
    
    cout<<"For loop starting"<<endl;
    
    for(int i=0;i<5;i++)
    {
        cout<<"The number is "<<i<<endl;
//        if(i==4)
//        {
//            goto stop;
//        }
    }
    
        cout<<"while loop starting"<<endl;
    while(a<5)
    {
        
        if(a==2)
        {
            a++;
            continue;
        }
        
                cout<<"The number is "<<a<<endl;
                
                
        a++;
    }
        
          cout<<"do-while loop starting"<<endl;
          a=0;
   
   do {
        
                cout<<"The number is "<<a<<endl;
        a++;
    } while(a<1);
    
    
    stop:   cout<<"end of loop"<<endl;
    
    

    return 0;
}

