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

#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "gamestate.h"
#include "renderstate.h"
#include <algorithm>
#include <math.h>

extern renderstate_t g_rstate;
extern gamestate_t g_gstate;

gamestate_t::gamestate_t()
{
  srand (time(NULL));
  double delta = rand()/(double)RAND_MAX;
  double force = (rand() % 25)+30;

  striker.pos.x = -0.65 + delta;
  striker.pos.y = -0.8;
  striker.type = STRIKER;
  striker.is_visible = true;

  delta = rand()/(double)RAND_MAX;
  //coin1.pos.x = delta*0.1;
   //coin1.pos.y = -1*delta*0.4;
  coin1.pos.x = 0.0;
  coin1.pos.y = 0.0;
  coin1.vel.dx = 0.0;
  coin1.vel.dy = 0.0;
  coin1.type = WHITE;
  coin1.is_visible = true;

  coin2.pos.x = 0.075;
  coin2.pos.y = -0.1299;
  coin2.vel.dx = 0.0;
  coin2.vel.dy = 0.0;
  coin2.type = WHITE;
  coin2.is_visible = true;

  coin3.pos.x = -0.075;
  coin3.pos.y = -0.1299;
  coin3.vel.dx = 0.0;
  coin3.vel.dy = 0.0;
  coin3.type = WHITE;
  coin3.is_visible = true;

  coin4.pos.x = 0.15;
  coin4.pos.y = -0.2598;
  coin4.vel.dx = 0.0;
  coin4.vel.dy = 0.0;
  coin4.type = WHITE;
  coin4.is_visible = true;


  coin5.pos.x = -0.15;
  coin5.pos.y = -0.2598;
  coin5.vel.dx = 0.0;
  coin5.vel.dy = 0.0;
  coin5.type = WHITE;
  coin5.is_visible = true;


  coin6.pos.x = 0.0;
  coin6.pos.y = -0.2598;
  coin6.vel.dx = 0.0;
  coin6.vel.dy = 0.0;
  coin6.type = WHITE;
  coin6.is_visible = true;


  striker.vel.dx = (coin1.pos.x - striker.pos.x)/force;
  striker.vel.dy = (coin1.pos.y - striker.pos.y)/force;

}

