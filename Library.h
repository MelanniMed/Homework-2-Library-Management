#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"
#include "Loan.h"
#include "CD.h"

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;
    vector<Loan> loans;

    Book* findBook(const string& isbn);
    Member* findMember(const string& memberId);
    CD* findCD(const string& cdId);
    int countActiveLoansForMember(const string& memberId) const;
    bool isBookAvailable(const string& isbn) const;
    Loan* findActiveLoan(const string& memberId, const string& isbn);

public:
    void addBook(const Book& book);
    void addMember(const Member& member);
    void addCD(const CD& cd);
    void listBooks() const;
    void listMembers() const;
    void listLoans(bool onlyActive = false) const;
    bool borrowBook(const string& memberId, const string& isbn, const string& borrowDate);
    bool returnBook(const string& memberId, const string& isbn, const string& returnDate);
    bool removeBook(const string& memberId, const string& isbn);
    bool removeMember(const string& actingMemberId, const string& memberId);
    bool borrowCD(const string& memberId, const string& cdId, const string& borrowDate);
    bool returnCD(const string& memberId, const string& cdId, const string& returnDate);
    void listCDs() const;
};

#endif // LIBRARY_H


