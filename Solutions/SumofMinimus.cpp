#include <vector>
#include <iostream>
#include <cmath>
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
    return 0;
}

int main()
{
    vector <vector<int>> test = {{1,2,3}, {4,5,6}};
    for (int i = 0; i < test.size(); i++)
    {
        for (int j = 0; j < test[i].size(); j++)
        {
            cout << test[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}