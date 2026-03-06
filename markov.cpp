#include "markov.h"


std::string joinWords(const std::string words[], int startIndex, int count) 
{
    result= ""
    for (i=0; i<count; i++)
    result= result+words[startIndex + i]+" " //space is correct?
    return result;
}

int readWordsFromFile(std::string filename, std::string words[], int maxWords)
{
    std::ifstream inputFile;
    inputFile.open("numbers.txt");  //change file name later
   
    if (inputFile.is_open()==0) {
        std::cout<<"-1"<<std::endl;}

    counter==0
    while (counter < maxWords && inFile >> words[counter]){
        counter++;}
    inputFile.close();
    std::cout<<counter<<std::endl;
}
/*
int buildMarkovChain(const std::string words[], 
int numWords, int order, std::string prefixes[], 
std::string suffixes[],int maxChainSize) {
count=0
for (i=0; i<=(numWords - order - 1); i++){
    if (count<=maxChainsize)
    {prefix=joinWords(words, i, order);  
    suffix=words[i+order];
    prefixes[count] = prefix;  
    suffixes[count] = suffix;
    c++}
    else:
    {return 0;}
}
                     }


std::string getRandomSuffix(const std::string prefixes[], const std::string suffixes[],
int chainSize, std::string currentPrefix)
{}
