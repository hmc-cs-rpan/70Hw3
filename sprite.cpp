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
            Sprite::spriteArray[i] = ch;
        }
    }
    inputFile.close();
}


void Sprite::update() 
{
    // Does nothing for now.
}

size_t Sprite::getXLocation()
{
    return Sprite::xvalue;
}

size_t Sprite::getYLocation()
{
    return Sprite::yvalue;
}

char Sprite::getCharAt(size_t row, size_t col)
{
    size_t location = row * Sprite::WIDTH + col;
    return Sprite::spriteArray[location];
}

void Sprite::setLocation(size_t x, size_t y)
{
    Sprite::xvalue = x;
    Sprite::yvalue = y;
}