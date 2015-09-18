/* sprite.hpp
   =========

   interface definition for the Sprite class. Defines the behavior
   of a single asciimation 'character'

 */

#ifndef SPRITE_HPP_INCLUDED
#define SPRITE_HPP_INCLUDED 1;

#include <iostream>
#include <fstream>

/**
 * \class Sprite
 * \brief Holds the contents of a single ASCIImation sprite
 *
 * \details
 * Stores an array of characters that will be displayed to the screen, along
 * with the sprite's current location.
 *
 * \remarks
 *    The implemented code only works for a fixed size sprite.
 *
 */
class Sprite {
public:
    // Size of the sprite, in characters
    static const size_t WIDTH = 40;
    static const size_t HEIGHT = 10;

    /**
     * \brief Could modify the contents or location of a sprite, but doesn't
     *        yet.
     * \post The sprite is unmodified.
     */
    void update();

    /**
     * \brief Reads a text file containing the characters for a sprite.
     * \post Should populate the sprite's character array, but doesn't yet.
     */
    void loadImage(const std::string& fname);


private:
    // Current location of the sprite on the screen.

    // Characters to display on the screen for this sprite

};

#endif // ifndef SPRITE_HPP_INCLUDED
