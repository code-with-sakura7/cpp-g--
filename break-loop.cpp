#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 20; i += 3)
    {
        cout << i << '\n';
        if (i == 15)
        {
            break;
        }
    }
    return 0;
}