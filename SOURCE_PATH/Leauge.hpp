#include "Team.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;
namespace ariel{
class Leauge{
    private:
        vector<Team> teams;
    public:
        Leauge();
        Leauge(vector<Team> teams);
        Leauge(vector<Team> teams);
        ~Leauge();
        vector<Team> get_leauge();
};
}

