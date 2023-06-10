#include "SecondScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include "GL/freeglut.h"
void SecondBackground() {


	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 139);
	glVertex2f(-2, 1);
	glColor3ub(0, 0, 139);
	glVertex2f(2, 1);
	glColor3ub(128, 128, 128);
	glVertex2f(2, -2);
	glColor3ub(128, 128, 128);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();



}
