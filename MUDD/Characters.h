//
//  Characters.h
//  MUDD
//
//  Created by Clark on 6/24/13.
//  Copyright (c) 2013 Ken Clark. All rights reserved.
//

#ifndef __MUDD__Characters__
#define __MUDD__Characters__

#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>

using namespace std;

#endif /* defined(__MUDD__Characters__) */

class Characters
{
public:
   
   Characters(string nm, int hlth, int strngth, int stmn, int spd);
   
   /** change_name, allows the user to change the name of his character*/
   void change_name(string nm);
   
   /** take_damage, adjusts a characters health according to the character
   type and extent of the damage.*/
   virtual void take_damage(int damage);
   
   /** tire, adjusts the character's strength, stamina and speed as they used
   up either in battle or travel*/
   virtual void tire(int strength, int stamina, int speed);
   
   /** regenerate, heals the character by increasing the health, strength,
   stamina and speed based on the character's type*/
   virtual void regenerate(int health, int strength, int stamina, int speed);
   
   /** gains, increases the maximum allowed health, strength, stamina or
   sppeed of the character.*/
   virtual void gains(int health, int strength, int stamina, int speed);
   
   /** add_item, adds an aquired item to the inventory if their is space*/
   virtual bool add_item(string name, int size);
   
   /** remove_item, removes a chosen item from the character's inventory*/
   virtual bool remove_item(string name);
   
   /** list_inventory, returns a stringstream containing a list of all the 
   items in the character's inventory. */
   virtual stringstream list_inventory();
   
   /** clear_inventory, empties the character's inventory of all aitems. */
   virtual bool clear_inventory();

   // Character Actions
   bool walk(int distance);
   bool run(int distance);
   string eat(string food);
   string drink(string beverage);
   bool look(string direction);
   bool wield(string item);
   bool pick_up(string item);
   bool drop(string item);
   
   string name;
   string holding_item;
   int health;
   int max_health;
   int strength;
   int max_strength;
   int stamina;
   int max_stamina;
   int speed;
   int max_speed;
};