/**
 * \file movie.cpp
 * \author CS 70 Provided Code
 *
 * \brief Implements the Movie class
 *
 * \details
 *
 * \remarks
 *
 */

#include <iostream>
#include <ncurses.h>
#include <unistd.h>

#include "movie.hpp"
#include "sprite.hpp"

using namespace std;

void Movie::updateContents() 
{
    // Clear the character array by writing a space to each element

    // Loop through all of the characters in the sprite and copy them to 
    // the right spot in the movie's character array.
}

/**
 * Initializes the screen for ncurses, then repeatedly updates the screen until
 * the user exits by pressing 'q'.
 */
void Movie::play() 
{

    const int PAUSE_TIME_IN_MICROSECONDS = 40000;

    // Initialize the screen
    initscr();

    // Don't echo characters entered by the user
    noecho();

    // Make the cursor invisible
    curs_set(0);

    // Tell ncurses not to block waiting for user input on getch() calls.
    nodelay(stdscr, TRUE);

    // We're not using the cursor, so tell ncurses to leave it wherever our
    // updates happen to put it.
    leaveok(stdscr, TRUE);

    // Leave the cursor on the bottom line of the screen instead of scrolling
    // if one of our updates would put it off-screen.
    scrollok(stdscr, FALSE);


    // Play the movie by refreshing the screen with new data, every so often
    int ch;
    bool finished = false;

    while (not(finished)) {
        // Copy contents to the screen
        updateContents(); // Get updated character values from the sprite object
        display();        // Copy the movie's characters to the screen's buffer
        refresh();        // Refresh the screen

        // Sleep between updates
        usleep(PAUSE_TIME_IN_MICROSECONDS);

        // Check to see if the user has entered 'q' to quit yet
        ch = getch();
        if (ch == 'q') {
            finished = true;
        }
    }

    // Put the cursor back to beginning of the last row of the terminal, where
    // we expect it to be when the program exits.
    mvcur(0, COLS - 1, LINES - 1, 0);

    // Restore the saved shell terminal before exiting.
    endwin();
}

void Movie::display() 
{
    // Loop through all of the characters in the movie's character array and
    // copy  them to the right place on the screen, using the ncurses function
    // mvaddch: mvaddch(r, c, char) puts the character char at row r, column c
    // of the screen.

}

void Movie::addSprite(Sprite& newSprite)
{
    Movie::mySprite_ = newSprite;
}
