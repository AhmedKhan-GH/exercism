#include "queen_attack.h"
#include <stdlib.h>
#include <stdbool.h>

// they can attack each other if:
// row number is the same
// column number is the same

//they are on a diagonal which means that 
//their vertical and horizontal differences are equal

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{

    if(queen_1.row > 7 || queen_2.row > 7 || 
      queen_1.column > 7 || queen_2.column > 7)
    {
        return INVALID_POSITION;
        //off the board
    }
    
    
    int horz = abs(queen_2.row - queen_1.row);
    int vert = abs(queen_2.column - queen_1.column);

    if( horz == 0 && vert == 0)
    {
        return INVALID_POSITION;
        //in the same position
    }

    // now we need to check if they are on 
    // the same diagonal
    
    //on the same row or column
    if ((horz != 0) ^ (vert != 0))
    {
        return CAN_ATTACK;
    }

    //if horz false and vert false

    if(horz == vert) // same diagonal
    {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
    

}
