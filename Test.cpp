/**
 *
 * AUTHORS: amit ginzberg
 * 
 * Date: 2021-05
 */
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include <vector>
#include "SOURCE_PATH/Game.hpp"
#include "SOURCE_PATH/Leauge.hpp"
#include "SOURCE_PATH/Schedule.hpp"
#include "SOURCE_PATH/Team.hpp"
using namespace ariel;

TEST_CASE("checkthrow-goodinput"){
   
    ariel::Team play("test",0.5);
    ariel::Team play2("test",0.5);
    Game g1(play,play2);
    ariel::Leauge l1;
        CHECK_NOTHROW(l1.get_leauge());
        CHECK_NOTHROW(play.get_name());
        CHECK_NOTHROW(play.get_skill());
        int temp = g1.rand_score(play);
        CHECK_NOTHROW(temp);
        string win = g1.winner();
        CHECK_NOTHROW(win);
        CHECK_NOTHROW(l1.get_leauge());
        CHECK_NOTHROW(play.get_name());
        CHECK_NOTHROW(play.get_skill());
        int temp = g1.rand_score(play);
        CHECK_NOTHROW(temp);
        string win = g1.winner();
        CHECK_NOTHROW(win);
        CHECK_NOTHROW(l1.get_leauge());
        CHECK_NOTHROW(play.get_name());
        CHECK_NOTHROW(play.get_skill());
        int temp = g1.rand_score(play);
        CHECK_NOTHROW(temp);
        string win = g1.winner();
        CHECK_NOTHROW(win);
        CHECK_NOTHROW(l1.get_leauge());
        CHECK_NOTHROW(play.get_name());
        CHECK_NOTHROW(play.get_skill());
        int temp = g1.rand_score(play);
        CHECK_NOTHROW(temp);
        string win = g1.winner();
        CHECK_NOTHROW(win);
        CHECK_NOTHROW(l1.get_leauge());
        CHECK_NOTHROW(play.get_name());
        CHECK_NOTHROW(play.get_skill());
        int temp = g1.rand_score(play2);
        CHECK_NOTHROW(temp);
        string win = g1.winner();
        CHECK_NOTHROW(win);
        
}







