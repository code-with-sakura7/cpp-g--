#include <iostream>
#include <string>
using namespace std;

int main()
{
    float time = 1835;
    string result = (time < 1200) ? "Morning" : "Night";
    cout << result;
    return 0;
}