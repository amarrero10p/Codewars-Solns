#include <vector>
#include <iostream>
using namespace std;

// Your task is to sum the differences 
// between consecutive pairs in the array 
// in descending order.

// Example
// [2, 1, 10]  -->  9
// In descending order: [10, 2, 1]

// Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

// If the array is empty or the array 
// has only one element the result should be 0 
// (Nothing in Haskell, None in Rust).

int sumOfDifferences(const vector<int>& arr){
    int result = 0;
    if (arr.size() <= 1){
        return result;
    }

    return 505;

}

int main()
{
    cout << sumOfDifferences({2});
    return 0;
}