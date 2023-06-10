#include "FirstScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include "GL/freeglut.h"
void FirstBackground() {

	
	glBegin(GL_QUADS); // небо
	glColor3ub(128, 128, 128);
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
	glColor3ub(18, 143, 190);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

	glEnd();
	glPopMatrix();

	


	glBegin(GL_QUADS); // Земля
	glColor3ub(124, 252, 0);
	glVertex2f(-2, -2);
	glColor3ub(124, 252, 0);
	glVertex2f(-2, -0.5);
	glColor3ub(124, 252, 0);
	glVertex2f(2, -0.5);
	glColor3ub(124, 252, 0);
	glVertex2f(2, -2);
	glColor3ub(105, 105, 105);
	glVertex2f(-0.4, -0.5);
	glVertex2f(0.4, -0.5);
	glVertex2f(0.4, -0.85);
	glVertex2f(-0.4, -0.85);
	

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 128, 0);
	glVertex2f(0.2, -0.5);
	glVertex2f(1.5, -0.5);
	glColor3ub(255, 250, 250);
	glVertex2f(0.75, 0.1);


	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 128, 0);
	glVertex2f(-0.2, -0.5);
	glVertex2f(-1.5, -0.5);
	glColor3ub(255, 250, 250);
	glVertex2f(-0.85, 0.1);

	glEnd();
}