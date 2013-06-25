//
//  BorderLander.h
//  MUDD
//
//  Created by Clark on 6/24/13.
//  Copyright (c) 2013 Ken Clark. All rights reserved.
//

#ifndef __MUDD__BorderLander__
#define __MUDD__BorderLander__

#include <iostream>
#include "Characters.h"
#include "Inventory.h"

using namespace std;

#endif /* defined(__MUDD__BorderLander__) */

class BorderLander: public Characters
{
public:
   BorderLander(string nation, string name);
   string nationality();
   void horse_status(bool status);
   void take_damage(int damage);
   void tire(int strength, int stamina, int speed);
   void regenerate(int health, int strength, int stamina, int speed);
   void gains(int health, int strength, int stamina, int speed);
   
   
   
   //attacks
   int strike();
   int stab();
   int charge();
   int mele();
   
   //defense
   int block();
   int parry();
   int avoid();
   int wheel();
   
private:
  string nation;
  bool horse;
};