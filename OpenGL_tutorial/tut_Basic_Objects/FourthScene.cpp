#include "FourthScene.hpp"
#include "GL/freeglut.h"
#include "Figure.h"
#include "DrawLib.hpp"
void FourthBackground() { 
    glPushMatrix();
    glBegin(GL_POLYGON); //Стык к солнцу
    glColor3ub(192, 192, 192);
    glVertex2d(-0.6, 0.675);
    glVertex2d(0.6, 0.675);
    glVertex2d(0.6, 0.70);
    glVertex2d(-0.6, 0.70);
    glEnd();

    glBegin(GL_POLYGON); //Тело
    glColor3ub(169, 169, 169);
    glVertex2d(-0.5, 0.8);
    glColor3ub(220, 220, 220);
    glVertex2d(0.5, 0.8);
    glColor3ub(169, 169, 169);
    glVertex2d(0.5, 0.55);
    glColor3ub(105, 105, 105);
    glVertex2d(-0.5, 0.55);
    glEnd();

    glBegin(GL_POLYGON); // панели право
    glColor3ub(0, 0, 235);
    glVertex2d(0.6, 0.9);
    glVertex2d(0.6, 0.45);
    glVertex2d(0.9, 0.45);
    glVertex2d(0.9, 0.9);
    glEnd();

    glBegin(GL_POLYGON); // панели лево
    glColor3ub(0, 0, 235);
    glVertex2d(-0.6, 0.9);
    glVertex2d(-0.6, 0.45);
    glVertex2d(-0.9, 0.45);
    glVertex2d(-0.9, 0.9);
    glEnd();


    glBegin(GL_LINES);
    // панели лево
    glColor3ub(255, 215, 0);
    glVertex2d(-0.6, 0.9);
    glVertex2d(-0.6, 0.45);
    glVertex2d(-0.65, 0.9);
    glVertex2d(-0.65, 0.45);
    glVertex2d(-0.7, 0.9);
    glVertex2d(-0.7, 0.45);
    glVertex2d(-0.75, 0.9);
    glVertex2d(-0.75, 0.45);
    glVertex2d(-0.8, 0.9);
    glVertex2d(-0.8, 0.45);
    glVertex2d(-0.85, 0.9);
    glVertex2d(-0.85, 0.45);
    glVertex2d(-0.9, 0.9);
    glVertex2d(-0.9, 0.45);
    glVertex2d(-0.6, 0.9);
    glVertex2d(-0.9, 0.9);
    glVertex2d(-0.6, 0.85);
    glVertex2d(-0.9, 0.85);
    glVertex2d(-0.6, 0.8);
    glVertex2d(-0.9, 0.8);
    glVertex2d(-0.6, 0.75);
    glVertex2d(-0.9, 0.75);
    glVertex2d(-0.6, 0.7);
    glVertex2d(-0.9, 0.7);
    glVertex2d(-0.6, 0.65);
    glVertex2d(-0.9, 0.65);
    glVertex2d(-0.6, 0.6);
    glVertex2d(-0.9, 0.6);
    glVertex2d(-0.6, 0.55);
    glVertex2d(-0.9, 0.55);
    glVertex2d(-0.6, 0.5);
    glVertex2d(-0.9, 0.5);
    glVertex2d(-0.6, 0.45);
    glVertex2d(-0.9, 0.45);
    // панели право
    glColor3ub(255, 215, 0);
    glVertex2d(0.6, 0.9);
    glVertex2d(0.6, 0.45);
    glVertex2d(0.65, 0.9);
    glVertex2d(0.65, 0.45);
    glVertex2d(0.7, 0.9);
    glVertex2d(0.7, 0.45);
    glVertex2d(0.75, 0.9);
    glVertex2d(0.75, 0.45);
    glVertex2d(0.8, 0.9);
    glVertex2d(0.8, 0.45);
    glVertex2d(0.85, 0.9);
    glVertex2d(0.85, 0.45);
    glVertex2d(0.9, 0.9);
    glVertex2d(0.9, 0.45);
    glVertex2d(0.6, 0.9);
    glVertex2d(0.9, 0.9);
    glVertex2d(0.6, 0.85);
    glVertex2d(0.9, 0.85);
    glVertex2d(0.6, 0.8);
    glVertex2d(0.9, 0.8);
    glVertex2d(0.6, 0.75);
    glVertex2d(0.9, 0.75);
    glVertex2d(0.6, 0.7);
    glVertex2d(0.9, 0.7);
    glVertex2d(0.6, 0.65);
    glVertex2d(0.9, 0.65);
    glVertex2d(0.6, 0.6);
    glVertex2d(0.9, 0.6);
    glVertex2d(0.6, 0.55);
    glVertex2d(0.9, 0.55);
    glVertex2d(0.6, 0.5);
    glVertex2d(0.9, 0.5);
    glVertex2d(0.6, 0.45);
    glVertex2d(0.9, 0.45);
	glEnd();
	glFlush();
	glPopMatrix();

}