#include <windows.h>
#include <GL/glut.h>
#include <math.h>
float x, y, r=0.5, z=0.4;

void display (void)
{

  /*for (float theta=0; theta<360; theta=theta+0.01)
  {
      x = r * cos(theta);
      y = r* sin(theta);
      glBegin(GL_POINTS);
      glVertex2f(x,y);
      glEnd();
  }*/
glColor3f (1,0,0);
  glBegin(GL_POLYGON);

  for (float theta=0; theta<360; theta=theta+0.01)
  {
      x = r * cos(theta);
      y = r* sin(theta);
      glVertex2f(x,y);

  }
   glEnd();

   glColor3f (0,0,0);
  glBegin(GL_POLYGON);

  for (float theta=0; theta<360; theta=theta+0.01)
  {
      x = z * cos(theta);
      y = z* sin(theta);
      glVertex2f(x,y);

  }
   glEnd();

 glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(500,100);


    glutCreateWindow("Double Circle");
    glutDisplayFunc(display);


    glutMainLoop();

    return 0;
}
