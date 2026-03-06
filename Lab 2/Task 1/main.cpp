#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

using namespace std;

void myDisplay()
{
    glClearColor(1,1,1,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 640.0);

    glClear(GL_COLOR_BUFFER_BIT);

    int i,j;
    int size=80;

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if((i+j)%2==0){
                glColor3f(1,1,1); // White
            }else{
                glColor3f(0,0,0); // Black
            }

            glBegin(GL_POLYGON);
                glVertex2i(i*size,j*size);
                glVertex2i((i+1)*size,j*size);
                glVertex2i((i+1)*size,(j+1)*size);
                glVertex2i(i*size,(j+1)*size);
            glEnd();
        }
    }

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 640);
    glutCreateWindow("Computer Graphics Lab Task 2-8x8 Chess Board");

    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}


