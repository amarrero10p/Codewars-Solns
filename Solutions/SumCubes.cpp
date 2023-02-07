#include <iostream>
#include <cmath>
using namespace std;


// Write a function that takes a positive integer n,
//  sums all the cubed values from 1 to n (inclusive), 
//  and returns that sum.

// Assume that the input n will always be a positive integer.

// Examples: (Input --> output)

// 2 --> 9 (sum of the cubes of 1 and 2 is 1 + 8)
// 3 --> 36 (sum of the cubes of 1, 2, and 3 is 1 + 8 + 27)

unsigned int sum_cubes(unsigned int n) {
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total += pow(i, 3);
    }
    return total;
}

int main()
{
    // test cases
    cout << sum_cubes(1);
    cout << sum_cubes(2);
    cout << sum_cubes(3);
    return 0;
}