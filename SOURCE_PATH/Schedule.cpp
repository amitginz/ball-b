#include "Schedule.hpp"
#include <string>
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

    void Schedule::statics_win_lost(){
        for(uint i = 0; i <this->l1.get_leauge().size(); i++){
            cout<<"wins-lost statistic:"<<endl;
            cout<<this->l1.get_leauge().at(i).get_name()<<this->l1.get_leauge().at(i).wins<<"-"<<this->l1.get_leauge().at(i).lost<<endl;
        }
    }

    void Schedule::statics_score_defeat(){
        for(uint i = 0; i <this->l1.get_leauge().size(); i++){
            cout<<"score-defeat statistic:"<<endl;
            cout<<this->l1.get_leauge().at(i).get_name()<<this->l1.get_leauge().at(i).shot_in<<"-"<<this->l1.get_leauge().at(i).shot_out<<endl;
        }
    }

    void Schedule::leading_teams(int num){
        vector<string> names;
        vector<int> win_lost;
        vector<int> score_defeat;
        string name;
        for(uint i = 0; i <this->l1.get_leauge().size(); i++){
            int gap_win_lost= this->l1.get_leauge().at(i).wins-this->l1.get_leauge().at(i).lost;
            int gap_score_defeat = this->l1.get_leauge().at(i).shot_in - this->l1.get_leauge().at(i).shot_out;
            name = l1.get_leauge().at(i).get_name();
            if(name.size()< num){
                names.push_back(name);
                win_lost.push_back(gap_win_lost);
                score_defeat.push_back(gap_score_defeat);
            }
            else{
                for(uint i = 0 ; i<num;i++){
                    if(win_lost.at(i) < gap_win_lost && score_defeat.at(i)<gap_score_defeat){
                        names.at(i) = name;
                        win_lost.at(i) = gap_win_lost;
                        score_defeat.at(i)= gap_score_defeat;
                    }
                }
            }
        }
        cout<<"leading teams are:"<<endl;
        for(uint j = 0 ; j<names.size();j++){
            cout<<names.at(j)<<endl;
        }
    }

    void Schedule::teams_who_score_more(){
        uint team =0;
        for(uint i = 0; i <this->l1.get_leauge().size(); i++){
            int gap_score_defeat = this->l1.get_leauge().at(i).shot_in - this->l1.get_leauge().at(i).shot_out;
            if(gap_score_defeat>0){
                team++;
            }
        }
        cout<<"teams who score more the defeat:"<<team<<endl;
    }

    void Schedule::teams_who_wins_more(){
        uint team =0;
        for(uint i = 0; i <this->l1.get_leauge().size(); i++){
            int gap_win_lost= this->l1.get_leauge().at(i).wins-this->l1.get_leauge().at(i).lost;
            if(gap_win_lost>0){
                team++;
            }
        }
        cout<<"teams who wins more the lost:"<<team<<endl;
    }

    void Schedule::last_wins(){
        int wins = 0;
        for(uint i = 1; i <this->l1.get_leauge().size(); i++){
            if(this->l1.get_leauge().at(i).last_wins > this->l1.get_leauge().at(i-1).last_wins){
                wins = this->l1.get_leauge().at(i).last_wins;
            }
            else{
                wins = this->l1.get_leauge().at(i-1).last_wins;
            }
        }
        cout<<"longest wins pear is:"<<wins;

    }
    void Schedule::last_lost(){
        int lost = 0;
        for(uint i = 1; i <this->l1.get_leauge().size(); i++){
            if(this->l1.get_leauge().at(i).last_lost > this->l1.get_leauge().at(i-1).last_lost){
                lost = this->l1.get_leauge().at(i).last_lost;
            }
            else{
                lost = this->l1.get_leauge().at(i-1).last_lost;
            }
        }
        cout<<"longest lost pear is:"<<lost;
    }
}