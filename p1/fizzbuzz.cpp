#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter natural number: ";
    cin >> num;

    for(int i = 3; i <= num; i++) {
        if(i % 3 == 0 || i % 5 == 0) sum += i; cout << i << " " << sum << endl;
    }

    cout << "The sum of all the Natural Numbers under " << num << " is: " << sum << endl;
}
