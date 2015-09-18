/**
 * \file sprite.cpp
 * \author CS 70 Provided Code
 *
 * \brief Implements the Sprite class
 *
 * \details
 *
 * \remarks
 *
 */

#include <cstddef>
#include <iostream>

#include "sprite.hpp"

using namespace std;

void Sprite::loadImage(const std::string& fname) 
{
    ifstream inputFile{fname};
    
    // Read in characters from the text file, 
    // copying them into the character array.
    char ch;
    for (size_t i = 0; i < Sprite::WIDTH * Sprite::HEIGHT; ++i) {
        ch = inputFile.get();
        if (inputFile.good()) {
               // FIXME: Do something here with the character array.
        }
    }
    inputFile.close();
}


void Sprite::update() 
{
    // Does nothing for now.
}
