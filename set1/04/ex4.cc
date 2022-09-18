
#include <iostream>

namespace {                                      // anonymous namespace for the RSL

char const output[] =                            // define the RSL output
R"R(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)R";

}

int main()
{
    std::cout << output;                        // print the RSL
}
