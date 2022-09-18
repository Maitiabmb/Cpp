#include <iostream>
using std::cout;
using std::cin;

int main ()
{
    size_t value;

    cin >> value;                       // Take input using cin

    bool                                // Even characters can be
        expression = (value % 2 != 0);  // divided by 2

    cout << (expression ? "odd" : "even") << '\n'; // Return odd or even
}
