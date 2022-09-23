#include <iostream>



int main()
{
    // create a number by defined bit rules.
    // output the number in hex.
    
    union MyNum
    {
        size_t value;
        struct
        {
            unsigned int bitZero              : 1; // 0 bit
            unsigned int bitOneTOThree        : 3; // bits[1...3]
            unsigned int bitFourToSeven       : 4; // bits[4...7] 
            unsigned int bitEightToTwelve     : 5; // bits[8...12]
            unsigned int bitThirtToSixt       : 4; // bits[13..16]
            unsigned int bitSeventToTwen      : 4; // bits[17..20]
            unsigned int bitTwenOneTOTwenFour : 4; // bits[21...24]
            unsigned int bitTwenFiTOTwenEig   : 4; // bits[25...28]
            unsigned int bitTwenNiToThirOne   : 3; // bits[29...31] split 1
            unsigned int bitThirTwo           : 1; // bits[32] split 2
            unsigned int bitThirThrToThirSev  : 5; // bits[33...37]
            unsigned int bitThirEigToThirNi   : 2; // bits[38...39]   	
            unsigned int bitsRem              :24; // all the remaning bits	     
        } b; 
    } myBits{ .b = {0,7,15,10,6,7,15,15,7,0,0,3,0}};
    
    std::cout << std::hex << myBits.value << '\n';
}