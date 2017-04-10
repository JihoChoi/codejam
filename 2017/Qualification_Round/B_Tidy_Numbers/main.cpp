
/*
	
    code jam
    Qualification Round 2017
    Problem B. Tidy Numbers

*/

#include <string>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

long int findTidy(long int input);
int isTidy (long int num);


long int findTidy(long int input) {

    for (long int i = input; i > 1; i--) {
        if (isTidy(i) == true) {
            return i;
        }
    }
    return 0;
}

int isTidy (long int num) {

    long int currDigit;
    long int prevDigit = 9;

    while (num > 0) {

        currDigit = num % 10;

        if (currDigit > prevDigit) {
            return false;
        }
        num = num / 10;
        prevDigit = currDigit;
    }
    return true;
}


int main() {

    long int t; // number of test cases
    long int n;

    cin >> t;
    for (long int i = 1; i <= t; ++i) {

        cin >> n;

        cout << "Case #" << i << ": " << findTidy(n) << endl;
    }
    return 0;
}
