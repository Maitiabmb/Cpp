#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
  // Always need to output hello
  // If argc == 1, no args, so print
  // world
  // If argc == 2, 1 arg, so print
  // last arg
  // Otherwise, get arg location
  // from argv[1], and get output.
    cout << "hello " << (argc == 1 ? "world" : (argc == 2 ? argv[1] : argv[stoul(argv[1])])) << "\n";
}
