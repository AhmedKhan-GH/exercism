#include "binary.h"

// the aim of this exercise is to iterate
// through a string of 1 and 0 chars and then
// accumulate the actual value in an integer
// this can be done through successive bit operations
// shifting left and operating on the first bit

int convert(const char *input)
{

    int result = 0;
    for(size_t i = 0; i < strlen(input); i++)
    {
        result <<= 1;
        switch (input[i]){
            case ('1'):
    
                result |= 1;
                    //set first bit to 1
                break;
            case ('0'):
        
                result |= 0;
                    //set first bit to 0
                break;
            
            default:
                return -1;
        }
    }
    return result;
}