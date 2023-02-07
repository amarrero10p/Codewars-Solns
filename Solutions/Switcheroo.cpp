#include <iostream>
#include <string>
using namespace std;

// Given a string made up of letters a, b, 
// and/or c, switch the position of letters a 
// and b (change a to b and vice versa). 
// Leave any incidence of c untouched.

// Example:

// 'acb' --> 'bca'
// 'aabacbaa' --> 'bbabcabb'

string switcheroo(const string &s) 
{
  string swtch = "";
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'a')
    {
        swtch += 'b';
    }
    else if (s[i] == 'b')
    {
        swtch += 'a';
    }
    else {swtch += s[i];}
  }
  return swtch;
}

int main()
{
    // Test Cases
    cout << switcheroo("aabacbaa") << endl;
    cout << switcheroo("acb") << endl;
    return 0;

}