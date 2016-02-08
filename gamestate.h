Akshansh


Search Drive

Drive
.
Folder Path
My Drive
Carrom New
NEW 
Folders and views
My DriveCollapsed
Shared with me
Google Photos
Recent
Starred
Trash
2 GB of 65 GB used
Upgrade storage
Get Drive for Mac
.

C++
gamestate.cpp

C
gamestate.h

C++
main.cpp

C++
piece.cpp

C
piece.h

C++
render_engine.cpp

C
render_engine.h

C++
renderstate.cpp

C
renderstate.h
All selections cleared 

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

