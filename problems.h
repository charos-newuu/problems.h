#include <cmath> // For using floor and ceil functions

// Problem 1
int floorFunction(double num) {
    return static_cast<int>(std::floor(num));
}

int ceilingFunction(double num) {
    return static_cast<int>(std::ceil(num));
}

// Problem 2
void swap_values(double &a, double &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Problem 3
int multiply(int x, int y) {
    if (y == 0) return 0;
    if (y > 0) return x + multiply(x, y - 1);
    return -multiply(x, -y);
}

// Problem 4
int digitSum(int n) {
    if (n == 0) return 0;
    return n % 10 + digitSum(n / 10);
}

// Problem 5
int decimalToBinary(int n) {
    if (n == 0) return 0;
    return n % 2 + 10 * decimalToBinary(n / 2);
}

// Problem 6
int midValue(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c)) return a;
    if ((b >= a && b <= c) || (b <= a && b >= c)) return b;
    return c;
}
