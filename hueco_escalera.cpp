#include "iostream"
#include "string"

using namespace std;

bool isNum(string str)
{
    int i = 0;

    while (i < str.length())
    {
        char c = str.at(i);
        if (c < 48 || c > 57)
            return (false);
        i++;
    }
    return (true);
}

int main()
{
    int     n;
    cin >> n;
    string inputs[n];

    
    return 0;
}