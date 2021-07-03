#include <windows.h>
#include <GL/glut.h>
void display (void)
{

 /*glBegin(GL_POINTS);
 glVertex2f(0, 0.5);
 glEnd();

 glColor3f(0,1,0);
 glBegin(GL_TRIANGLES);
 glVertex2f(0, 1);
 glVertex2f(1, 0);
 glVertex2f(-1, 0);
 glEnd();

 glColor3f(0,0.5,0.5);
 glBegin(GL_QUADS);
 glVertex2f(-0.5, 0);
 glVertex2f(0.5, 0);
 glVertex2f(0.5, -1);
 glVertex2f(-0.5, -1);
 glEnd();

 glColor3f(1,0,0);
 glBegin(GL_LINES);
 glVertex2f(-0.5, -0.5);
 glVertex2f(0.5, 0.5);
 glVertex2f(0.5, -0.5);
 glVertex2f(-0.5, 0.5);
 glEnd();

 glColor3f(0.7,0.3,0);
 glBegin(GL_POLYGON);
 glVertex2f(0, 0.7);
 glVertex2f(0.7, 0.3);
 glVertex2f(0.7, -0.3);
 glVertex2f(0, -0.7);
 glVertex2f(-0.7, -0.3);
 glVertex2f(-0.7, 0.3);
 glEnd(); */

   glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.60, 0.77);
    glVertex2f(-0.42, 0.77);
    glVertex2f(-0.58, 0.68);
    glEnd();

    //second triangle top triangle
    glColor3f(0.5, 0.5, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.64, 1);
    glVertex2f(-0.68, 0.77);
    glVertex2f(-0.60, 0.77);
    glEnd();
    //3rd Triangle
    glColor3f(0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.68, 0.77);
    glVertex2f(-0.7, 0.68);
    glVertex2f(-0.86, 0.77);
    glEnd();
    //4th Triangle
    glColor3f(0.5, 0.5, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.64, 0.63);
    glVertex2f(-0.7, 0.68);
    glVertex2f(-0.82, 0.43);
    glEnd();

    //5th Triangle
    glColor3f(0, 1, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.64, 0.63);
    glVertex2f(-0.58, 0.68);
    glVertex2f(-0.51, 0.43);

    glEnd();

    //polygon
   glColor3f(1, 0.5, 0.5);
   glBegin(GL_POLYGON);
   glVertex2f(-0.60, 0.77);
   glVertex2f(-0.68, 0.77);
   glVertex2f(-0.7, 0.68);
   glVertex2f(-0.64, 0.63);
   glVertex2f(-0.58, 0.68);

    glEnd();
 glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(100,500);


    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);


    glutMainLoop();

    return 0;
}
