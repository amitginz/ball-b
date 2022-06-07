#include "Team.hpp"

namespace ariel{
    Team::Team(const string name, const double skill){
        this->name = name;
        this->skill = rand()/RAND_MAX;
    }
    Team::~Team(){
        
    }
    string Team::get_name(){
        return this->name;
    }
    double Team::get_skill(){
        return this->skill;
    }
}