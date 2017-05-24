/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on April 9, 2017, 7:07 AM
 */

#include <cstdlib>
#include<stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //int a=0;
    
    int a[5],sum=0;
        printf("");
        
        for(int i=0;i<5;i++)
        {
    
    scanf("%d",&a[i]);
    
        }
    
        for(int i=0;i<5;i++)
        {
            
            sum=sum+a[i];

        }
        
            printf("\n Sum of the numbers is %d",sum);

    return 0;
}

