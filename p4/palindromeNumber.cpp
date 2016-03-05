#include <iostream>
using namespace std;

bool isPalindrome(int num);
string palindromicNumber(int num);

int main() {
    int numToTest;
    string multiplesPalindrome;

    cout << "Enter what size digit you'd like to test: ";
    cin >> numToTest;
    multiplesPalindrome = palindromicNumber(numToTest);

    if(multiplesPalindrome != "") 
        cout << "The highest multiples of size digit " << numToTest << " are: " << multiplesPalindrome << endl;
    else cout << "There are no palindromic multiples of size: " << numToTest << endl;
}

string palindromicNumber(int num) {
    int numToTest = 9;
    int lowestNum = 0;
    string highestMultiples = "";
    int multiple1, multiple2;
    for(int i = 1; i < num; i++) {
        numToTest = (numToTest*10) + 9;
        lowestNum = (lowestNum*10) +9;
    }

    while(numToTest > lowestNum) {
        for(int i = numToTest; i > lowestNum; i--) {
           if(isPalindrome(numToTest*i) && (numToTest + i) > (multiple1+multiple2) ) { 
                multiple1 = numToTest;
                multiple2 = i;
                highestMultiples = (to_string(numToTest) + " " + to_string(i)) +
                        ", with the palindromic number being: " + to_string(numToTest*i);
            }
        }
        numToTest--;
        cout << numToTest << " ";
    }
   
    cout << endl;
    return highestMultiples;
}

bool isPalindrome(int num) {
    string check = to_string(num);
    bool palindrome = true;

    if(check.size() % 2 == 0) {
        for(int i = 0; i < (check.size()/2); i++) {
            if(check[i] != check[check.size() - (i+1)]) return false;
        }
    }
    else {
        for(int i = 0; i < (check.size()/2); i++) {
            if(check[i] != check[((check.size()-1)-i)]) return false;
        }
    }

    return true;
}

