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
        t1.shot_out += rand_score(this->t2);
        t2.shot_out += rand_score(this->t1);
        if(this->score[0] >= this->score[1]){
            t1.wins++;
            t1.last_wins++;
            t2.lost++;
            t2.last_lost++;
            return this->t1.get_name();
        }
        else{
            t2.wins++;
            t2.last_wins++;
            t1.lost++;
            t2.last_lost++;
            return this->t2.get_name();
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
        t1.shot_in += submit;
        return submit;
    }

}