/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on May 23, 2017, 8:19 PM
 */

#include <iostream>
#define PI 3.14

using namespace std;

/*
 * 
 */

class Rectangle {
    
    
public: int l;
        int b;
        int h;
       
        double area_square(int l,int b);
        
        int perimeter(int l,int b);
        
        double volume(int l,int b,int h);
                void close();
    
    
    
};


class Square{
    
    
public : int l;
          int h;
double area(int l);

double perimeter(int l);

double volume(int l,int h);
        void close();




};


class Circle{
    
    
    
public:int l;
           int h;
           
           double area(int l);
           double perimeter(int l);
           double volume(int l,int h);
           void close();
    
    
};




class Triangle{
    
public:int a;
int b;
int h;

double perimeter(int a,int b,int h);

double area(int a,int b);
        void close();
    
    
    


};


void Triangle::close(){
    
    cout<<"------closing triangle ----------"<<endl;
}


void Circle::close()
{
        cout<<"------closing circle ----------"<<endl;
}

void Rectangle::close(){
    
    cout<<"------closing Rectangle ----------"<<endl; 
}


void Square::close(){
    
    cout<<"------closing Square ----------"<<endl; 
}









double Triangle::area(int a, int b)
{
    
    return (a*b)/2;
}


double Triangle::perimeter(int a, int b, int h)
{
    
    return (a+b+h)/2;
}

double Circle::volume(int l, int h)
{
    return PI*l*l*h;
}



double Circle::perimeter(int l)
{
    
    return 2*PI*l;
    
    
}


double Circle::area(int l)
{
    
    return PI*l*l;
}




double Square::area(int l)
{
    double area=l*l;
    
    return area;
}

double Square::perimeter(int l)
{
    return 2*l;
}

double Square::volume(int l, int h)
{
    return l*l*h;
}



double Rectangle::area_square(int l, int b)
{
    double area=l*b;
    return area;
}

int Rectangle::perimeter(int l, int b)
{
    int peri=2*(l+b);
    return peri;
}

double Rectangle::volume(int l, int b, int h)
{
    double v=l*b*h;
    return v;
}





int main(int argc, char** argv) {
    
    Rectangle h1;
    
    Square Sq;
    
    Circle c1;
    
    Triangle t;
    
    
    h1.b=20;
    h1.l=30;
    h1.h=10;
    
    cout<<"===============Rectangle==================="<<endl;
    
    cout<<"Area of rectangle with length"<<h1.l<<" and breadth "<<h1.b<<" is "<<h1.area_square(h1.l,h1.b)<<endl;
    cout<<"Perimeter "<<h1.perimeter(h1.l,h1.b)<<endl;
      cout<<"volume "<<h1.volume(h1.l,h1.b,h1.h)<<endl;
      h1.close();
      
      cout<<"=============Square====================="<<endl;
      
      Sq.l=12;
      Sq.h=10;
      
      cout<<"Area of square with side "<<Sq.l<<" is "<<Sq.area(Sq.l)<<endl;
      
      cout<<"Perimeter :"<<Sq.perimeter(Sq.l)<<endl;
      
      cout<<"Volume : "<<Sq.volume(Sq.l,Sq.h)<<endl;
      Sq.close();
      
            cout<<"=============Circle====================="<<endl;
            
            c1.l=10;
            c1.h=10;
            
            cout<<"Area : "<<c1.area(c1.l)<<endl;
            cout<<"Perimeter : "<<c1.perimeter(c1.l)<<endl;
            cout<<"Volume : "<<c1.volume(c1.l,c1.h)<<endl;
            
            c1.close();
            
             cout<<"=============Triangle====================="<<endl;
             
             t.a=20;
             t.b=10;
             t.h=15;
             
                      cout<<"Area : "<<t.area(t.a,t.b)<<endl;
            cout<<"Perimeter : "<<t.perimeter(t.a,t.b,t.h)<<endl;
            
            t.close();

    return 0;
    
    
}

