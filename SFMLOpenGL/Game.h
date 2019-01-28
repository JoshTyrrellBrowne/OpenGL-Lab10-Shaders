#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <MyVector3.h>
#include <Matrix3.h>

#include <fstream>
#include <string>

using namespace std;
using namespace sf;
//using namespace gpp;

class Game
{
public:
	Game();
	~Game();
	void run();

	std::string loadShader(const std::string t_filePath);
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void checkKeyInput();
	void updateResultVerts();

	Clock clock;
	Time elapsed;

	MyVector3 tempVector{ 0,0,0 };

	float rotationAngle = 0.0f;
};

#endif