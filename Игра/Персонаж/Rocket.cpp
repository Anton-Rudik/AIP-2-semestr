#include "GL/freeglut.h"

// блок объявлений функций
void renderScene(void);
void Rocket();
void System();

// блок реализации функций

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutMainLoop();
    return 0;
}


void renderScene(void) 
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна быть первой в renderScene

    Rocket();
    //System();
    

    glutSwapBuffers();
}

void Rocket()
{
    glBegin(GL_POLYGON); //Тело
    glColor3ub(128, 128, 128);
    glVertex2d(-0.15, 0.4);
    glVertex2d(-0.15, -0.4);
    glVertex2d(0.15, -0.4);
    glVertex2d(0.15, 0.4);
    glEnd();


    glBegin(GL_POLYGON); //Нос
    glColor3ub(192, 192, 192);
    glVertex2d(-0.2, 0.4);
    glVertex2d(0.21, 0.4);
    glVertex2d(0, 0.7);
    glEnd();

    glBegin(GL_POLYGON); //Сопло
    glColor3ub(119, 136, 153);
    glVertex2d(0.1, -0.4);
    glVertex2d(-0.1, -0.4);
    glVertex2d(-0.14, -0.5);
    glVertex2d(0.14, -0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211, 211, 211);//Крыло левое
    glVertex2d(-0.15, 0.25);
    glVertex2d(-0.15, -0.4);
    glVertex2d(-0.25, -0.5);
    glVertex2d(-0.3, -0.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211, 211, 211);//Крыло правое
    glVertex2d(0.15, 0.25);
    glVertex2d(0.15, -0.4);
    glVertex2d(0.25, -0.5);
    glVertex2d(0.3, -0.6);
    glEnd();

    glBegin(GL_POLYGON); //Огонь макс
    glColor3ub(255, 140, 0);
    glVertex2d(-0.1, -0.5);
    glVertex2d(0.1, -0.5);
    glVertex2d(0, -0.7);
    glEnd();

    glBegin(GL_POLYGON); //Огонь седена
    glColor3ub(255, 215, 0);
    glVertex2d(-0.065, -0.5);
    glVertex2d(0.065, -0.5);
    glVertex2d(0, -0.645);
    glEnd();

    glBegin(GL_POLYGON);//Огонь мин
    glColor3ub(255, 255, 0);
    glVertex2d(-0.03, -0.5);
    glVertex2d(0.03, -0.5);
    glVertex2d(0, -0.6);
    glEnd();
}

