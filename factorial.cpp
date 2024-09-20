#include <iostream>

using namespace std;

int main(int argc, char *argv)
{
    int num, fat = 1;
    cout << "Type a number: ";
    cin >> num;

    for(int i = 1; i < num; i++)
    {
        fat = fat * (i + 1);
    }
    cout << "Factorial: " << fat << endl;
    return 0;
}
