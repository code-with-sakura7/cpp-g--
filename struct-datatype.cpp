#include <iostream>
#include <string>
using namespace std;

// declaring a struct

struct fruitjuice
{
    string name;
    int price;
};

int main()
{
    fruitjuice stock1;
    stock1.name = "Fruity";
    stock1.price = 5;

    fruitjuice stock2;
    stock2.name = "Sour";
    stock2.price = 10;

    cout << stock1.price;
    cout << stock2.name;
    return 0;
}