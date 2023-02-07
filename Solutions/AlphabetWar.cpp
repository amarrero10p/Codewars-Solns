#include <iostream>
#include <string>
#include <map>
using namespace std;

// Task
// Write a function that accepts fight string consists 
// of only small letters and return who wins the fight. 
// When the left side wins return Left side wins!, 
// when the right side wins return Right side wins!, 
// in other case return Let's fight again!.

// The left side letters and their power:

//  w - 4
//  p - 3
//  b - 2
//  s - 1
// The right side letters and their power:

//  m - 4
//  q - 3
//  d - 2
//  z - 1


string alphabetWar(string fight)
{
    int right_points = 0;
    int left_points = 0;
    map <char, int> right_letters;
    right_letters['z'] = 1; right_letters['d'] = 2; 
    right_letters['q'] = 3; right_letters['m'] = 4;
    map <char, int> left_letters;
    left_letters['s'] = 1; left_letters['b'] = 2;
    left_letters['p'] = 3; left_letters['w'] = 4;
    for (int i = 0; i < fight.length(); i++)
    {
        if (fight[i] == 'z' or fight[i] == 'd' or fight[i] == 'q' or fight[i] == 'm')
        {
            right_points += right_letters[fight[i]];
        }
        if (fight[i] == 's' or fight[i] == 'b' or fight[i] == 'p' or fight[i] == 'w')
        {
            left_points += left_letters[fight[i]];
        }
    }
    if (right_points > left_points)
    {
        return "Right side wins!";
    }
    if (left_points > right_points)
    {
        return "Left side wins!";
    }
    else 
    {
        return "Let's fight again!";
    }

}

int main()
{
    // Test Cases 
    // cout << alphabetWar("z") << endl;
    // cout << alphabetWar("zdqmwpbs") << endl;
    // cout << alphabetWar("wwwwww") << endl;

    return 0;
}