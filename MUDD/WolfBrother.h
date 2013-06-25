//
//  WolfBrother.h
//  MUDD
//
//  Created by Clark on 6/24/13.
//  Copyright (c) 2013 Ken Clark. All rights reserved.
//

#ifndef __MUDD__WolfBrother__
#define __MUDD__WolfBrother__

#include <iostream>
#include "Characters.h"

using namespace std;

#endif /* defined(__MUDD__WolfBrother__) */

class WolfBrother: public Characters
{
public:
   WolfBrother(string name);
   int get_wolves();
   void find_pack(int size);
   void lose_pack(int size);
   int get_dream_exp();
   void gain_dream_exp(int gain);
   void reset_dream_exp();
   void take_damage(int damage);
   void tire(int strength, int stamina, int speed);
   void regenerate(int health, int strength, int stamina, int speed);
   void gains(int health, int strength, int stamina, int speed);
   
   //attacks
   int strike();
   int stab();
   int bite();
   int mele();
   
   //defense
   int block();
   int parry();
   int dodge();
   int howl();

   
private:
   double sleep_time;
   int dream_exp;
   int wolves;
};