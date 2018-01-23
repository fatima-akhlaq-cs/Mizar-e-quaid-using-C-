#include <iostream>
using namespace std;
#include "glut.h"
static int all =0;
static int allD =0;
GLUquadric * Cy=gluNewQuadric();
void init(void)
{
	glClearColor(0.2,0.2,0.2,0.0);

}
GLfloat n=0;
void idle()
{
	n=n+0.2;
	if(n>360)
	{
		n=n-360;
		glutPostRedisplay();
	}
}
void Door()
{
   glColor3f(0.0,0,0.0);
   glPushMatrix();
   GLdouble eqn[4] = {0.0, 1.0, 0.0, 0.0};
   glTranslatef (0.0,-0.5,1);
   glScalef(2.0,5,0.04);
   glClipPlane (GL_CLIP_PLANE0, eqn);//First clip Upper half -- y>0
   glEnable (GL_CLIP_PLANE0);
 
   glutSolidSphere(1.0, 20, 10);//Sphere 1
   glDisable(GL_CLIP_PLANE0); 
   glPopMatrix();

   glPushMatrix();
   glTranslatef (0.0,1.0,1);
   glScalef(1,2,0.04);
   glutSolidCube(1.0);
   glPopMatrix();
}
void Door1()
{
   glColor3f(0.0,0,0.0);
   glPushMatrix();
   GLdouble eqn[4] = {0.0, 1.0, 0.0, 0.0};
   glTranslatef (0.0,1.0,1);
   glScalef(1.0,1.0,0.04);
   glClipPlane (GL_CLIP_PLANE0, eqn);//First clip Upper half -- y>0
   glEnable (GL_CLIP_PLANE0);
 
   glutSolidSphere(0.5, 30, 30);//Sphere 1
   glDisable(GL_CLIP_PLANE0); 
   glPopMatrix();

   glPushMatrix();
   glTranslatef (0.0,1.0,1);
   glScalef(0.3,0.3,0.04);
   glutSolidCube(1.5);
   glPopMatrix();
}
void gumbad()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0,1.0,0);
    glScalef(1,1.0,1); 
    glutSolidSphere(1,100,100);
    glPopMatrix();

    glPushMatrix();//cylinder
    glTranslatef(0,1,0);
    glScalef(1,0.07,1);     
    glColor3f(0.6,0.6,0.6);
    glRotatef(90,1,0,0);
    gluCylinder(Cy,1.0,1.0,10,40,40);
    glPopMatrix();

     glPushMatrix();
     glTranslatef(0,0.5,0);
     glRotatef(0,0,1,0);
     glScalef(0.2,0.2,1);
     Door1();
     glPopMatrix();

      glPushMatrix();
      glTranslatef(0,0.5,0);
      glRotatef(22,0,1,0);
      glScalef(0.2,0.2,1);
      Door1();
      glPopMatrix();

	glPushMatrix();
	glTranslatef(0,0.5,0);
	glRotatef(45,0,1,0);
	glScalef(0.2,0.2,1);
	Door1();
	glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(90,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(112,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(134,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(156,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(178,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 
	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(200,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(222,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(244,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(266,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(288,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(310,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0,0.5,0);
	 glRotatef(332,0,1,0);
	 glScalef(0.2,0.2,1);
	 Door1();
	 glPopMatrix();
}
void stairs()
{
    glPushMatrix();
    glColor3f(0.0,0.0,0);
    glScaled(0.8,0.04,0.8);
    glTranslatef(0.0,-35.0,0.0);
    glutSolidCube(3.0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5,0.5,0.5);
    glScaled(0.8,0.04,0.8);
    glTranslatef(0.0,-40.0,0.0);
    glutSolidCube(4.0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0);
    glScaled(0.8,0.04,0.8);
    glTranslatef(0.0,-45.0,0.0);
    glutSolidCube(5.0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5,0.5,0.5);
    glScaled(0.8,0.04,0.8);
    glTranslatef(0.0,-50.0,0.0);
    glutSolidCube(6.0);
    glPopMatrix();
}
void Piller()
{
     glPushMatrix();
	glTranslatef(.85,.75,.85);
	 glScalef(0.2,0.025,0.2);
	 glRotatef(90,1,0,0);     
	 glColor3f(0,0,0);
	 gluCylinder(Cy,0.6,0.6,10,40,40);
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(-0.85,.75,.85);
	 glScalef(0.2,0.025,0.2);
	 glRotatef(90,1,0,0);
     glColor3f(0,0,0);
	 gluCylinder(Cy,0.6,0.6,10,40,40);
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(-0.85,.75,-0.85);
	 glScalef(0.2,0.025,0.2);
	 glRotatef(90,1,0,0);
     glColor3f(0,0,0);
			
	 gluCylinder(Cy,0.6,0.6,10,40,40);
	 glPopMatrix();

	 glPushMatrix();
	 glTranslatef(0.85,.75,-0.85);
	 glScalef(0.2,0.025,0.2);
	 glRotatef(90,1,0,0);
     glColor3f(0,0,0);
	 gluCylinder(Cy,0.6,0.6,10,40,40);
	 glPopMatrix();
}
void Mosque()
{
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslatef(0,-1.8,0);
	glScalef(2,4.5,2);
	glutSolidCube(1.0);
	glPopMatrix();

	stairs();
	Piller();

	glPushMatrix();
	glTranslatef(0,-0.7,0);
	glScalef(0.1,0.2,1);
	Door();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,-0.7,-2);
	glScalef(0.1,0.2,1);
	Door();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,-0.7,0);
	glRotatef(90,0,1,0);
	glScalef(0.1,0.2,1);
	Door();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2,-0.7,0);
	glRotatef(90,0,1,0);
	glScalef(0.1,0.2,1);
	Door();
	glPopMatrix();
	gumbad();
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 	
	glEnable(GL_DEPTH_TEST);
	glRotatef(n,0,1,0);
	glPushMatrix();
	Mosque();
	glPopMatrix();
   glutSwapBuffers();
}
void reshape (int w, int h)
{
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity ();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (700, 500);
glutInitWindowPosition (0,0);
glutCreateWindow (argv[0]);
init ();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutIdleFunc(idle);
glutMainLoop();
return 0;
}

