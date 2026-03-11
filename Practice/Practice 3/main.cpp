#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void mydisplay() {
	glClearColor(1, 1, 1, 1); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glPointSize(12);

    glBegin(GL_LINES);

        glColor3f(0,0,0);
        glVertex2f(1,0);
        glVertex2f(-1,0);

        // Y-Axis
        glVertex2f(0,1);
        glVertex2f(0,-1);

        // Horizontal Line
        glVertex2f(-0.5,0.3);
        glVertex2f(0.5,0.3);

        // Vertical Line
        glVertex2f(0.7,0.6);
        glVertex2f(0.7,-0.6);

    glEnd();

    glBegin(GL_POINTS);

        glColor3f(0,0,0);
        // Center Point
        glVertex2f(0,0);

        // 5 different points at different positions
        glVertex2f(0.1,0.1);
        glVertex2f(-0.1,-0.1);
        glVertex2f(0.3,0.3);
        glVertex2f(-0.3,0.3);
        glVertex2f(0.3,-0.3);

    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Basic Primitives"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(mydisplay); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
