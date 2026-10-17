
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
bool isVowel(char ch);
string removeVowels(string str);

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    str = removeVowels(str);

    cout << "String after removing vowels: " << str << endl;

    return 0;
}

// Determines whether a character is a vowel
bool isVowel(char ch)
{
    return (ch == 'A' || ch == 'a' ||
            ch == 'E' || ch == 'e' ||
            ch == 'I' || ch == 'i' ||
            ch == 'O' || ch == 'o' ||
            ch == 'U' || ch == 'u');
}

// Removes all vowels using substr()
string removeVowels(string str)
{
    int i = 0;

    while (i < str.length())
    {
        if (isVowel(str[i]))
        {
            str = str.substr(0, i) + str.substr(i + 1);
        }
        else
        {
            i++;
        }
    }

    return str;
}

