#include <iostream>
using namespace std;

int numberLetterCounter(int range);

int main() {
    int range;
    cout << "Enter the range of numbers letters to count: ";
    cin >> range;
    cout << "The numbers letters for " << range << " is: " << numberLetterCounter(range) << endl;
}

int numberLetterCounter(int range) {
    string numberVal = "";
    int retVal = 0;
    bool teen = false;
    string singles[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens[] = {"ten", "eleven", "twelve", "thir", "four", "fif", "six", "seven", "eigh", "nine"};
    string twentyUp[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int temp;
    for(int i = 1; i <= range; i++) {
        temp = i;
        if(temp / 1000 > 0) numberVal += singles[(temp/1000) -1] + "thousand";
        temp = temp % 1000;
        if(temp / 100 > 0) numberVal += singles[(temp/100) - 1] + "hundred";
        if(temp % 100 != 0 && temp/100 > 0) numberVal += "and";
        temp = temp % 100;
        if(temp / 10 >= 2) numberVal += twentyUp[(temp/10) - 2];
        else if(temp < 20 && temp >= 10) {
            numberVal += tens[temp % 10];
            if(temp % 10 > 2) numberVal += "teen"; 
            teen = true;
        }
        temp = temp % 10;
        if(temp > 0 && !teen) numberVal += singles[temp -1];
        retVal += numberVal.length();
        cout << numberVal << " " << numberVal.length() << " = " << retVal << endl;
        numberVal = "";
        teen = false;
    }
    return retVal;
}
