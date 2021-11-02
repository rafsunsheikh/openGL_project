#include<cstdio>
#include<math.h>
# define PI 3.14159265358979323846

#include <GL/gl.h>
#include <GL/glut.h>
GLfloat q=0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.01f;
int r=0;
float skyCol1 = 38, skyCol2 = 154, skyCol3 = 214;
float parlCol1 = 132, parlCol2 = 115, parlCol3 = 90;
float parlDownCol1 = 132, parlDownCol2 = 115, parlDownCol3 = 90;
float grassCol1 = 12, grassCol2 = 252, grassCol3 = 0;
float stairCol1 = 150, stairCol2 = 40, stairCol3 = 27;
float cloudCol1 = 255, cloudCol2 = 255, cloudCol3 = 255;
float stairWhCol1 = 255, stairWhCol2 = 255, stairWhCol3 = 255;
float flagGreenCol1 = 0, flagGreenCol2 = 153, flagGreenCol3 = 51;
float flagRedCol1 = 255, flagRedCol2 = 0, flagRedCol3 = 0;
float moonCol1 = 255, moonCol2 = 255, moonCol3 = 255;
float moonCutCol1 = 0, moonCutCol2 = 0, moonCutCol3 = 0;
bool moonShow = false;
bool birdShow = true;
bool starShow = false;



void circle(float radius, float x, float y)
{
    int i = 0;
    float angle = 0.0;

    glBegin(GL_POLYGON);

    glVertex2f(x,y);
    for(i = 0; i < 120 ; i++){
        angle = 2 * PI * i /100;
        glVertex2f(x + cos(angle) * radius, y + sin(angle) * radius);
    }
    glEnd();
}

void moon()
{
    if (moonShow){
        glColor3f(moonCol1, moonCol2, moonCol3);
        circle(0.1, -0.7, 0.7);
        glColor3f(moonCutCol1, moonCutCol2, moonCutCol3);
        circle(0.1, -0.65, 0.7);
    }

}

