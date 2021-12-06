#pragma once
#include "Books.h"
#include "BookTags.h"
#include "Database.h"
#include "Ratings.h"
#include "Tags.h"
#include "BorrowedBooks.h"
#include "UserServer.h"
#include "Query.h"
#include <sstream>
#include <string>
#include <vector>
#include "..\TCPSocket\TCPSocket.h"

class Server
{
public:
	Server();
	void RunServer();
private:
	Query queryList;
	Books book;
	BookTags bookTags;
	Database database;
	Ratings ratings;
	Tags tags;
	UserServer user;
	std::vector<BorrowedBooks> borrowedBooks;
	TCPSocket client;

	void PrepareVirtualTable();
	void DropVirtualTable();

	void Register();
	void Login();
	void DeleteUser();
	void Logout();
	void ReturnBook();
	void BorrowBook();
	void SearchBook();
	void ReadBook();
	void ChangePassword();
	void PrepareBookDetails();
};

