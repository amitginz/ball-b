#include "Team.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;
namespace ariel{
class Game
{
private:
    bool home;
    bool away;
    Team t1;
    Team t2;
    string winner;
    vector<int> score;
public:
    Game();
    Game(Team t1, Team t2);
    ~Game();
    string winner();
    int rand_score(Team t1);
};
}