void update(int value) {

    if(position > 1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void bird()
{
    if(birdShow){
        glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.2f,0.8f);
      glVertex2f(0.18f,0.77f);

      glColor3ub(255,255,255);
      glVertex2f(0.18f,0.77f);
      glVertex2f(0.15f,0.79f);

      glColor3ub(255,255,255);
      glVertex2f(0.13f,0.8f);
      glVertex2f(0.11f,0.77f);

      glColor3ub(255,255,255);
      glVertex2f(0.11f,0.77f);
      glVertex2f(0.08f,0.79f);

      glEnd();

    }

}
void sky1()
{
    // glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void sky2()
{
    // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(cloudCol1, cloudCol2, cloudCol3);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}
void fullsky()
{
    glLoadIdentity();
    glBegin(GL_POLYGON);
	glColor3ub(skyCol1, skyCol3, skyCol3);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(-1.0f, -0.5f);

	glEnd();
}

void stars()
{
    if(starShow){
        glColor3ub(255, 255, 255);
        glBegin(GL_POINTS);
        glVertex2f(-0.8f, 0.8f);
        glVertex2f(-0.5f, 0.4f);
        glVertex2f(-0.9f, 0.9f);
        glVertex2f(-0.9f, 0.5f);
        glVertex2f(-0.8f, 0.76f);
        glVertex2f(0.8f, 0.8f);
        glVertex2f(0.7f, 0.9f);
        glVertex2f(0.9f, 0.5f);
        glVertex2f(0.6f, 0.6f);
        glVertex2f(0.7f, 0.78f);
        glVertex2f(0.94f, 0.28f);
        glVertex2f(0.23f, 0.75f);
        glVertex2f(0.1f, 0.85f);
        glVertex2f(0.36f, 0.63f);
        glVertex2f(0.59f, 0.52f);

        glEnd();
    }

}

void grass()
{
    glBegin(GL_POLYGON);
	glColor3ub(grassCol1, grassCol2, grassCol3);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);

	glEnd();
}

void stairs()
{
    glBegin(GL_POLYGON);
	glColor3ub(stairCol1, stairCol2, stairCol3);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);
	glVertex2f(1.0f, -.5f);
	glVertex2f(-1.0f, -.5f);

	glEnd();


	 glBegin(GL_LINES);
	 glLineWidth(8);
	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.533f);
	glVertex2f(1.0f, -.533f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.566f);
	glVertex2f(1.0f, -.566f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(1.0f, -.6f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.633f);
	glVertex2f(1.0f, -.633f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.666f);
	glVertex2f(1.0f, -.666f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(1.0f, -.5f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(stairWhCol1, stairWhCol2, stairWhCol3);
	glVertex2f(-.50f, -0.5f);
	glVertex2f(-.53f, -.5f);
	glVertex2f(-.63f, -.7f);
	glVertex2f(-.60f, -.7f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(stairWhCol1, stairWhCol2, stairWhCol3);
	glVertex2f(.50f, -0.5f);
	glVertex2f(.53f, -.5f);
	glVertex2f(.63f, -.7f);
	glVertex2f(.60f, -.7f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(stairWhCol1, stairWhCol2, stairWhCol3);
	glVertex2f(.01f, -0.5f);
	glVertex2f(-.01f, -.5f);
	glVertex2f(-.035f, -.7f);
	glVertex2f(.035f, -.7f);

	glEnd();


}

void mainbuilding()
{

    glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.4f, 0.3f);
    glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.4f, 0.3f);
    glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.4f, 0.48f);
    glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.2f, 0.51f);
    glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.2f, 0.51f);
    glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.4f, 0.48f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.4f, 0.3f);
	glVertex2f(-0.4f, 0.48f);

	glColor3ub(0,0,0);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.4f, 0.48f);

	glColor3ub(0,0,0);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.2f, 0.51f);

	glColor3ub(0,0,0);
	glVertex2f(0.4f, 0.48f);
	glVertex2f(0.2f, 0.51f);

	glColor3ub(0,0,0);
	glVertex2f(-0.2f, 0.51f);
	glVertex2f(0.2f, 0.51f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.25f, 0.4f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.25f, 0.4f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.25f, 0.46f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.25f, 0.46f);
	glEnd();




    glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.1f, -0.5f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.1f, -0.5f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.1, .4f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.1f, .4f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.08f, -0.5f);
	glVertex2f(0.08f, -0.5f);
	glVertex2f(0.08, -0.35f);
	glVertex2f(-0.08f, -0.35f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.1f, -0.5f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.3f, -0.5f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.3, .43f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.1f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.11f, -0.5f);
	glVertex2f(-0.12f, -0.5f);
	glVertex2f(-0.12, .4f);
	glVertex2f(-0.11f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.1f, -0.5f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.3f, -0.5f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.3, .43f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.1f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.11f, -0.5f);
	glVertex2f(0.12f, -0.5f);
	glVertex2f(0.12, .4f);
	glVertex2f(0.11f, .4f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.3f, -0.5f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.3f, 0.33f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.45f, 0.36f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.60f, 0.33f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.60f, -0.5f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.45f, -0.5f);
	glVertex2f(-0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(-0.3f, 0.43f);

    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.3f, -0.5f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.3f, 0.33f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.45f, 0.36f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.60f, 0.33f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.60f, -0.5f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.3f, 0.43f);

    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.6f, -0.5f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(-0.8f, -0.5f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.8f, 0.29f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(-0.60f, 0.33f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.65f, -0.5f);
	glVertex2f(-0.66f, -0.5f);
	glVertex2f(-0.66f, 0.31f);
	glVertex2f(-0.65f, 0.316f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.8f, -0.5f);
	glVertex2f(-0.8f, 0.29f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, 0.29f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.6f, -0.5f);
	glColor3ub(parlDownCol1, parlDownCol2, parlDownCol3);
	glVertex2f(0.8f, -0.5f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.8f, 0.29f);
	glColor3ub(parlCol1, parlCol2, parlCol3);
	glVertex2f(0.60f, 0.33f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.65f, -0.5f);
	glVertex2f(0.66f, -0.5f);
	glVertex2f(0.66f, 0.31f);
	glVertex2f(0.65f, 0.316f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2f(0.48f, -0.3f);
	glVertex2f(0.63f, -0.31f);
	glVertex2f(0.57f, 0.28f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2f(-0.48f, -0.3f);
	glVertex2f(-0.63f, -0.31f);
	glVertex2f(-0.57f, 0.28f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.48f, -0.5f);
	glVertex2f(0.63f, -0.5f);
	glVertex2f(0.63f, -0.35f);
	glVertex2f(0.48f, -0.34f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.48f, -0.5f);
	glVertex2f(-0.63f, -0.5f);
	glVertex2f(-0.63f, -0.35f);
	glVertex2f(-0.48f, -0.34f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(0.05f, -0.3f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(-0.05f, -0.25f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.11f, 0.4f);
	glVertex2f(0.11f, 0.4f);

	glColor3ub(0,0,0);
	glVertex2f(-0.3f, 0.43f);
	glVertex2f(-0.1f, 0.4f);

	glColor3ub(0,0,0);
	glVertex2f(0.3f, 0.43f);
	glVertex2f(0.1f, 0.4f);

	glColor3ub(0,0,0);
	glVertex2f(-0.3f, 0.33f);
	glVertex2f(-0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(0.3f, 0.33f);
	glVertex2f(0.45f, 0.36f);

	glColor3ub(0,0,0);
	glVertex2f(0.45f, 0.36f);
	glVertex2f(0.80f, 0.29f);

	glColor3ub(0,0,0);
	glVertex2f(-0.45f, 0.36f);
	glVertex2f(-0.80f, 0.29f);
	glEnd();

}

void flags()
{
glBegin(GL_QUADS);
	glColor3ub(stairWhCol1, stairWhCol2, stairWhCol3);
	glVertex2f(-0.01f, -0.5f);
	glVertex2f(0.005f, -0.5f);
    glVertex2f(0.005f, 0.07f);
    glVertex2f(-0.01f, 0.07f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(flagGreenCol1, flagGreenCol2, flagGreenCol3);
	glVertex2f(0.005f, 0.07f);
	glVertex2f(0.27f, 0.07f);
    glVertex2f(0.27f, -0.135f);
    glVertex2f(0.005f, -0.135f);
    glEnd();
      int i;

	GLfloat x=.13f; GLfloat y=-0.038f; GLfloat radius =.053f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(flagRedCol1, flagRedCol2, flagRedCol3);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'd': glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
                    skyCol1 = 38; skyCol2 = 154; skyCol3 = 214;
                    grassCol1 = 12; grassCol2 = 252; grassCol3 = 0;
                    stairCol1 = 150; stairCol2 = 40; stairCol3 = 27;
                    stairWhCol1 = 255; stairWhCol2 = 255; stairWhCol3 = 255;
                    flagGreenCol1 = 0; flagGreenCol2 = 153; flagGreenCol3 = 51;
                    flagRedCol1 = 255; flagRedCol2 = 0; flagRedCol3 = 0;
                    cloudCol1 = 255; cloudCol2 = 255; cloudCol3 = 255;
                    parlCol1 = 132; parlCol2 = 115; parlCol3 = 90;
                    parlDownCol1 = 132; parlDownCol2 = 115; parlDownCol3 = 90;
                    moonShow = false;
                    birdShow = true;
                    starShow = false;
                    glutPostRedisplay();
                    break;
        case 'n':glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
                    skyCol1 = 0; skyCol2 = 0; skyCol3 = 0;
                    grassCol1 = 25; grassCol2 = 52; grassCol3 = 0;
                    stairCol1 = 102; stairCol2 = 0; stairCol3 = 0;
                    stairWhCol1 = 150; stairWhCol2 = 150; stairWhCol3 = 150;
                    flagGreenCol1 = 25, flagGreenCol2 = 51, flagGreenCol3 = 0;
                    flagRedCol1 = 102, flagRedCol2 = 0, flagRedCol3 = 0;
                    cloudCol1 = 150; cloudCol2 = 150; cloudCol3 = 150;
                    parlCol1 = 64; parlCol2 = 64; parlCol3 = 64;
                    parlDownCol1 = 255; parlDownCol2 = 153; parlDownCol3 = 51;
                    moonShow = true;
                    birdShow = false;
                    starShow = true;
                    glutPostRedisplay();
                    break;
    }
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    fullsky();
    grass();
    stairs();
    mainbuilding();
    flags();
    moon();
    stars();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    sky1();
    sky2();
     bird();
    glPopMatrix();

    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(840, 640);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Parliament Bhaban");
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(display);
    glutTimerFunc(10, update, 0);
    glutMainLoop();
    return 0;
}
