#include "rna_transcription.h"

char *to_rna(const char *dna)
{
    // given a char array of dna we have to return a char array
    // of RNA using a mapping we have to build an O(1) mapping
    // from the input character to the output character and we have
    // a few strategies to do this

    //input is const so we have to dynamically allocate the output

    size_t length = strlen(dna);
    char* result = malloc((length + 1) * sizeof(char));
    result[length] = '\0';

    for(size_t i = 0; i < length; ++i)
    {
        result[i] = dna[i];
        //now i just need to convert to the new character
        //based on the mapping best done with a switch statement
    
        switch (dna[i]) {
            case ('G'): 
                    result[i] = 'C';
                break;
            case ('C'):
                     result[i] = 'G';
                break;
            case ('T'):
                     result[i] = 'A';
                break;
            case ('A'): 
                     result[i] = 'U';
                break;
        }
    }
    return result;
}