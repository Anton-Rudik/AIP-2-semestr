#include "ThirdScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include <array>
#include "GL/freeglut.h"
void ThirdBackground() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
	glColor3ub(0, 0, 139);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();
}
void Star() {
	glPushMatrix();
	glScalef(0.3, 0.3, 2);
	glTranslatef(-2, 2, 0);
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 0);
	glVertex2d(-0.1, 0.2);
	glVertex2d(0, 0.4);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.3, 0.2);
	glVertex2d(0.1, 0.1);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.2, -0.15);
	glVertex2d(0.0, 0.0);
	glVertex2d(0.0, 0.0);
	glVertex2d(-0.2, -0.15);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glVertex2d(-0.3, 0.2);
	glVertex2d(-0.1, 0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(0.1, 0.2);
	glVertex2d(0, 0);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 2);
	glTranslatef(-1.5, -2, 0);
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 0);
	glVertex2d(-0.1, 0.2);
	glVertex2d(0, 0.4);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.3, 0.2);
	glVertex2d(0.1, 0.1);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.2, -0.15);
	glVertex2d(0.0, 0.0);
	glVertex2d(0.0, 0.0);
	glVertex2d(-0.2, -0.15);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glVertex2d(-0.3, 0.2);
	glVertex2d(-0.1, 0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(0.1, 0.2);
	glVertex2d(0, 0);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 2);
	glTranslatef(2, 1, 0);
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 0);
	glVertex2d(-0.1, 0.2);
	glVertex2d(0, 0.4);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.3, 0.2);
	glVertex2d(0.1, 0.1);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.2, -0.15);
	glVertex2d(0.0, 0.0);
	glVertex2d(0.0, 0.0);
	glVertex2d(-0.2, -0.15);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glVertex2d(-0.3, 0.2);
	glVertex2d(-0.1, 0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(0.1, 0.2);
	glVertex2d(0, 0);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.3, 0.3, 2);
	glTranslatef(-1.5, -2, 0);
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 0);
	glVertex2d(-0.1, 0.2);
	glVertex2d(0, 0.4);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.3, 0.2);
	glVertex2d(0.1, 0.1);
	glVertex2d(0.1, 0.2);
	glVertex2d(0.2, -0.15);
	glVertex2d(0.0, 0.0);
	glVertex2d(0.0, 0.0);
	glVertex2d(-0.2, -0.15);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glVertex2d(-0.3, 0.2);
	glVertex2d(-0.1, 0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(0.1, 0.2);
	glVertex2d(0, 0);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glEnd();
	glPopMatrix();



}
