#include <iostream>
#include <string>
using namespace std;

int main()
{
    string games[4] = {"Scarlet Nexus", "Genshin Impact", "Honkai Impact", "Honkai Impact Star Rail"};
    games[2] = "Tears of Themis";
    cout << games[2];
    return 0;
}