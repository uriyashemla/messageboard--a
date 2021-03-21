#include <iostream>
#include "Direction.hpp"
#include <string>
#include <stdexcept>
using namespace std;
using ariel::Direction;

namespace ariel {
        class Board{

            public  : 
            int read(int r, int c, Direction d, int l);
            int post(int r, int c, Direction d, string s);
            void show();
        };
}