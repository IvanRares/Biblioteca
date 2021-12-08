#pragma once
#include <vector>
#include <iostream>
#include <sstream>
class BookDetails
{
public:
	BookDetails() = default;
	BookDetails(std::vector<std::string> tags,float averageRating,int ratings1,int ratings2, int ratings3, int ratings4, int ratings5, std::string imageUrl);
	BookDetails(std::string data);
	~BookDetails() = default;

	const BookDetails& operator=(const BookDetails& bookDetails);

	std::vector<std::string> GetTags() const;
	float GetAverageRating() const;
	int GetRatings1() const;
	int GetRatings2() const;
	int GetRatings3() const;
	int GetRatings4() const;
	int GetRatings5() const;
	std::string GetImageUrl() const;

	void SetTags(const std::vector<std::string>& tags);
	void SetAverageRating(const float& averageRating);
	void SetRatings1(const int& ratings1);
	void SetRatings2(const int& ratings2);
	void SetRatings3(const int& ratings3);
	void SetRatings4(const int& ratings4);
	void SetRatings5(const int& ratings5);
	void SetImageUrl(const std::string imageUrl);
private:
	std::vector<std::string> tags;
	float averageRating;
	int ratings1, ratings2, ratings3, ratings4, ratings5;
	std::string imageUrl;
};

