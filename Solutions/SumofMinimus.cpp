#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Given a 2D ( nested ) list ( array, vector, .. ) of size m * n, 
// your task is to find the sum of the minimum values in each row.

// For Example:

// [ [ 1, 2, 3, 4, 5 ]        #  minimum value of row is 1
// , [ 5, 6, 7, 8, 9 ]        #  minimum value of row is 5
// , [ 20, 21, 34, 56, 100 ]  #  minimum value of row is 20
// ]
// So the function should return 26 because the sum of the minimums is 1 + 5 + 20 = 26.

// Note: You will always be given a non-empty list containing positive values.

int sum_of_minimums(const vector<vector<int>> &numbers)
{
    int total_mins = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        total_mins += *min_element(numbers[i].begin(), numbers[i].end());
        cout << *min_element(numbers[i].begin(), numbers[i].end()) << endl;
    }
    return total_mins;
}

int main()
{
    // test cases
    cout << sum_of_minimums({{1,2,3}, {4,5,6}, {7,8,9}});
    return 0;
}