void gamestate_t::update()
{
  // TODO:
  // find out next position (using velocity)
  // detect collision of striker and coin (may assume perfect collision)
  // detect collision with the board, and make the coin bounce off the board
  // NOTE: After the striker has collided with the coin, set 'is_visible' of striker to false
  //      This will make the striker disappear from the board

  bool flag1 = true;
  bool flag2 = true;
  bool flag3 = true;
  bool flag4 = true;
  bool flag5 = true;
  bool flag6 = true;
  bool flag0 = true;


  double x1=coin1.pos.x;
  double y1=coin1.pos.y;

  double x2=coin2.pos.x;
  double y2=coin2.pos.y;

  double x3=coin3.pos.x;
  double y3=coin3.pos.y;

  double x4=coin4.pos.x;
  double y4=coin4.pos.y;

  double x5=coin5.pos.x;
  double y5=coin5.pos.y;

  double x6=coin6.pos.x;
  double y6=coin6.pos.y;

  double x0=striker.pos.x;
  double y0=striker.pos.y;

  double vx0=striker.vel.dx;
  double vy0=striker.vel.dy;

  double vx1=coin1.vel.dx;
  double vy1=coin1.vel.dy;

  double vx2=coin2.vel.dx;
  double vy2=coin2.vel.dy;

  double vx3=coin3.vel.dx;
  double vy3=coin3.vel.dy;

  double vx4=coin4.vel.dx;
  double vy4=coin4.vel.dy;

  double vx5=coin5.vel.dx;
  double vy5=coin5.vel.dy;

  double vx6=coin6.vel.dx;
  double vy6=coin6.vel.dy;

  double d1=sqrt( pow(x1-x0,2) + pow(y1-y0,2) );
  double d2=sqrt( pow(x2-x0,2) + pow(y2-y0,2) );
  double d3=sqrt( pow(x3-x0,2) + pow(y3-y0,2) );
  double d4=sqrt( pow(x4-x0,2) + pow(y4-y0,2) );
  double d5=sqrt( pow(x5-x0,2) + pow(y5-y0,2) );
  double d6=sqrt( pow(x6-x0,2) + pow(y6-y0,2) );
  double d7=sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
  double d8=sqrt( pow(x1-x3,2) + pow(y1-y3,2) );
  double d9=sqrt( pow(x1-x4,2) + pow(y1-y4,2) );
  double d10=sqrt( pow(x1-x5,2) + pow(y1-y5,2) );
  double d11=sqrt( pow(x1-x6,2) + pow(y1-y6,2) );
  double d12=sqrt( pow(x2-x3,2) + pow(y2-y3,2) );
  double d13=sqrt( pow(x2-x4,2) + pow(y2-y4,2) );
  double d14=sqrt( pow(x2-x5,2) + pow(y2-y5,2) );
  double d15=sqrt( pow(x2-x6,2) + pow(y2-y6,2) );
  double d16=sqrt( pow(x3-x4,2) + pow(y3-y4,2) );
  double d17=sqrt( pow(x3-x5,2) + pow(y3-y5,2) );
  double d18=sqrt( pow(x3-x6,2) + pow(y3-y6,2) );
  double d19=sqrt( pow(x4-x5,2) + pow(y4-y5,2) );
  double d20=sqrt( pow(x4-x6,2) + pow(y4-y6,2) );
  double d21=sqrt( pow(x5-x6,2) + pow(y5-y6,2) );



  if(d1<0.068)
  {
	swap(coin1.vel.dx,striker.vel.dx);    //////////////////// HAVE TO MOVE STRIKER THROUGHOUT WITH ITS DAMPING AS WELL.....
	swap(coin1.vel.dy,striker.vel.dy);    //////////////AND IF THE STRIKER GOES IN HOLE THEN COUT FOUL OR 'CROSS' IN PLACE OF TICK....
  }

    if(d2<0.068)
  {
	swap(coin2.vel.dx,striker.vel.dx);
	swap(coin2.vel.dy,striker.vel.dy);
  }

  if(d3<0.068)
  {
	swap(coin3.vel.dx,striker.vel.dx);
	swap(coin3.vel.dy,striker.vel.dy);
  }

  if(d4<0.068)
  {
	swap(coin4.vel.dx,striker.vel.dx);
	swap(coin4.vel.dy,striker.vel.dy);
  }

  if(d5<0.068)
  {
	swap(coin5.vel.dx,striker.vel.dx);
	swap(coin5.vel.dy,striker.vel.dy);
  }

  if(d6<0.068)
  {
	swap(coin6.vel.dx,striker.vel.dx);
	swap(coin6.vel.dy,striker.vel.dy);
  }

  if(d7<0.060)
  {
	swap(vx1,vx2);
	swap(vy1,vy2);
  }

  if(d8<0.060)
  {
	swap(vx1,vx3);
	swap(vy1,vy3);
  }

  if(d9<0.060)
  {
	swap(vx1,vx4);
	swap(vy1,vy4);
  }

  if(d10<0.060)
  {
	swap(vx1,vx5);
	swap(vy1,vy5);
  }

  if(d11<0.060)
  {
	swap(vx1,vx6);
	swap(vy1,vy6);
  }

  if(d12<0.060)
  {
	swap(vx2,vx3);
	swap(vy2,vy3);
  }

  if(d13<0.060)
  {
	swap(vx2,vx4);
	swap(vy2,vy4);
  }

  if(d14<0.060)
  {
	swap(vx2,vx5);
	swap(vy2,vy5);
  }

  if(d15<0.060)
  {
	swap(vx2,vx6);
	swap(vy2,vy6);
  }

  if(d16<0.060)
  {
	swap(vx3,vx4);
	swap(vy3,vy4);
  }

  if(d17<0.060)
  {
	swap(vx3,vx5);
	swap(vy3,vy5);
  }

  if(d18<0.060)
  {
	swap(vx3,vx6);
	swap(vy3,vy6);
  }

  if(d19<0.060)
  {
	swap(vx4,vx5);
	swap(vy4,vy5);
  }

  if(d20<0.060)
  {
	swap(vx4,vx6);
	swap(vy4,vy6);
  }

  if(d21<0.060)
  {
	swap(vx5,vx6);
	swap(vy5,vy6);
  }


  //// For y=-1.7284x + 0.682
  if( fabs(y1 + 1.7284*x1 - 0.682) < 0.05)
  {
	  coin1.vel.dx = (vx1 - 2*vx1*0.7492 - 2*vy1*0.432784); // coin.vel.dx = (coin.vel.dx - K) * ( long expression)
	  coin1.vel.dy = (vy1 - 2*vy1*0.2508 - 2*vx1*0.432784); // do it only if flag=0, try finding that value
  }

  if( fabs(y2 + 1.7284*x2 - 0.682) < 0.05)
  {
	  coin2.vel.dx = (vx2 - 2*vx2*0.7492 - 2*vy2*0.432784);
      coin2.vel.dy = (vy2 - 2*vy2*0.2508 - 2*vx2*0.432784);
  }


  if( fabs(y3 + 1.7284*x3 - 0.682) < 0.05)
  {
	  coin3.vel.dx = (vx3 - 2*vx3*0.7492 - 2*vy3*0.432784);
      coin3.vel.dy = (vy3 - 2*vy3*0.2508 - 2*vx3*0.432784);
  }


  if( fabs(y4 + 1.7284*x4 - 0.682) < 0.05)
  {
	  coin4.vel.dx = (vx4 - 2*vx4*0.7492 - 2*vy4*0.432784);
      coin4.vel.dy = (vy4 - 2*vy4*0.2508 - 2*vx4*0.432784);
  }


  if( fabs(y5 + 1.7284*x5 - 0.682) < 0.05)
  {
	  coin5.vel.dx = (vx5 - 2*vx5*0.7492 - 2*vy5*0.432784);
      coin5.vel.dy = (vy5 - 2*vy5*0.2508 - 2*vx5*0.432784);
  }


  if( fabs(y6 + 1.7284*x6 - 0.682) < 0.05)
  {
	  coin6.vel.dx = (vx6 - 2*vx6*0.7492 - 2*vy6*0.432784);
      coin6.vel.dy = (vy6 - 2*vy6*0.2508 - 2*vx6*0.432784);
  }


  if( fabs(y0 + 1.7284*x0 - 0.682) < 0.05)
  {
	  striker.vel.dx = (vx0 - 2*vx0*0.7492 - 2*vy0*0.432784);
      striker.vel.dy = (vy0 - 2*vy0*0.2508 - 2*vx0*0.432784);
  }








  //// For y=1.7284x + 0.682
  if( fabs(y0 - 1.7284*x0 - 0.682) < 0.05)
  {
	  striker.vel.dx = (vx0 - 2*vx0*0.7492 + 2*vy0*0.432784);
      striker.vel.dy = (vy0 - 2*vy0*0.2508 + 2*vx0*0.432784);
  }


    if( fabs(y2 - 1.7284*x2 - 0.682) < 0.05)
  {
	  coin2.vel.dx = (vx2 - 2*vx2*0.7492 + 2*vy2*0.432784);
      coin2.vel.dy = (vy2 - 2*vy2*0.2508 + 2*vx2*0.432784);
  }


    if( fabs(y3 - 1.7284*x3 - 0.682) < 0.05)
  {
	  coin3.vel.dx = (vx3 - 2*vx3*0.7492 + 2*vy3*0.432784);
      coin3.vel.dy = (vy3 - 2*vy3*0.2508 + 2*vx3*0.432784);
  }

    if( fabs(y4 - 1.7284*x4 - 0.682) < 0.05)
  {
	  coin4.vel.dx = (vx4 - 2*vx4*0.7492 + 2*vy4*0.432784);
      coin4.vel.dy = (vy4 - 2*vy4*0.2508 + 2*vx4*0.432784);
  }

    if( fabs(y5 - 1.7284*x5 - 0.682) < 0.05)
  {
	  coin5.vel.dx = (vx5 - 2*vx5*0.7492 + 2*vy5*0.432784);
      coin5.vel.dy = (vy5 - 2*vy5*0.2508 + 2*vx5*0.432784);
  }

    if( fabs(y6 - 1.7284*x6 - 0.682) < 0.05)
  {
	  coin6.vel.dx = (vx6 - 2*vx6*0.7492 + 2*vy6*0.432784);
      coin6.vel.dy = (vy6 - 2*vy6*0.2508 + 2*vx6*0.432784);
  }

    if( fabs(y1 - 1.7284*x1 - 0.682) < 0.05)
  {
	  coin1.vel.dx = (vx1 - 2*vx1*0.7492 + 2*vy1*0.432784);
      coin1.vel.dy = (vy1 - 2*vy1*0.2508 + 2*vx1*0.432784);
  }







  //// For y = -1
  if( fabs( coin1.pos.y + 0.98) < 0.05 )
  {
	 coin1.vel.dy = -vy1;
  }

    if( fabs( coin2.pos.y + 0.98) < 0.05 )
  {
	 coin2.vel.dy = -vy2;
  }

    if( fabs( coin3.pos.y + 0.98) < 0.05 )
  {
	 coin3.vel.dy = -vy3;
  }

    if( fabs( coin4.pos.y + 0.98) < 0.05 )
  {
	 coin4.vel.dy = -vy4;
  }

   if( fabs( coin5.pos.y + 0.98) < 0.05 )
  {
	 coin5.vel.dy = -vy5;
  }

   if( fabs( coin6.pos.y + 0.98) < 0.05 )
  {
	 coin6.vel.dy = -vy6;
  }

    if( fabs( striker.pos.y + 0.98) < 0.05 )
  {
	 striker.vel.dy = -vy0;
  }










 if( flag1 )
 {
  coin1.vel.dx*=0.999;
  coin1.vel.dy*=0.999;
 }

 if( flag2 )
 {
  coin2.vel.dx*=0.999;
  coin2.vel.dy*=0.999;
 }


if( flag3 )
 {
  coin3.vel.dx*=0.999;
  coin3.vel.dy*=0.999;
 }


if( flag4 )
 {
  coin4.vel.dx*=0.999;
  coin4.vel.dy*=0.999;
 }


if( flag5 )
 {
  coin5.vel.dx*=0.999;
  coin5.vel.dy*=0.999;
 }


if( flag6 )
 {
  coin6.vel.dx*=0.999;
  coin6.vel.dy*=0.999;
 }


if( flag0 )
 {
  striker.vel.dx*=0.999;
  striker.vel.dy*=0.999;
 }



   vx0=striker.vel.dx;
   vy0=striker.vel.dy;

   vx1=coin1.vel.dx;
   vy1=coin1.vel.dy;

   vx2=coin2.vel.dx;
   vy2=coin2.vel.dy;

   vx3=coin3.vel.dx;
   vy3=coin3.vel.dy;

   vx4=coin4.vel.dx;
   vy4=coin4.vel.dy;

   vx5=coin5.vel.dx;
   vy5=coin5.vel.dy;

   vx6=coin6.vel.dx;
   vy6=coin6.vel.dy;


   if( sqrt( pow(vx0,2)+ pow(vy0,2)) < 0.00101)
   {flag0 = false;
    striker.vel.dx*=(.997- vx0);
    striker.vel.dy*=(.997- vy0);
   }
   else flag0=true;

    if( sqrt( pow(vx1,2)+ pow(vy1,2)) < 0.00101)
        {flag1 = false;
         coin1.vel.dx*=(.997-vx1);
         coin1.vel.dy*=(.997-vy1);
        }
         else flag1=true;

     if( sqrt( pow(vx2,2)+ pow(vy2,2)) < 0.00101)
     {flag2 = false;
         coin2.vel.dx*=(.997-vx2);
         coin2.vel.dy*=(.997-vy2);
     }
      else flag2=true;

      if( sqrt( pow(vx3,2)+ pow(vy3,2)) < 0.00101)
      {flag3 = false;
         coin3.vel.dx*=(.997-vx3);
         coin3.vel.dy*=(.997-vy3);
      }
       else flag3=true;

       if( sqrt( pow(vx4,2)+ pow(vy4,2)) < 0.00101)
        {flag4 = false;
         coin4.vel.dx*=(.997-vx4);
         coin4.vel.dy*=(.997-vy4);
        }
         else flag4=true;

        if( sqrt( pow(vx5,2)+ pow(vy5,2)) < 0.00101)
        {flag5 = false;
         coin5.vel.dx*=(.997-vx5);
         coin5.vel.dy*=(.997-vy5);
        }
         else flag5=true;

         if( sqrt( pow(vx6,2)+ pow(vy6,2)) < 0.00101)
         {flag6 = false;
         coin6.vel.dx*=(.997-vx6);
         coin6.vel.dy*=(.997-vy6);
         }
          else flag6=true;






  coin1.pos.x+=coin1.vel.dx;
  coin1.pos.y+=coin1.vel.dy;

  coin2.pos.x+=coin2.vel.dx;
  coin2.pos.y+=coin2.vel.dy;

  coin3.pos.x+=coin3.vel.dx;
  coin3.pos.y+=coin3.vel.dy;

  coin4.pos.x+=coin4.vel.dx;
  coin4.pos.y+=coin4.vel.dy;

  coin5.pos.x+=coin5.vel.dx;
  coin5.pos.y+=coin5.vel.dy;

  coin6.pos.x+=coin6.vel.dx;
  coin6.pos.y+=coin6.vel.dy;

  // Example code to move the striker
  // Begin Example (code)
  striker.pos.x += striker.vel.dx;
  striker.pos.y += striker.vel.dy;
  // End Example



}

void gamestate_t::render_game()
{
  // copy gamestate to renderstate for rendering
  g_rstate.copy_state();
  g_rstate.render();
}

void gamestate_t::loopstep()
{
  update();
  render_game();
}


void gamestate_t::c_loopstep() {
    g_gstate.loopstep();
}


