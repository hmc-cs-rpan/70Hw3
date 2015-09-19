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

    /**
     * \brief Accessor function to the sprite's x location.
     * \returns Returns a size_t containing the sprite's x location.
     */
    size_t getXLocation();

    /**
     * \brief Accessor function to the sprite's y location.
     * \return Returns a size_t containing the sprite's y location.
     */
    size_t getYLocation();

    /**
     * \brief Accessor function to the sprite's character array.
     * \return Returns the character at a specified row and column.
     */
    char getCharAt(size_t row, size_t col);

    /**
     * \brief Modifer function to change the sprite's location.
     * \ pre Sprite has an arbitrary location.
     * \ post Sprite's location changes to user-specified location.
     * \ return none
     */
    void setLocation(size_t x, size_t y);

private:
    // Current location of the sprite on the screen in (x, y) form.
    size_t xvalue = 0;
    size_t yvalue = 0;
    // Characters to display on the screen for this sprite
    char spriteArray[WIDTH*HEIGHT];

};

#endif // ifndef SPRITE_HPP_INCLUDED
