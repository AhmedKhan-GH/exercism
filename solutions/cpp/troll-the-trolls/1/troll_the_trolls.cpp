namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.

enum class AccountStatus{
    troll,
    guest,
    user,
    mod
};

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.

enum class Action
{
    read,
    write,
    remove
};
    
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.

bool display_post(AccountStatus account_status_1, AccountStatus account_status_2)
{
    //posts by trolls are only visible to other trolls
    //therefore if account_status_1 is a troll, then 
    //account_status_2 must be a troll as well

    //otherwise if the account_status_1 is not a troll
    //then anything in the second argument it doesn't matter

    if(account_status_1 != AccountStatus::troll)
    {
        //first is not a troll therefore anything goes
        return true;
    }

    if(account_status_2 != AccountStatus::troll)
    {
        //first is a troll but the second is not a troll so false
        return false;
    }

    //both are trolls
    return true;
    
}

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.

bool permission_check(Action action, AccountStatus account_status)
{
    // moderator is defacto true for all permissions
    if(account_status == AccountStatus::mod)
    {
        return true;
    }

    if(account_status == AccountStatus::user || account_status == AccountStatus::troll)
    {
        if(action == Action::read || action == Action::write)
        {
            return true;
        }
        return false;
    }

    if(account_status == AccountStatus::guest)
    {
        if(action == Action::read)
        {
            return true;
        }
        return false;
    }
    return false;

    //guests can read posts

    //users and trolls can read and write posts

    //moderators can read write and remove posts
}

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.

bool valid_player_combination(AccountStatus account_status_1, AccountStatus account_status_2)
{
    if(account_status_1 == AccountStatus::guest || account_status_2 == AccountStatus::guest)
    {
        return false;
    }
// neither is a guest, but if one is and not both then it is also false

    if((account_status_1 == AccountStatus::troll) != (account_status_2 == AccountStatus::troll))
    {
        //exclusive or check on troll, if only one is troll it is false
        // if both or neither then it is still valid
        return false;
    }
    
    return true;
}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus account_status_1, AccountStatus account_status_2)
{
    //we need to create a data structure that has an implicit ordering
    //so that an arbitrary check can just report an inequality operator

    return account_status_1 > account_status_2;
}
    
}  // namespace hellmath
