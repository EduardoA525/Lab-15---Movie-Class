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
    void print() {
        cout << "Movie: " << title << endl;
        cout << "   Year released: " << releaseYear << endl;
        cout << "   Screenwriter: " << writerName << "\n" << endl;
    }
};

int main() {

    //Chose vector. Time for vectorization
    //I'll just print both versions just in case. 
    //The probably intended version and sample version.

    vector<Movie> movies;
    vector<Movie> moviesSample;
    ifstream fin("input.txt");

    string title;
    int releaseYear;
    string writerName;

    //Loop for reading file
    //Makes sure file is good first
    if (fin.good()){
        while(getline(fin, title)) {
            fin >> releaseYear;
            fin.ignore();
            getline(fin, writerName);

            Movie tempMovie;

            tempMovie.setTitle(title);
            tempMovie.setReleaseYear(releaseYear);
            tempMovie.setWriterName(writerName);

            movies.push_back(tempMovie);
            
            Movie tempMovieSample;

            tempMovieSample.setTitle(writerName);
            tempMovieSample.setReleaseYear(releaseYear);
            tempMovieSample.setWriterName(title);

            moviesSample.push_back(tempMovieSample);
        }
        fin.close();
    }
    else
        cout << "Oopsie Error: Input File not read!" << endl;

    //Print every movie in the vector
    for (auto val : movies){

        val.print();
    }

    //Sample version of print to match the sample output
    cout << "-- SAMPLE VERSION --\n" << endl;

    for (auto val : moviesSample){

        val.print();
    }

    return 0;
}