// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/maximizing-xor/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {

    int num1 = l, num2 = l;
    int max = 0;
    int res = 0;

    while (num1 <= r) {
        for (num2 = num1; num2 <= r; ++num2) {
            res = num1 ^ num2;
            if (res > max) {
                max = res;
            }
        }
        num1++;
    }

    return max;
}
