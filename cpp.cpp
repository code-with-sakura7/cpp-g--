#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        int number;
        string text;
        bool truth;
    } mystruct;

    mystruct.number = 55;
    mystruct.text = "I LOVE CODING <3";
    mystruct.truth = true;

    cout << mystruct.number << endl;
    cout << mystruct.text << endl;
    cout << mystruct.truth << endl;

    return 0;
}