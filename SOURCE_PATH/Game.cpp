#include "Game.hpp"
#include "Team.hpp"
namespace ariel{
    Game::Game(Team t1, Team t2):Game(){
        this->t1 = t1;
        this->t2 = t2;
    }
    Game::~Game(){

    }
    string Game::winner(){
        this->score.push_back(rand_score(this->t1));
        this->score.push_back(rand_score(this->t2));
        if(this->score[0] >= this->score[1]){
            return this->t1.get_name();
            t1.wins++;
            t2.lost++;
        }
        else{
            return this->t2.get_name();
            t2.wins++;
            t1.lost++;
        }
    }

    int Game::rand_score(Team t1){
        int submit = 0;
        int result = (rand() % 50 +50)+(10*t1.get_skill());
        int special_result = (rand() % 55 + 45)+(10*t1.get_skill());
        if(away){
            submit = result;
        }
        if(home){
            submit = special_result;
        }
        return submit;
    }

}