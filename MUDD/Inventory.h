//
//  Inventory.h
//  MUDD
//
//  Created by Clark on 6/24/13.
//  Copyright (c) 2013 Ken Clark. All rights reserved.
//

#ifndef __MUDD__Inventory__
#define __MUDD__Inventory__

#include <iostream>
#include "Characters.h"
#include <vector>

using namespace std;

#endif /* defined(__MUDD__Inventory__) */

class Inventory: public Characters
{
public:
   Inventory(int capacity);
   bool add_item(string name, int size);
   bool remove_item(string name);
   stringstream list_inventory();
   bool clear_inventory();

   int capacity;
   int load;
   vector<string> items;
   vector<int> sizes;
};