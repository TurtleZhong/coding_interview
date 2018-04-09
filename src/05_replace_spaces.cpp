/**
 * 将空格替换成%20
 */

#include <iostream>
#include <cstring>

using namespace std;

void replaceSpaces(char *str, const int &length)
{
    if(str == nullptr || length <= 0)
        return;
    // Calc the num of spaces;
    int num_space = 0;
    for(int i = 0; i < length; ++i)
    {
        if(str[i] == ' ')
            num_space++;
    }
    int j = length + 2 * num_space -1;
    char* str_copy = str;

    for(int i = length -1; i >= 0; i--)
    {
        cout << "i = " << i << endl;
        if(str_copy[i] == ' ')
        {
            str[j--] = '0';
            str[j--] = '2';
            str[j--] = '%';
        } else
        {
            str[j--] = str_copy[i];
        }


    }

    cout << "num_space = " << num_space << endl;
}

int main()
{
    char str[100] = " We are Happy .";

    cout << "str.length = " << strlen(str) << endl;
    cout << "Before replace:\n" << str << endl;
    replaceSpaces(str, strlen(str));
    cout << "After replace:\n" << str << endl;

    int x = 1, y = 5;
    cout << (x ^ y) << endl;

    return 0;
}
