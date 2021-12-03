#pragma once
#include <string>
class Query
{
public:
	std::string BooksBookSearch(const std::string& searchInput)const;
	std::string BooksNumOfBookSearch(const std::string& searchInput)const;
	std::string BookTagsGetTags(const int& bestBookId)const;
	std::string BorrowedBooksSearch(const int& userIdSearch)const;
	std::string BorrowedBooksInsert(const int& userId, const int& bookId)const;
	std::string BorrowedBooksDelete(const int& userId, const int& bookId)const;
	std::string RatingsGetRatings(const int& bestBookId)const;
	std::string TagsQuerySearch(const std::string& searchInput)const;
	std::string UserServerUserSearch(const std::string& usernameSearch, const std::string& passwordSearch)const;
	std::string UserServerUserInsert(const std::string& username, const std::string& password)const;
	std::string UserServerUserDelete(const std::string& username, const std::string& password)const;
	std::string UserServerCheckExistingUsers(const std::string& username)const;
	std::string UserServerUsersLogin(const std::string& username, const std::string& password)const;
	std::string UserServerUsersLoginID(const std::string& username, const std::string& password)const;


};

