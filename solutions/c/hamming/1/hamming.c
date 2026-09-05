#include "hamming.h"


// we are finding the hamming distance of two strings
// essentially in how many unique indices do their characters
// differ, so all we need to do is iterate through the string
// and count whenever they are not equal

int compute(const char *lhs, const char *rhs)
{
    size_t left_len = strlen(lhs);
        
    if (left_len != strlen(rhs))
    {
        return -1;
    }

    int hamming = 0;

    for(int i = 0; i < (int)left_len; i++)
    {
        if(lhs[i] != rhs[i])
        {
            hamming += 1;
        }
    }
    
    return hamming;
}