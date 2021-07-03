#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float x,y,r = 0.25;
void display(void)
{
   // for(float theta = 0; theta < 360; theta++)
   //for(float theta = 0; theta < 360; theta = theta + 0.1)
      /* for(float theta = 0; theta < 360; theta= theta + 0.01)
       {
        x = r * cos(theta);
        y = r * sin(theta);
        glBegin(GL_POINTS);
        glVertex2f( x, y);

        glEnd();
        }
        */
        glColor3f(0,1,0);
        glBegin(GL_QUADS);
        glVertex2f(-0.6,0.35);
        glVertex2f(0.6,0.35);
        glVertex2f(0.6,-0.35);
        glVertex2f(-0.6,-0.35);

        glEnd();

        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
        for(float theta = 0; theta < 360; theta = theta + 0.01)
        {
            x = r * cos(theta);
            y = r * sin(theta);
            glVertex2f(x,y);

        }
        glEnd();
        glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(500, 100);
    glutCreateWindow("Circle");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
