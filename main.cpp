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

#include <GL/glut.h>
#include "gamestate.h"
#include "renderstate.h"
#include "render_engine.h"

gamestate_t g_gstate;
renderstate_t g_rstate;

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize (640,480); 
  glutInitWindowPosition (500, 300);
  glutCreateWindow ("COL100 Assignment 8");
  render_engine::init();
  glutReshapeFunc(render_engine::reshape);
  glutKeyboardFunc(render_engine::keyboard);
  glutIdleFunc(gamestate_t::c_loopstep);
  //glutFullScreen();  // Uncomment this function-call for full-screen
  glutMainLoop();
  return 0;
}
