#include <iostream>
#include "Direction.hpp"
#include <string>
#include <stdexcept>
using namespace std;
using ariel::Direction;

namespace ariel {
        class Board{

            public  : 
            int read(unsigned int r, unsigned int c, Direction d, unsigned int l);
            int post(unsigned int r, unsigned int c, Direction d, string s);
            void show();
        };
}
