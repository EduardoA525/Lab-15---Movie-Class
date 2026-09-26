/*
Commit your code every ten minutes while working. Set a timer.

Code a Movie class that has the screen writer, the year released, and 
    the title as its private member variables. It has the standard setters and getters for each private member variable. 
    Also code a print() method which prints the object data in a simple format.

Your code should read data from an input file, using the data below, 
    which lists data in this order: title, year released, screen writer name.

Read this data into a temporary Movie object. 
    Then append that object to your container.

For your container, you can choose an <array> class array or a <vector> class vector. 
    Store your four records in this container.

Towards the end of your main() function, output the contents of the array/vector.

Sample output:
Movie: TestScreenWriter1
    Year released: 2019
    Screenwriter: Best Movie of 2019

Movie: TestScreenWriter2
    Year released: 2020
    Screenwriter: Best Movie of 2020

Movie: TestScreenWriter3
    Year released: 2021
    Screenwriter: Best Movie of 2021

Movie: TestScreenWriter4
    Year released: 2022
    Screenwriter: Best Movie of 2022
*/

//Eduardo Avila
//COMSC - 210 - 5293
//Lab 15 - Movie Class

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

//Creation of Movie Class
class Movie {
private:
    string title;
    int releaseYear;
    string writerName;
    
public:
    //Setters n getters
    string getTitle()            { return title; }
    void setTitle(string t)      { title = t; }

    int getReleaseYear()         { return releaseYear; }
    void setReleaseYear(int y)   { releaseYear = y; }

    string getWriterName()       { return writerName; }
    void setWriterName(string w) { writerName = w; }

    //Print Function

};


int main() {


    return 0;
}