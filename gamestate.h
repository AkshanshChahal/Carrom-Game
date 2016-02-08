  

#pragma once

#include "piece.h"
#include "renderstate.h"

class gamestate_t
{
  public:
    carrompiece_t striker;
    carrompiece_t coin1;
    carrompiece_t coin2;
    carrompiece_t coin3;
    carrompiece_t coin4;
    carrompiece_t coin5;
    carrompiece_t coin6;


    gamestate_t();
    void update();
    void idle();
    void render_game();
    void loopstep();
    static void c_loopstep();
};

