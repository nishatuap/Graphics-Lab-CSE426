#include <windows.h>
#include <GL\glut.h>
#include <math.h>

float xa = 0.2, ya = 0.2, xb = -0.2, yb = 0.2, xc = -0.2, yc = -0.2, xd = 0.2, yd = -0.2;
float t = 10,angle = 0,x,y,r = 0.4;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa,ya);
    glColor3f(0,1,0);
    glVertex2f(xb,yb);
    glColor3f(0,0,1);
    glVertex2f(xc, yc);
    glColor3f(1,0.5,0.5);
    glVertex2f(xd, yd);
    glEnd();
    glFlush();

}

void display1(bool flag)
{
    if(flag==false){

        angle += 1;

        if(angle == 360) angle = 0;
    }
    else {

        angle -= 1;

        if(angle <= 0) angle = 360;
    }


    x = r * cos(angle);
    y = r * sin(angle);

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa + x,ya + y);
    glColor3f(0,1,0);
    glVertex2f(xb + x,yb + y);
    glColor3f(0,0,1);
    glVertex2f(xc + x, yc + y);
    glColor3f(1,0.5,0.5);
    glVertex2f(xd + x, yd + y);
    glEnd();
    glFlush();

}

void keyboard(unsigned char key,int x,int y){

    switch(key){

        case 'u':
            glTranslatef(0,0.01,0);
            glutPostRedisplay();
            break;

        case 'd':
            glTranslatef(0,-0.01,0);
            glutPostRedisplay();
            break;

        case 'l':
            glTranslatef(-0.01,0,0);
            glutPostRedisplay();
            break;

        case 'r':
            glTranslatef(0.01,0,0);
            glutPostRedisplay();
            break;

        case 'c':
            glRotatef(-t,0,0,1);
            glutPostRedisplay();
            break;

        case 'a':
            glRotatef(t,0,0,1);
            glutPostRedisplay();
            break;

        case 'b':
            glScalef(2,2,1);
            glutPostRedisplay();
            break;

        case 's':
            glScalef(0.5,0.5,1);
            glutPostRedisplay();
            break;

        case 'i':
            display1(true);
            break;

        case 'j':
            display1(false);
            break;
    }
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(500, 100);
    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
