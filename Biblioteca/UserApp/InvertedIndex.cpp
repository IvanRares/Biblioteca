#include "InvertedIndex.h"

void InvertedIndex::addFile(const std::string& filename)
{
	std::ifstream fp;
	fp.open(filename, std::ios::in);

	if (!fp)
	{
		std::cout << "File not found!\n";
		return;
	}

	std::string line, word;
	int lineNr = 0, wordNr = 0;
	char comma = ',';
	while (std::getline(fp, line)) {
		lineNr++;
		wordNr = 0;
		std::stringstream s(line);
		while (std::getline(s, word, comma))
		{
			wordNr++;
			wordPosition obj;
			obj.line = lineNr;
			obj.index = wordNr;
			Dictionary[word].push_back(obj);
		}
	}
	fp.close();
}

std::map<std::string, std::vector<wordPosition>> InvertedIndex::getDictionary()
{
	return Dictionary;
}

int InvertedIndex::getLine(std::string& keyword, int i)
{
	return Dictionary[keyword][i].line;
}

int InvertedIndex::getIndex(std::string& keyword, int index)
{
	return Dictionary[keyword][index].index;
}



//int InvertedIndex::LevenshteinDistance(const std::string& source, const std::string& target)
//{
//	if (source.size() > target.size()) {
//		return LevenshteinDistance(target, source);
//	}
//	const unsigned int min_size = source.size(), max_size = target.size();
//	std::vector<unsigned int> lev_dist(min_size + 1);
//
//	for (unsigned int i = 0; i <= min_size; ++i) {
//		lev_dist[i] = i;
//	}
//
//	for (unsigned int j = 1; j <= max_size; ++j) {
//		unsigned int previous_diagonal = lev_dist[0], previous_diagonal_save;
//		++lev_dist[0];
//
//		for (unsigned int i = 1; i <= min_size; ++i) {
//			previous_diagonal_save = lev_dist[i];
//			if (source[i - 1] == target[j - 1]) {
//				lev_dist[i] = previous_diagonal;
//			}
//			else {
//				lev_dist[i] = std::min(std::min(lev_dist[i - 1], lev_dist[i]), previous_diagonal) + 1;
//			}
//			previous_diagonal = previous_diagonal_save;
//		}
//	}
//
//	return lev_dist[min_size];
//}