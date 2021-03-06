/*
 * GameCanvas.h
 *
 *  Created on: May 6, 2020
 *      Author: noyan
 */

#ifndef GAMECANVAS_H_
#define GAMECANVAS_H_

#include "gBaseCanvas.h"
#include "gVbo.h"
#include "gPlane.h"
#include "gLight.h"


class GameCanvas : public gBaseCanvas {
public:
	GameCanvas(gBaseApp *root);
	virtual ~GameCanvas();

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered();
	void mouseExited();

	void showNotify();
	void hideNotify();

private:
	gVbo vbo1, vbo2;
	float vertices[9];
	unsigned int indices[3];
	gVertex verts2[3];
	gPlane plane;
	gLight light;
};

#endif /* GAMECANVAS_H_ */
