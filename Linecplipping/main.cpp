#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
//.2 .2 .6 .7    quads
// .4 .8 .7 .2     line
float x1, x2, y1, y2, xmax, xmin, ymax, ymin, x3, y3, x4, y4;
float nx1=-999,nx2=-999,ny1=-999,ny2=-999;
int flag1, flag2;
void display(void)
{
    //glColor3f(0,128,0);
    glColor3f(255,255,255);
    glBegin(GL_QUADS);

    glVertex2f(xmin,ymin);
    glVertex2f(xmax,ymin);
    glVertex2f(xmax,ymax);
    glVertex2f(xmin,ymax);

    glEnd();
    glColor3f(255,255,0);
     glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();

    glColor3f(255,0,0);
     glBegin(GL_LINES);
    glVertex2f(nx1,ny1);
    glVertex2f(nx2,ny2);
    glEnd();


    // eta lagbei otherwise plot hobe na
    glFlush();
}




int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
printf("Put value xmin,ymin,xmax,ymax : ");
scanf("%f %f %f %f",&xmin,&ymin,&xmax,&ymax);
printf("\n put value for x1,y1,x2,y2 : ");
scanf("%f %f %f %f",&x1, &y1, &x2, &y2);
//printf("%f %f %f %f %f\n",xmax,xmin,ymax,ymin,x1);
//*****************************************************sir er code*************
int flag1, flag2;
//inside
if(x1>=xmin && x1<=xmax && y1>=ymin && y1<=ymax)
{
flag1 = 0;
if(nx1==-999)nx1=x1;
else if(nx1!=-999 && nx2==-999)nx2=x1;
if(ny1==-999)ny1=y1;
else if(ny1!=-999 && ny2==-999)ny2=y1;

printf("\n%f %f", x1, y1);
}
//top
else if(x1>=xmin && x1<=xmax && y1>=ymax)
{
flag1 = 1;
x3=x1+(x2-x1)*((ymax-y1)/(y2-y1));
y3=ymax;
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;

printf("\n%f %f", x3, y3);
}
}
//left
else if(x1>=xmin && x1<=xmax && y1<=ymin)
{
flag1 = 2;
x3 = xmin;
y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(ny1!=-999 && ny2==-999)ny2=y3;
if(ny1==-999)ny1=y3;
else if(nx1!=-999 && nx2==-999)nx2=x3;

printf("\n%f %f", x3, y3);
}
}
//right
else if(y1>=ymin && y1<=ymax && x1>=xmin)
{
flag1 = 3;
x3 = xmax;
y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
}
//down
else if(y1>=ymin && y1<=ymax && x1>=xmax)
{
flag1 = 4;
x3=x1+(x2-x1)*((ymin-y1)/(y2-y1));
y3=ymin;
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
}
//top left
else if(x1<=xmin && y1>=ymax)
{
flag1 = 5;
x3 = xmin;
y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
y4=ymax;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}

}
//top right
else if(x1>=xmax && y1>=ymax)
{
flag1 = 6;
x3 = xmax;
y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
y4=ymax;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}
}
//down left
else if(x1<=xmin && y1<=ymin)
{
flag1 = 7;
x3 = xmin;
y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
y4=ymin;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}
}
//down right
else if(x1>=xmax && y1<=ymin)
{
flag1 = 8;
x3 = xmax;
y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
y4=ymin;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}
}


//inside
if(x2>=xmin && x2<=xmax && y2>=ymin && y2<=ymax)
{
flag2 = 0;
if(nx1==-999)nx1=x2;
else if(nx1!=-999 && nx2==-999)nx2=x2;
if(ny1==-999)ny1=y2;

else if(ny1!=-999 && ny2==-999)ny2=y2;
printf("\n%f %f", x2, y2);
}
//top
else if(x2>=xmin && x2<=xmax && y2>=ymax)
{
flag2 = 1;
x3=x1+(x2-x1)*((ymax-y1)/(y2-y1));
y3=ymax;
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
}
//left
else if(x2>=xmin && x2<=xmax && y2<=ymin)
{
flag2 = 2;
x3 = xmin;
y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
}
//right
else if(y2>=ymin && y2<=ymax && x2>=xmin)
{
flag2 = 3;
x3 = xmax;
y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
}
//down
else if(y2>=ymin && y2<=ymax && x2>=xmax)
{
flag2 = 4;
x3=x1+(x2-x1)*((ymin-y1)/(y2-y1));
y3=ymin;
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
}
//top left
else if(x2<=xmin && y2>=ymax)
{
flag2 = 5;
x3 = xmin;
y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
y4=ymax;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}

}
//top right
else if(x2>=xmax && y2>=ymax)
{
flag2 = 6;
x3 = xmax;
y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
y4=ymax;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}
}
//down left
else if(x2<=xmin && y2<=ymin)
{
flag2 = 7;
x3 = xmin;
y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
y4=ymin;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}
}
//down right
else if(x2>=xmax && y2<=ymin)
{
flag2 = 8;
x3 = xmax;
y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
{
if(nx1==-999)nx1=x3;
else if(nx1!=-999 && nx2==-999)nx2=x3;
if(ny1==-999)ny1=y3;

else if(ny1!=-999 && ny2==-999)ny2=y3;
printf("\n%f %f", x3, y3);
}
x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
y4=ymin;
if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
{
if(nx1==-999)nx1=x4;
else if(nx1!=-999 && nx2==-999)nx2=x4;
if(ny1==-999)ny1=y4;

else if(ny1!=-999 && ny2==-999)ny2=y4;
printf("\n%f %f", x4, y4);
}
}
//*******************************************************main code**************
glutInitWindowSize(1400, 500);
glutInitWindowPosition(50, 100);
glutCreateWindow("Computer Graphics Lab");

//glutIdleFunc(spin);
//glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
