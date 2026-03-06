#ifndef MARKOV_H
#define MARKOV_H

//function 1
std::string joinWords(const std::string words[], int startIndex, int count);

//function 2
int readWordsFromFile(std::string filename, std::string words[], int maxWords);

//function 3
int buildMarkovChain(const std::string words[], int numWords, int order,
                     std::string prefixes[], std::string suffixes[],
                     int maxChainSize);
//function 4
std::string getRandomSuffix(const std::string prefixes[], const std::string suffixes[],
int chainSize, std::string currentPrefix);

#endif