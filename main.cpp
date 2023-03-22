#include <iostream>
#include <fstream>
#include <string.h>


int main ()
{
    std::string inputtedWord;
    std::cout << "Type word to be translated to pig latin: ";
    std::cin >> inputtedWord;
    char firstLetter = inputtedWord[0];
    char secondLetter = inputtedWord[1];

    if (std::string("aeiou").find(inputtedWord[0]) != std::string::npos) //if starts with vowel
    {
        std::cout << inputtedWord <<  "yay" << std::endl; //no need to erase if start w vowel, can be yay way or ay
    }

    else //if first character is not a vowel (constant)
    {
        if (std::string("aeiou").find(inputtedWord[1]) != std::string::npos) //if second word is vowel
        {
            std::string newWord = inputtedWord.erase(0,1); 
            std::cout << inputtedWord << firstLetter << "ay" << std::endl; 
        }
        else //2 constants (no vowel)
        {
            std::string newWord2 = inputtedWord.erase(0,2); 
            std::cout << inputtedWord << firstLetter << secondLetter << "ay" << std::endl;
        }
    }
    return 0;
}


//constants are letters that are not vowels 

//if constant 2 things - if 2nd constant or if 2nd vowel
//if start vowel one thing


//get string, then get first 2 characters of said string, then 3 things: 
//if constant and vowel, put first letter in end and add ay
//if 2 constants, add both to end annd add ay
//if start with vowel, add way to end

