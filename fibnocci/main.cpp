/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on April 18, 2017, 9:03 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int n,i,first,second,fib;
	
	first=0;
	second=1;
	printf("enter the number:");
	scanf("%d",&n);
	printf("The Fibnocai Serires is\n");
	printf("%d\t%d\t",first,second);
	for(i=0;i<n;i++)
	{
		fib=first+second;
		first=second;
		second=fib;
		printf("%d\t",fib);
                
	}


    return 0;
}

