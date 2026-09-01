namespace targets {
// TODO: Insert the code for the alien class here


    class Alien{
    public:
        Alien(int x, int y)
    {
        this->x_coordinate = x;
        this->y_coordinate = y;
    }

    int get_health()
    {
        return this->health;
    }

    bool hit()
    {
        if (this->health > 0)
        {
            this->health -= 1;
        }
        return true;
    }

    int is_alive()
    {
        return health > 0;
    }

    bool teleport(int x, int y)
    {
        this->x_coordinate = x;
        this->y_coordinate = y;
        return true;
    }

      int x_coordinate;
    int y_coordinate;

    bool collision_detection(Alien alien)
    {
        if (alien.x_coordinate != this->x_coordinate)
        {
            return false;
        }
        if(alien.y_coordinate != this->y_coordinate){
            return false;
        }
        return true;
    }
    
    private:
  
    int health{3};
    
    };

}  // namespace targets
