#pragma once

#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class LeafGame : public GameState
{
private:
	//Leaf Puzzle variables
	int numRows, numCol, theSelected, selected[6], arraySize, type, flipped;
	bool leafStates[100];
	ALLEGRO_BITMAP *leafDown, *leafUp, *background, *omNomNom;
	bool hasWon();
	ALLEGRO_SAMPLE *leafFlipSounds[4];
	//Adventure/platformer variables
	//Tree Punching variables
public:
	LeafGame();
	void Update(int dir);
	void Render();
	void Enter();
	void Init(int w, int h);
};