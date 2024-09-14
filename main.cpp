#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num = 10;


    /* when we use && its meaning that both of the alternatives have to be true */
    /* when we want to use the NOT, its necessary to use "||" */
    if((num%2 == 0) && num<20);
    {
        cout << "numero par e menor do que 20";
    }
    return 0;
}
