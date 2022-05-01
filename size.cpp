#include <iostream>
#include <string>
using namespace std;

int main()
{
    string countme = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num = countme.length();
    int num1 = countme.size();
    cout << num + '\n' + num1;
    return 0;
}