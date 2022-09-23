#include <iostream>

namespace {    
             
char const path[] =         // define the Raw String Literal with R as the delimiter
R"R(^\s+Encryption key:(\w+)  
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)R";      

}

int main()
{
    std::cout << path; // display the named RSL path
}