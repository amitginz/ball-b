#include "Leauge.hpp"

namespace ariel{
    Leauge::Leauge(){
        vector<string> names = {"nor","sde","eli","macbi", "hapoel","haifa", "tira","shikago", "nyc","golden-state","real-madrid","barcelona","mit","jerusalem","boston","broklyn","haifa","LAS","LAC","DENVER"};
        for(uint i = 0 ; i<20;i++){
            if(this->leauge.size()<20){
                Team temp{names[i],rand()/RAND_MAX};
                this->leauge.push_back(temp);
            }
            else{
                break;
            }
            
        }

    }
    Leauge::Leauge(vector<Team> leauge){
        this->leauge = leauge;
    }
    Leauge::Leauge(vector<Team> leauge){
        vector<string> names = {"nor","sde","eli","macbi", "hapoel","haifa", "tira","shikago", "nyc","golden-state","real-madrid","barcelona","mit","jerusalem","boston","broklyn","haifa","LAS","LAC","DENVER"};
        for(uint i = 0 ; i<20;i++){
            if(leauge.size()<20){
                Team temp{names[i],rand()/RAND_MAX};
                this->leauge.push_back(temp);
            }
            else{
                break;
            }
            
        }
        
    }
    vector<Team> Leauge::get_leauge(){
        return this->leauge;
    }
}