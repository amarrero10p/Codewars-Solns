#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// You are given two arrays a1 and a2 of strings. 
// Each string is composed with letters from a to z. 
// Let x be any string in the first array 
// and y be any string in the second array.

// Find max(abs(length(x) − length(y)))

// If a1 and/or a2 are empty return -1 in each language except in Haskell 
// (F#) where you will return Nothing (None).

// Example:
// a1 = ["hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", 
//         "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"]
// a2 = ["cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"]
// mxdiflg(a1, a2) --> 13
// Bash note:
// input : 2 strings with substrings separated by ,
// output: number as a string

class MaxDiffLength
{
public:
    int min_word_pos(vector <string> arr1)
    {
        int min_string = arr1[0].length(); int min_pos = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            if (arr1[i].length() < min_string)
            {
                min_string = arr1[i].length();
                min_pos = i;
            }
        }
        return min_pos;
    }

    int max_word_pos(vector <string> arr1)
    {
        int max_string = arr1[0].length(); int max_pos = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            if (arr1[i].length() > max_string)
            {
                max_string = arr1[i].length();
                max_pos = i;
            }
        }
        return max_pos;
    }

    static int mxdiflg(vector<string> a1, vector<string> a2)
    {

        return 1;
    }
};



int main()
{
    MaxDiffLength test;
    cout << test.mxdiflg({"anc", "an"}, {"abc", "ajsoa"}) << endl;
    return 0;
}