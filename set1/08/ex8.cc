#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    // output "hello world" if no arguments supplied
    // output "hello " + arg if #args == 1
    // output "hello " + arg if #args > 1 and arg is the one specified by the 1st arg
    // to display.
    // eg: a.out 3 arg2 arg3 arg4
     
    std::cout << "hello " 
              << (argc == 1 ? "world" : ((argc == 2) ? argv[1] : argv[std::stoul(argv[1])])) 
              << '\n';
}
