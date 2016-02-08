#pragma once

#include "piece.h"
#include "gamestate.h"

class renderstate_t
{
  private:
    carrompiece_t p,p1,p2,p3,p4,p5,p6;

    void draw_coin(carrompiece_t& piece);
    void draw_board();

  public:
    void render();
    void copy_state();
};
