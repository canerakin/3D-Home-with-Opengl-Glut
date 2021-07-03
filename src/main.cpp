#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

float theta = 0.0f;
float speed = 0.0f;
void display();
void specialKeys();

double rotate_y = 0;
double rotate_x = 0;

double x_axis = 0;
double y_axis = 0;
double z_axis = 0;

double angle = 0;
int i,p;

float sudut = 0;
void lighting();

void house() {

    glBegin(GL_QUADS);
    glColor3f (0.627, 0.322, 0.176);
    glVertex3f(0.20f, 0.05f, 0.0f);
    glVertex3f(0.20f, 0.0f, 0.0f);
    glVertex3f(0.30f, 0.0f, 0.0f);
    glVertex3f(0.30f, 0.05f, 0.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f (0.627, 0.322, 0.176);
    glVertex3f(0.20f, 0.05f, 0.05f);
    glVertex3f(0.20f, 0.0f, 0.05f);
    glVertex3f(0.30f, 0.0f, 0.05f);
    glVertex3f(0.30f, 0.05f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (0.5f, 0.5f, 0.5f);
    glVertex3f(0.20f, 0.05f, 0.0f);
    glVertex3f(0.20f, 0.0f, 0.0f);
    glVertex3f(0.20f, 0.0f, 0.05f);
    glVertex3f(0.20f, 0.05f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (0.5f, 0.5f, 0.5f);
    glVertex3f(0.30f, 0.05f, 0.05f);
    glVertex3f(0.30f, 0.0f, 0.05f);
    glVertex3f(0.30f, 0.0f, 0.0f);
    glVertex3f(0.30f, 0.05f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (0.5f, 0.5f, 0.0f);
    glVertex3f(0.193f, 0.045f, -0.005f);
    glVertex3f(0.193f, 0.075f, 0.025f);
    glVertex3f(0.307f, 0.075f, 0.025f);
    glVertex3f(0.307f, 0.045f, -0.005f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (0.5f, 0.5f, 0.5f);
    glVertex3f(0.193f, 0.075f, 0.025f);
    glVertex3f(0.193f, 0.045f, 0.055f);
    glVertex3f(0.307f, 0.045f, 0.055f);
    glVertex3f(0.307f, 0.075f, 0.025f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (.5f, 0.5f, 1.5f);
    glVertex3f(0.20f, 0.05f, 0.0f);
    glVertex3f(0.20f, 0.075f, 0.025f);
    glVertex3f(0.20f, 0.05f, 0.05f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (.5f, 0.5f, 1.5f);
    glVertex3f(0.30f, 0.05f, 0.0f);
    glVertex3f(0.30f, 0.075f, 0.025f);
    glVertex3f(0.30f, 0.05f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.f, 1.0f, 1.5f);
    glVertex3f(0.199f, 0.035f, 0.015f);
    glVertex3f(0.199f, 0.0f, 0.015f);
    glVertex3f(0.199f, 0.0f, 0.03f);
    glVertex3f(0.199f, 0.035f, 0.03f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.f, 1.0f, 1.5f);
    glVertex3f(0.215f, 0.035f, -0.0001f);
    glVertex3f(0.215f, 0.013f, -0.0001f);
    glVertex3f(0.233f, 0.013f, -0.0001f);
    glVertex3f(0.233f, 0.035f, -0.0001f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.f, 1.0f, 1.5f);
    glVertex3f(0.265f, 0.035f, -0.0001f);
    glVertex3f(0.265f, 0.013f, -0.0001f);
    glVertex3f(0.283f, 0.013f, -0.0001f);
    glVertex3f(0.283f, 0.035f, -0.0001f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.f, 1.0f, 1.5f);
    glVertex3f(0.215f, 0.035f, 0.0501f);
    glVertex3f(0.215f, 0.013f, 0.0501f);
    glVertex3f(0.233f, 0.013f, 0.0501f);
    glVertex3f(0.233f, 0.035f, 0.0501f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.f, 1.0f, 1.5f);
    glVertex3f(0.265f, 0.035f, 0.0501f);
    glVertex3f(0.265f, 0.013f, 0.0501f);
    glVertex3f(0.283f, 0.013f, 0.0501f);
    glVertex3f(0.283f, 0.035f, 0.0501f);
    glEnd();

}

void field() {
    // Evin alanı burada belirlenir.

    // glClearColor(1.000, 0.271, 0.000, 0.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT) ;

    //GLuint texture;
    //texture = LoadTextureRAM(".bmp", TRUE) ;

    glLoadIdentity();

    //gluLookAt (0.0f, -0.001f, 0.001f, 0.0f, 0.0f, 0.0f);

    glRotatef( rotate_x, 1.0, 0.0, 0.0);
    glRotatef( rotate_y, 0.0, 1.0, 0.0);


    glPushMatrix();
    glScaled(2.5f ,2.5f ,2.5f);
    house();
    glPopMatrix();


    glFlush();
    glutSwapBuffers();

    theta = theta + 3.f + speed ;
    sudut = sudut + .5f;

    glutPostRedisplay();
}

double distance = 0.01;
// klavye içindir ve rotate edilir
void speedkey(unsigned char key, int x , int y) {
    switch(key) 
    {
        case 'q' :
        {
            z_axis += distance ;
            speed += 1.5;
            printf("speed : %lf \n",speed );
            break;
        }
        case 'e' :
        {
            z_axis -= distance ;
            speed -= 1.5;
            break;
        }
    }
    if (key == 97) {
        x_axis -= distance; 
    }
    else if (key == 100) {
        x_axis += distance; }
    else if (key == 119) {
        y_axis += distance;   }
    else if (key == 115)    
        y_axis -= distance; 
      glutPostRedisplay();
    if (key == 27)
    {
        glutLeaveGameMode() ;
        exit(0) ;  //programı kapatma
    }     
}

void specialKeys( int key, int x, int y) {

    if (key == GLUT_KEY_RIGHT){
        rotate_y += 5;
    }
    else if (key == GLUT_KEY_LEFT){
        rotate_y -= 5;
    }
    else if (key == GLUT_KEY_UP){
        rotate_x += 5;
    }
    else if (key == GLUT_KEY_DOWN){
        rotate_x -= 5;
    }
    glutPostRedisplay();

}

void pindah( unsigned char key, int x, int y) {
    if (key == 97) {
        x_axis -= distance;     }
    else if (key == 100) {
        x_axis += distance; }
    else if (key == 119) {
        y_axis += distance;   }
    else if (key == 115)    
        y_axis -= distance; 
      glutPostRedisplay();
    if (key == 27)
    {
        glutLeaveGameMode() ;
        exit(0) ;  //programı kapatma
    }     
}

void init(void)
{
glEnable (GL_DEPTH_TEST);
glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}



int main(int argc, char** argv)
{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
    //glutInitWindowPosition(80,0);
    //glutInitWindowSize(1200,800);
    //glutCreateWindow("UTS")

    glEnable(GL_DEPTH_TEST);
    glutEnterGameMode();
    glutDisplayFunc(field);

    //lighting();
    //init();
    glutSpecialFunc(specialKeys);
    glutKeyboardFunc(speedkey);
    //glutKeyboardFunc(pindah);
    glutMainLoop();

    return 0;

}