#include <iostream>
using namespace std;

int smallestMultiple(int size);
int main() {
    int size;
    cout << "Enter the size you would like to test: ";
    cin >> size;
    cout << "The smallest multiple of " << size << " is: " << smallestMultiple(size) << endl;
}

int smallestMultiple(int size) {
    bool isSmallest = false;
    int retVal = size;
    int reset = size;
    while(!isSmallest) {
        size = reset;
        retVal++;
        for(int i =1; i <= size; i++) {
            if(retVal % i == 0) {
                isSmallest = true;
            }
            else {
                isSmallest = false;
                break;
            }
        }
    }
    return retVal;
}
