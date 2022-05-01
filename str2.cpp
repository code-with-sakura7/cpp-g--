#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = "good morning";
    string str3 = "how are u?";
    cout << str1.append(str2.append(str3));
}