/**
 * \file our-movie.cpp
 * \author CS 70 Provided Code
 *
 * \brief Provides the main() function for running one of the movies
 * defined in movieScripts.cpp.
 *
 * \details
 *
 * \remarks
 *
 */

#include <iostream>
#include "movie.hpp"
#include "sprite.hpp"

using namespace std;

void makeOurMovie() 
{
	Sprite mySprite;

	mySprite.loadImage("img/pacman.txt");
	mySprite.setLocation(30,10);

	Movie myMovie;
	myMovie.addSprite(mySprite);

	myMovie.play();

}


int main()
{
    makeOurMovie();
    return 0;
}
