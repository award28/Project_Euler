#include <iostream>
using namespace std;

int main() {
    int sum = 0; 
    int lastFib = 1;
    int fib = 1;
    int newFib = 1;

    while(fib < 4000000) {
        lastFib = fib;
        fib = newFib;
        newFib = fib + lastFib;
        if(fib%2 == 0) sum += fib;
    }

   cout << sum << endl;
}
