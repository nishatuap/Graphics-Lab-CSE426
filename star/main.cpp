#include <windows.h>
#include <GL/glut.h>
void display (void)
{

  glBegin(GL_TRIANGLES);
 glColor3f(1,0,0);
 glVertex2f(0.0, 0.6);
 glVertex2f(-0.3, 0.0);
 glVertex2f(0.3,0.0);

 glEnd();
 glBegin(GL_TRIANGLES);
 glColor3f(1,0,0);
 glVertex2f(0.0, -0.2);
 glVertex2f(-0.3, 0.4);
 glVertex2f(0.3,0.4);

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
