#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greeting = "hello good morning!";
    string greeting1 = "\nhow are you?";
    cout << greeting + "abcd" + greeting1;
    return 0;
}