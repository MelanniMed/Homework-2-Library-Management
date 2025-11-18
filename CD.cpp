#include "CD.h"

CD::CD(string t, string a, string id, int year)
    : title(t), artist(a), cdId(id), releaseYear(year) {}

string CD::getId() const { return cdId; }
string CD::getTitle() const { return title; }

void CD::printInfo() const {
    cout << "CD: " << title
         << " | Artist: " << artist
         << " | ID: " << cdId
         << " | Year: " << releaseYear
         << endl;
}