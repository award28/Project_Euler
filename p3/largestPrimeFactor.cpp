#include <iostream>
using namespace std;
#include <math.h>

int main() {
    double num;
    double curLargest;
    bool curIsPrime;

    cout << "Enter number: ";
    cin >> num;

    for(int i = 2; i < num && i > 0; i++) {
        curIsPrime = true;
        if(fmod(num,i) == 0) { 
            for(int j = 2; j < i; j++) 
                if( i % j == 0) {
                    curIsPrime = false;
                } 
            if(curIsPrime) {
                cout << i << endl; 
                curLargest = i;
            }
        }
    }

    cout << "The largest prime in " << num << " is: " << curLargest << endl;
}
