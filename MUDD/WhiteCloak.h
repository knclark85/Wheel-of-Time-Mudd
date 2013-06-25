//
//  WhiteCloak.h
//  MUDD
//
//  Created by Clark on 6/24/13.
//  Copyright (c) 2013 Ken Clark. All rights reserved.
//

#ifndef __MUDD__WhiteCloak__
#define __MUDD__WhiteCloak__

#include <iostream>
#include "Characters.h"

using namespace std;

#endif /* defined(__MUDD__WhiteCloak__) */

class WhiteCloak: public Characters
{
public:
   WhiteCloak(string name);
   string get_rank();
   void horse_status(bool status);
   int get_companions();
   void lose_companions(int number);
   void gain_companions(int number);
   void take_damage(int damage);
   void tire(int strength, int stamina, int speed);
   void regenerate(int health, int strength, int stamina, int speed);
   void gains(int health, int strength, int stamina, int speed);
   
   //attacks
   int strike();
   int stab();
   int charge();
   int taunt();
   
   //defense
   int block();
   int parry();
   int avoid();
   int cluster();
   
private:
  string rank;
  bool horse;
  int companions;
};