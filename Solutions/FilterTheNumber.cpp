#include <string>
#include <cctype>
#include <iostream>
#include <cmath>
using namespace std;

long long filter_string(const string &value)
{
    string sresult = "";
    for (int i = 0; i < value.length(); i++)
    {
        if (isdigit(value[i]))
        {
            sresult = sresult + value[i];
        }
    }
    return stol(sresult);
}

int main()
{
    cout << filter_string("a1e2lal3") << endl;
    return 0;
}