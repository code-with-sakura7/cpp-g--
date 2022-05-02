#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Biryani";
    string &fav_food = food;

    cout << fav_food << "\n";
    fav_food = "Water";
    cout << fav_food;

    
    // cout << ;
    return 0;
}