#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    union {
        size_t value;
        struct {
            unsigned int zero : 1;
            unsigned int three_seven : 3;
            unsigned int four_fifteen : 4;
            unsigned int five_ten : 5;
            unsigned int four_six : 4;
            unsigned int four_seven : 4;
            unsigned int four_fifteen_2 : 4;
            unsigned int four_fifteen_3 : 4;
            unsigned int x : 3;
            unsigned int y : 1;
            unsigned int five_zero : 5;
            unsigned int two_three : 2;
        };
    } Bits;

    Bits.value = 0;
    Bits.zero = 0;
    Bits.three_seven = 7;
    Bits.four_fifteen = 15;
    Bits.five_ten = 10;
    Bits.four_six = 6;
    Bits.four_seven = 7;
    Bits.four_fifteen_2 = 15;
    Bits.four_fifteen_3 = 15;
    Bits.x = 7;
    Bits.y = 0;
    Bits.five_zero = 0;
    Bits.two_three = 3;

    cout << hex << Bits.value << endl;
    return 0;
}
