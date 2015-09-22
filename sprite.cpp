/**
 * \file sprite.cpp
 * \author Daniel Zhang, Ricky Pan, CS 70 Provided Code
 *
 * \brief Implements the Sprite class
 */

#include <cstddef>
#include <iostream>

#include "sprite.hpp"

using namespace std;

void Sprite::loadImage(const std::string& fname) 
{
    ifstream inputFile{fname};
    
    // Reads in characters from the text file, 
    // copies them into the character array.
    char ch;
    for (size_t i = 0; i < Sprite::WIDTH * Sprite::HEIGHT; ++i)
    {
        ch = inputFile.get();
        if (inputFile.good())
        {
            Sprite::spriteArray[i] = ch;        // Populates spriteArray
        }
    }
    inputFile.close();
}


void Sprite::update() 
{   
    if(Sprite::shouldScroll_)
    {
        Sprite::xvalue +=1;
    }
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
    size_t index = row * Sprite::WIDTH + col;
    return Sprite::spriteArray[index];
}

void Sprite::setLocation(size_t x, size_t y)
{
    Sprite::xvalue = x;
    Sprite::yvalue = y;
}

void Sprite::setScrolling(bool flag)
{
    Sprite::shouldScroll_ = flag;
}
