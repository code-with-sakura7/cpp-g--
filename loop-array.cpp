#include <iostream>
#include <string>
using namespace std;

int main()
{
    string subjects[3] = {"CS", "Algorithm", "Data Strc"};
    int len = subjects->length();
    ++len;
    for (int i = 0; i < len; ++i)
    {
        cout << subjects[i] << '\n';
    }
    // cout << ;
    return 0;
}