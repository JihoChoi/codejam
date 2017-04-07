
/*
	
    code jam
    Qualification Round 2016
    A. Counting Sheep
*/

#include <string>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int countSheep(int n) {

    int multi;
    int count = 1;
    int digits[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    while (true) {
        multi = n * count;
        int ret = multi;

        while (multi > 0) {
            digits[ multi % 10 ] = 1;
            multi = multi / 10;
        }

        int isDone = true;
        for (int i = 0; i < 10; ++i) {
            if (digits[i] == 0) {
                isDone = false;
                break;
            }
        }

        if (isDone == true) {
            return ret;
        }
        count++;
    }
}


int main() {

    int t; // number of test cases
    int n;

    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> n;

        if (n == 0) {
            cout << "Case #" << i << ": " << "INSOMNIA" << endl;
        } else {
            cout << "Case #" << i << ": " << countSheep(n) << endl;
        }
    }
    return 0;
}
