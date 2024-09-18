#include <iostream>

using namespace std;

int main(int argc, char *argv)
{
    int n = 1;

    while(n <= 100)
    {
        int i =0;
        while(i < 3)
        {
            cout << "Number: " << n << endl;
            i++;
        }

        n++;

    }


    return 0;
}
