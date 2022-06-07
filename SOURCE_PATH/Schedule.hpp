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

    };
}