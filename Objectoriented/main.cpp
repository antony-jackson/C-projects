/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antony
 *
 * Created on May 20, 2017, 7:53 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

 void print_bookdetails(struct Books *b1);

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(int argc, char** argv) {


    Books b1;


    cout << "--------Enter book details-------"<<endl;
    cout << "--------Title-------"<<endl;
    cin >> b1.title;
    cout << "--------Author-------"<<endl;
    cin >> b1.author;
    cout << "--------subject-------"<<endl;
    cin >> b1.subject;
    cout << "--------bookid-------"<<endl;
    cin >> b1.book_id;


  print_bookdetails(&b1);







    return 0;
}



void print_bookdetails(struct Books *b1)
{
      cout << "---------Book details are---------"<<endl;


    cout << "book id :" << b1->book_id<<endl;
    cout << "author :" << b1->author<<endl;
    cout << "Subject :" << b1->subject<<endl;
    cout << "Title :" << b1->title<<endl;
}