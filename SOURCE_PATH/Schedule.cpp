#include "Schedule.hpp"

namespace ariel{
    Schedule::Schedule(Leauge l1){
        this->l1 = l1;

    }
    Schedule::~Schedule(){

    }
    void Schedule::setting_game(){
        vector<Team> leauge;
        vector<pair<int, int>> schedule;
        leauge = this->l1.get_leauge();
        //create new pair of game for the schedule
        for(uint i = 0; i <leauge.size();i++){
            pair<string, string> PAIR1;
            pair<int, int> PAIR2;
            PAIR1.first = leauge.at(i).get_name();
            PAIR2.first = i;
            PAIR1.second = leauge.at(leauge.size()-1-i).get_name();
            PAIR2.second = leauge.size()-i-1;
            this->playing_teams.push_back(PAIR1);
            schedule.push_back(PAIR2);
        }
        //create new pair of game for the schedule
        for(uint i = 0; i <leauge.size();i++){
            pair<string, string> PAIR1;
            pair<int, int> PAIR2;
            int temp;
            bool second = false;
            int temp = schedule.at(i).second-1;
            if(second){
                PAIR1.first = leauge.at(temp).get_name();
                PAIR2.first = schedule.at(i).first;
                PAIR1.second = leauge.at(schedule.at(i).second-1).get_name();
                PAIR2.second = schedule.at(i).second+1;
                second = false;
            }
            else{
                second = true;
                PAIR1.first = leauge.at(schedule.at(i).first).get_name();
                PAIR2.first = schedule.at(i).first;
                PAIR1.second = leauge.at(schedule.at(i).second-1).get_name();
                PAIR2.second = schedule.at(i).second+1;

            }
            schedule.at(i) = PAIR2;
            //reset the loop of the algorithm
            this->playing_teams.push_back(PAIR1);
            if(i == leauge.size()-1){
                i = 0;
            }
            //finish round rubin algorithm
            if(schedule.at(0).second == 2){
                break;
            }
        }
    }
}