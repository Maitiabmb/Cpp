#include <iostream>
using std::cout;
using std::cin;

int main()
{
  // determine if an input integer is even or odd with six unique expressions
  // each one outputs "odd" for odd number, "even" for even number
  
  size_t value;
  cin >> value;
  
  cout << ((value % 2 == 1) ? "odd" : "even") << '\n';             
  // #odd % 2 == 1, #even % 2 == 0
  cout << (((value ^ 1) == value - 1) ? "odd" : "even") << '\n';   
  // #odd ^ 1 == #odd - 1, #even ^ 1 == #even + 1
  cout << (((value & 1) == 1) ? "odd" : "even") << '\n';           
  // #odd & 1 == 1, #even ^ 1 == 0
  cout << (((value | 1) == value) ? "odd" : "even") << '\n';       
  // #odd | 1 == #odd, #even | 1 > #even   
  cout << (((value / 2) * 2 != value) ? "odd" : "even") << '\n';   
  // (#odd / 2) * 2 != #odd, (#odd / 2)  * 2 == #odd
  cout << (((value >> 1) << 1 != value) ? "odd" : "even") << '\n'; 
  // similar to expression 5, but expressed with shift operators.
}
