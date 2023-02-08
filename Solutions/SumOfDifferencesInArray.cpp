#include <vector>
#include <iostream>
#include <algorithm>
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

int sumOfDifferences(const vector<int>& arr)
{
    int result = 0;
    vector <int> arr_copy = arr;
    sort(arr_copy.rbegin(), arr_copy.rend());
    if (arr_copy.size() <= 1){
        return result;
    }
    for (int i = 0; i < arr_copy.size(); i++)
    {
        if (i + 1 == arr.size()){break;}
        result += (arr_copy[i] - arr_copy[i + 1]);

    }
    return result;
}

int main()
{
    // test cases
    cout << sumOfDifferences({}) << endl;
    cout << sumOfDifferences({1}) << endl;
    cout << sumOfDifferences({2,10,1}) << endl;
    return 0;
}