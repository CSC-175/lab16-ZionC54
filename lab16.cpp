// Code to implement the gcf function goes here
#include <iostream>
#include <cmath>
using namespace std;

int gcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    else if (a == 0) {
        return b;
    }
    else {
        return gcf(b, a % b);
    }
}