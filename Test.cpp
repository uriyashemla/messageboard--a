#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"
#include <iostream>
#include <string>
#include <algorithm>
using ariel::Direction;
using namespace std;
using namespace ariel;


ariel::Board board;




TEST_CASE("good case"){

    CHECK(board.read(0,0,Direction::Horizontal,7) == 0);//should check if its _______

    CHECK(board.post(100,100,Direction::Horizontal,"abcd") == 0);
    CHECK(board.read(100,100,Direction::Horizontal,4) == 0);//check if its truly post by the horizontal way

    CHECK(board.post(250,250,Direction::Vertical,"hi") == 0);
    CHECK(board.read(250,250,Direction::Vertical,2) == 0);//check if its truly post by the vertical way

    CHECK(board.post(50,50,Direction::Horizontal,"xyz") == 0);
    CHECK(board.read(50,50,Direction::Vertical,4) == 0);//check the vertical way on horizontal post

    CHECK(board.post(200,200,Direction::Vertical,"hello cpp") == 0);
    CHECK(board.read(200,203,Direction::Horizontal,7) == 0);//check the horizontal way on vertical post

    CHECK(board.post(120,120,Direction::Vertical,"uriya") == 0);
    CHECK(board.read(121,120,Direction::Vertical,5) == 0);//check the  word from the middle by the Vertical way

    CHECK(board.post(140,10,Direction::Horizontal,"asher") == 0);
    CHECK(board.read(140,13,Direction::Horizontal,2) == 0);//check the  word from the middle by the horizontal way

    CHECK(board.post(80,80,Direction::Horizontal,"efg") == 0);
    CHECK(board.read(80,78,Direction::Horizontal,7) == 0);//check the  word from the middle by the vertical way

    CHECK(board.post(120,121,Direction::Vertical,"shemla") == 0);    
    CHECK(board.read(118,121,Direction::Vertical,5) == 0);//check the before the word

    CHECK(board.post(50,51,Direction::Horizontal,"xx") == 0);
    CHECK(board.read(50,50,Direction::Horizontal,3) == 0);//check if its change

    CHECK(board.post(251,250,Direction::Vertical,"a") == 0);
    CHECK(board.read(250,250,Direction::Vertical,2) == 0);//check if its change
}
/*
TEST_CASE("trying post/read negative raws and coles"){
    CHECK_THROWS(board.post(100,-3,Direction::Horizontal,"hello"));
    CHECK_THROWS(board.read(70,-8,Direction::Vertical,16));
    CHECK_THROWS(board.post(-5,62,Direction::Horizontal,"shalom"));
    CHECK_THROWS(board.read(-45,55,Direction::Horizontal,6));
    CHECK_THROWS(board.post(-16,-7,Direction::Vertical,"ma kore?"));
    CHECK_THROWS(board.read(-9,-14,Direction::Horizontal,6));
}

TEST_CASE("trying read by negative way"){
    CHECK_THROWS(board.read(88,66,Direction::Vertical,-3));
    CHECK_THROWS(board.read(77,55,Direction::Vertical,-10));
}
*/