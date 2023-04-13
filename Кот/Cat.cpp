//Гусев Антон
//УТС/22-2-о
//Вариан 4

#include <GL/glut.h>

// блок объявлений функций
void renderScene(void);
void drawCat(float x, float y);
void drawRocet(void);

// блок реализации функций

int main(int argc, char* argv[])
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutMainLoop();
    return 0;
}


void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна быть первой в renderScene
    drawRocet();
    glutSwapBuffers(); // эта функция должна быть последний в renderScene
}

//Кот
/*void drawCat(float x, float y){
    glTranslatef(x, y,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(211, 250, 75);
    glVertex2f(-0.5, -0.8);
    glColor3ub(211, 250, 56);
    glVertex2f(0.0, 0.3);
    glColor3ub(211, 250, 75);
    glVertex2f(0.5, -0.8);

    glColor3ub(252, 141, 108);
    glVertex2f(0.0, 0.15);
    glColor3ub(252, 141, 108);
    glVertex2f(0.4, 0.6);
    glColor3ub(252, 141, 108);
    glVertex2f(-0.4, 0.6);

    glColor3ub(94, 99, 232);
    glVertex2f(0.3, 0.8);
    glColor3ub(94, 99, 232);
    glVertex2f(0.4, 0.6);
    glColor3ub(94, 99, 232);
    glVertex2f(0.2, 0.6);

    glColor3ub(94, 99, 232);
    glVertex2f(-0.3, 0.8);
    glColor3ub(94, 99, 232);
    glVertex2f(-0.4, 0.6);
    glColor3ub(94, 99, 232);
    glVertex2f(-0.2, 0.6);
    glEnd();

    glTranslatef(0.2, 0.0,0);

}*/
