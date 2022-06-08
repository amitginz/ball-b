#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;
namespace ariel{
    class Team{
    private:
        string name;
        double skill;
    public:
        int shot_in= 0;
        int shot_out =0;
        int last_wins =0;
        int last_lost=0;
        int last_wins1 =0;
        int last_lost1=0;
        int wins=0;
        int lost=0;
        Team(const string name, const double skill);
        ~Team();
        string get_name();
        double get_skill();
 };
}