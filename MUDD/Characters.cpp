//
//  Characters.cpp
//  MUDD
//
//  Created by Clark on 6/24/13.
//  Copyright (c) 2013 Ken Clark. All rights reserved.
//

#include "Characters.h"

Characters::Characters(string nm, int hlth, int strngth, int stmn, int spd)
{
   name = nm;
   max_health = health = hlth;
   max_strength = strength = strngth;
   max_stamina = stamina = stmn;
   max_speed = speed = spd;
};

void Characters::change_name(string nm)
{
   name = nm;
};

bool Characters::walk(int distance)
{
   int cost;
   cost = (distance + stamina) / stamina;
   if (cost <= stamina)
   {
      stamina = stamina - cost;
      return true;
   }
   else
   {
      return false;
   }
};

bool Characters::run(int distance)
{
   int cost;
   cost = (distance + stamina) / (2 * speed);
   if (cost <= stamina)
   {
      stamina = stamina - cost;
      return true;
   }
   else
   {
      return false;
   }
};

