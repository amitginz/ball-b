#include "Team.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;
namespace ariel{
class Leauge{
    private:
        vector<Team> leauge;
    public:
        Leauge();
        Leauge(vector<Team> leauge);
        Leauge(vector<Team> leauge);
        ~Leauge();
        vector<Team> get_leauge();
};
}

