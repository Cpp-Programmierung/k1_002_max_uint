#include <iostream>
#include <limits>
using namespace std;

int main()
{
    unsigned int i = 0;
    cout << " max unsigned = " << ~i << '\n';
    cout << " max unsigned = " << numeric_limits<unsigned int>::max() << '\n';

    system("pause");
}