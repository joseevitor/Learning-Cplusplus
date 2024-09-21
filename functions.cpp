#include <iostream>

bool pair(int num);
void mensagem(int n);

using namespace std;

int main(int argc, char *argv)
{
    int n;

    mensagem(n);
    cout << "Type a number: ";
    cin >> n;
    if((n))
        cout << "The number" << n << "is impar" << endl;
    else
        cout << "The number " << n << "is pair";
    return 0;




}

void mensagem(int n)
{
    cout << "aprendendo c++ "<< endl;
}

bool pair(int num)
{
    if(num % 2  == 0)
        return true;
    return false;

}
