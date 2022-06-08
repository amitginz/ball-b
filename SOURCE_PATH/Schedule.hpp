#include "Team.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <utility>
#include "Leauge.hpp"
using namespace std;
namespace ariel{
    class Schedule{
        private:
            vector<pair<string, string>> playing_teams;
            Leauge l1;
        public:
            Schedule(Leauge l1);
            ~Schedule();
            void setting_game();
            void lottery_game();
            void statics_win_lost();
            void statics_score_defeat();
            void leading_teams(int num);
            void teams_who_score_more();
            void teams_who_wins_more();
            void last_wins();
            void last_lost();

    };
}