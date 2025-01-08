#include <algorithm>
#include <iostream>

bool isPalindrome;
char continueKey;
constexpr char validContinueKey = 'y';
std::string word;
std::string reverseWord;

void check_palindrome() {
    reverseWord = word;
    std::reverse(reverseWord.begin(), reverseWord.end());
    std::cout << "Reversed word : " << reverseWord << std::endl;
    if (reverseWord == word) {
        isPalindrome = true;
    }
    else {
        isPalindrome = false;
    }
    std::cout << word;
    if (word == reverseWord) {
        std::cout << " is a palindrome" << std::endl;
    }
    else {
        std::cout << " is not a palindrome" << std::endl;
    }
}

int main() {
    continueKey = validContinueKey;
    while (continueKey == 'y') {
        std::cout << "Try to put a word and I will verify if this is a palindrome : ";
        std::cin >> word;
        check_palindrome();
        std::cin.clear();
        std::cout << "Enter " << validContinueKey << " if you want to continue (enter another key to stop) : ";
        std::cin >> continueKey;
    }
    return 0;
}