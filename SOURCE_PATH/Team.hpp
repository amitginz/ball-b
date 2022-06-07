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
        int wins=0;
        int lost=0;
        Team(const string name, const double skill);
        ~Team();
        string get_name();
        double get_skill();
 };
}