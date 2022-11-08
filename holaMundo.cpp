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
    string  str;
    int     n;
    int     i;

    cin >> str;

    if (isNum(str))
    {
        n = stoi(str) < 6 ? stoi(str) : 0;
        i = 0;
        while (i++ < n)
            cout << "Hola mundo.\n";
    }

    return (0);
}
