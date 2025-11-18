#ifndef CD_H
#define CD_H

#include <string>
#include <iostream>

using namespace std;

class CD {
private:
    string title;
    string artist;
    string cdId;
    int releaseYear;

public:
    CD(string t, string a, string id, int year);
    string getId() const;
    string getTitle() const;
    void printInfo() const;
};

#endif