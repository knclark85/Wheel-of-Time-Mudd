#include "Characters.h"

using namespace std;

class Location: public Characters
{
public:
    
    
    int northing;
    int easting;
    Scene north;
    Scene south;
    Scene east;
    Scene west;
}
