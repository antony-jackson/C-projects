/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on May 24, 2017, 5:28 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */

class Helloworld {
    char b;

public:

    Helloworld(char a) {

        this->b = a;
        cout << "Object is being created" << endl;


    }
    void printchar(char a[]);

};

class Rectangle {
public:
    int a;
    int b;

    Rectangle(int l, int br);
    ~Rectangle();
    
    int area();



};

Rectangle::~Rectangle()
{
            cout << "Object deleted" << endl;
}

Rectangle::Rectangle(int l, int br) {

    cout<<"The length is "<<l<<endl;
    cout<<"The breadth is "<<br<<endl;
    a=l;
    b=br;
    



}

int Rectangle::area()
{
    return a*b;
}

void Helloworld::printchar(char a[]) {
    cout << "The character is : " << a;
}

int main(int argc, char** argv) {

    Helloworld h('aantony');
    Rectangle rect(10,15);
    
    cout<<"Rectangle area "<<rect.area()<<endl;

    h.printchar("sjddbhjhsbbh");

    return 0;
}

