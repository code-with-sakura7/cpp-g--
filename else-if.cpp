#include <iostream>
using namespace std;

int main()
{
    cout << "enter time to see daytime: ";
    float time;
    cin >> time;
    if (time >= 0000 && time <= 1200)
    {
        cout << "Day";
    }
    else if (time > 1200 && time <= 1800)
    {
        cout << "Nessie";
    }
    else
    {
        cout << "Night";
    }

    return 0;
}