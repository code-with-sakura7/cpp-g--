#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        string name;
        int age;
    } strct1, strct2, strct3;

    strct1.name = "hanabi";
    strct1.age = 19;

    strct2.name = "elysia";
    strct2.age = 35;

    strct3.name = "durandal";
    strct3.age = 105;

    cout << strct1.name << "\n";
    cout << strct2.name << "\n";
    cout << strct3.name << "\n";
    cout << strct1.age << "\n";
    cout << strct2.age << "\n";
    cout << strct3.age << "\n";
    return 0;
}