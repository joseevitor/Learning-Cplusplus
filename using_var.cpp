#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    bool var = 10 < 20;

    if(var)
    {
        cout << "verdadeiro";
    }

    /*
    When I want to use the zero in the place of one will be like this
    if(!var)
    {
        cout << "falso";
    }
    */
    return 0;
}