void System() 
{
    glBegin(GL_LINES);

    glColor3d(1, 1, 1);
    glVertex2f(0, -1);
    glVertex2f(0, 1);

    glColor3d(1, 1, 1);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);

    glEnd();

    glBegin(GL_LINES);

    glColor3d(0, 155, 0);
    glVertex2f(0.015, -1);
    glVertex2f(-0.015, -1);
    glVertex2f(0.015, -0.9);
    glVertex2f(-0.015, -0.9);
    glVertex2f(0.015, -0.8);
    glVertex2f(-0.015, -0.8);
    glVertex2f(0.015, -0.7);
    glVertex2f(-0.015, -0.7);
    glVertex2f(0.015, -0.6);
    glVertex2f(-0.015, -0.6);
    glVertex2f(0.015, -0.5);
    glVertex2f(-0.015, -0.5);
    glVertex2f(0.015, -0.4);
    glVertex2f(-0.015, -0.4);
    glVertex2f(0.015, -0.3);
    glVertex2f(-0.015, -0.3);
    glVertex2f(0.015, -0.2);
    glVertex2f(-0.015, -0.2);
    glVertex2f(0.015, -0.1);
    glVertex2f(-0.015, -0.1);
    glVertex2f(0.015, 0);
    glVertex2f(-0.015, 0);
    glVertex2f(0.015, 1);
    glVertex2f(-0.015, 1);
    glVertex2f(0.015, 0.9);
    glVertex2f(-0.015,0.9);
    glVertex2f(0.015, 0.8);
    glVertex2f(-0.015, 0.8);
    glVertex2f(0.015, 0.7);
    glVertex2f(-0.015, 0.7);
    glVertex2f(0.015, 0.6);
    glVertex2f(-0.015, 0.6);
    glVertex2f(0.015, 0.5);
    glVertex2f(-0.015, 0.5);
    glVertex2f(0.015, 0.4);
    glVertex2f(-0.015, 0.4);
    glVertex2f(0.015, 0.3);
    glVertex2f(-0.015, 0.3);
    glVertex2f(0.015, 0.2);
    glVertex2f(-0.015, 0.2);
    glVertex2f(0.015, 0.1);
    glVertex2f(-0.015, 0.1);

    glVertex2f(0.1, 0.015);
    glVertex2f(0.1, -0.015);
    glVertex2f(0.2, 0.015);
    glVertex2f(0.2, -0.015);
    glVertex2f(0.3, 0.015);
    glVertex2f(0.3, -0.015);
    glVertex2f(0.4, 0.015);
    glVertex2f(0.4, -0.015);
    glVertex2f(0.5, 0.015);
    glVertex2f(0.5, -0.015);
    glVertex2f(0.6, 0.015);
    glVertex2f(0.6, -0.015);
    glVertex2f(0.7, 0.015);
    glVertex2f(0.7, -0.015);
    glVertex2f(0.8, 0.015);
    glVertex2f(0.8, -0.015);
    glVertex2f(0.9, 0.015);
    glVertex2f(0.9, -0.015);
    glVertex2f(0.1, 0.015);
    glVertex2f(0.1, -0.015);
    glVertex2f(0.2, 0.015);
    glVertex2f(0.2, -0.015);
    glVertex2f(0.3, 0.015);
    glVertex2f(0.3, -0.015);
    glVertex2f(0.4, 0.015);
    glVertex2f(0.4, -0.015);
    glVertex2f(0.5, 0.015);
    glVertex2f(0.5, -0.015);
    glVertex2f(0.6, 0.015);
    glVertex2f(0.6, -0.015);
    glVertex2f(0.7, 0.015);
    glVertex2f(0.7, -0.015);
    glVertex2f(0.8, 0.015);
    glVertex2f(0.8, -0.015);
    glVertex2f(0.0, 0.015);
    glVertex2f(0.0, -0.015);
    glVertex2f(0.1, 0.015);
    glVertex2f(0.1, -0.015);
    glVertex2f(0.2, 0.015);
    glVertex2f(0.2, -0.015);
    glVertex2f(0.3, 0.015);
    glVertex2f(0.3, -0.015);
    glVertex2f(0.4, 0.015);
    glVertex2f(0.4, -0.015);
    glVertex2f(0.5, 0.015);
    glVertex2f(0.5, -0.015);
    glVertex2f(0.6, 0.015);
    glVertex2f(0.6, -0.015);
    glVertex2f(0.7, 0.015);
    glVertex2f(0.7, -0.015);
    glVertex2f(0.8, 0.015);
    glVertex2f(0.8, -0.015);
    glVertex2f(0.9, 0.015);
    glVertex2f(0.9, -0.015);
    glVertex2f(-0.1, 0.015);
    glVertex2f(-0.1, -0.015);
    glVertex2f(-0.2, 0.015);
    glVertex2f(-0.2, -0.015);
    glVertex2f(-0.3, 0.015);
    glVertex2f(-0.3, -0.015);
    glVertex2f(-0.4, 0.015);
    glVertex2f(-0.4, -0.015);
    glVertex2f(-0.5, 0.015);
    glVertex2f(-0.5, -0.015);
    glVertex2f(-0.6, 0.015);
    glVertex2f(-0.6, -0.015);
    glVertex2f(-0.7, 0.015);
    glVertex2f(-0.7, -0.015);
    glVertex2f(-0.8, 0.015);
    glVertex2f(-0.8, -0.015);
    glVertex2f(-0.9, 0.015);
    glVertex2f(-0.9, -0.015);

    glEnd();

}