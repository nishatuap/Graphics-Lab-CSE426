#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

float xa=0.2,ya=0.2,xb=-0.2,yb=0.2,xc=-0.2,yc=-0.2,xd=0.2,yd=-0.2;
float xr =0,yr =0;
int i=0;
float b=1;
float tempx=0,tempy=0;
void display(void)
{
    b-=0.1;

    i++;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa+xr,ya+yr);
    glColor3f(0,1,0);
    glVertex2f(xb+xr,yb+yr);

    glColor3f(0,0,1);
    glVertex2f(xc+xr,yc+yr);

    glColor3f(0,1,1);
    glVertex2f(xd+xr,yd+yr);


    glEnd();
    glFlush();
    //cout<<""<<endl;

}
void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
        case 'w':
            yr=yr+0.01;
            glutPostRedisplay();
            break;
        case 's':
            yr=yr-0.01;
            glutPostRedisplay();
            break;
        case 'a':
            xr=xr-0.01;
            glutPostRedisplay();
            break;
        case 'd':
            xr=xr+0.01;
            glutPostRedisplay();
            break;
        case 'm':
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glRotatef(45*i,0,0,1);
            glutPostRedisplay();
            break;
        case 'n':
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glRotatef(-45*i,0,0,1);
            glutPostRedisplay();
            break;
         case 'x':
        tempx = xa;
        tempy = ya;
        xa=xa*cos(45)-ya*sin(45);
        ya=tempx*sin(45)+tempy*cos(45);
        tempx = xb;
        tempy = yb;
        xb=xb*cos(45)-yb*sin(45);
        yb=tempx*sin(45)+tempy*cos(45);
        tempx = xc;
        tempy = yc;
        xc=xc*cos(45)-yc*sin(45);
        yc=tempx*sin(45)+tempy*cos(45);
        tempx = xd;
        tempy = yd;
        xd=xd*cos(45)-yd*sin(45);
        yd=tempx*sin(45)+tempy*cos(45);
        glutPostRedisplay();
        break;
    case 'l':
         glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glScalef(1*i,1*i,1*i);
            glutPostRedisplay();
            break;
    case 'o':
        glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glScalef(1*b,1*b,1*b);
            glutPostRedisplay();
            break;

    }
}


int main(int argc,char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B2");
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
