#pragma once
#include <iostream>
#include <string>
#include <sstream>
class BorrowedBooks
{
public:
	BorrowedBooks() = default;
	BorrowedBooks(const std::string queryResult);
	BorrowedBooks(const int& userId, const int& bookId);

	std::string BorrowedBooksSearch(const int& userIdSearch)const;
	std::string BorrowedBooksInsert(const int& userId, const int& bookId)const;
	std::string BorrowedBooksDelete(const int& userId, const int& bookId)const;


	void SetUserId(const int& userId);
	void SetBookId(const int& bookId);
	int SetUserId()const;
	int SetBookId()const;
private:
	int userId, bookId;
};
