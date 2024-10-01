/////////////////////Village Evening////////////////
#include <iostream>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <vector>
#include <utility>
#include <math.h>
#include <string>
#include<windows.h>
#include<mmsystem.h>
#include<cstdlib>
using namespace std;

float Tx = 0;
float Ty = 0;
float m = 1;
float maxX = 1920.0f;
float maxY = 1080.0f;
float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = 0.0;
float planePositionX =-2.5;
float cloudPositionX = 0.0;
float riverLinePositionX = 0.0;
float bladeRotationAngle = 0.0;
float boatPositionX = -0.8; // Initial position of the boat
float BirdsPositionX = -0.8;


void circle(float radius, float xc, float yc, float r, float g, float b)

{

    glBegin(GL_POLYGON);

    for(int i=0; i<200; i++)

    {

        glColor3f(r,g,b);

        float pi=3.1416;

        float A=(i*2*pi)/200;

        float r=radius;

        float x = r * cos(A);

        float y = r * sin(A);

        glVertex2f(x+xc,y+yc);

    }

    glEnd();

}

void initGL()

{

    // Set "clearing" or background color

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

}

void sky()
{
    ////////////////sky/////////////////////

    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.80f, 0.32f); // fade

    glVertex2f(-1.0f, 1.0f);

    glVertex2f(1.0, 1.0f);

    glColor3f(1.0f,1.90f,0.57f);

    glVertex2f(1.0f, 0.6f);

    glVertex2f(-1.0f, 0.6f);

    glEnd();
}

void sun()
{
    //////////////////sun//////////////////////

    circle(0.06,0.63,0.68,0.97,0.27,0.01);
}
//Near Tree

void Tree1()

{

    glBegin(GL_POLYGON); //tree

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.80f, -0.73f);

    glVertex2f(-0.77f, -0.73f);

    glVertex2f(-0.79f, -0.98f);

    glVertex2f(-0.87f, -0.98f);

    glEnd();

    glBegin(GL_POLYGON); //tree

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.84f, -0.73f);

    glVertex2f(-0.86f, -0.73f);

    glVertex2f(-0.81f, -0.98f);

    glVertex2f(-0.76f, -0.98f);

    glEnd();

    //Leaf

    circle(0.08,-0.75,-0.7,0.40,0.52,0.28);

    circle(0.1,-0.8,-0.47,0.40,0.52,0.28);

    circle(0.08,-0.75,-0.72,0.36,0.48,0.24);

    circle(0.15,-0.7,-0.57,0.34,0.46,0.22);

    circle(0.1,-0.73,-0.62,0.36,0.48,0.24);

    circle(0.15,-0.89,-0.62,0.34,0.46,0.22);


}

//Far Tree

void Tree2()

{

//Left side

    glBegin(GL_POLYGON); //timber

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.88f, 0.33f);

    glVertex2f(-0.84f, 0.33f);

    glVertex2f(-0.85f, 0.46f);

    glVertex2f(-0.87f, 0.46f);

    glEnd();

//Leaf

    circle(0.04,-0.86,0.53,0.40,0.52,0.28);

    circle(0.04,-0.85,0.45,0.40,0.52,0.28);

    circle(0.06,-0.82,0.49,0.36,0.48,0.24);

    circle(0.04,-0.85,0.475,0.34,0.46,0.22);

    circle(0.06,-0.90,0.48,0.36,0.48,0.24);

//Right side

    glBegin(GL_POLYGON); //timber

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(0.88f, 0.33f);

    glVertex2f(0.84f, 0.33f);

    glVertex2f(0.85f, 0.46f);

    glVertex2f(0.87f, 0.46f);

    glEnd();

    //Leaf

    circle(0.04,0.86,0.53,0.40,0.52,0.28);

    circle(0.04,0.85,0.45,0.40,0.52,0.28);

    circle(0.06,0.82,0.49,0.36,0.48,0.24);

    circle(0.04,0.85,0.475,0.34,0.46,0.22);

    circle(0.06,0.90,0.48,0.36,0.48,0.24);

}

//Christmas Tree

void cTree()

{

//LEft

    glBegin(GL_POLYGON); //timber

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.605f, 0.33f);

    glVertex2f(-0.595f, 0.33f);

    glVertex2f(-0.595f, 0.43f);

    glVertex2f(-0.605f, 0.43f);

    glEnd();

    //Leaf

    glBegin(GL_POLYGON); //leaf

    glColor3f(0.34f,0.46f,0.22f);

    glVertex2f(-0.67f, 0.43f);

    glVertex2f(-0.53f, 0.43f);

    glVertex2f(-0.60f, 0.53f);

    glEnd();

    glBegin(GL_POLYGON); //leaf

    glColor3f(0.34f,0.46f,0.22f);

    glVertex2f(-0.66f, 0.47f);

    glVertex2f(-0.54f, 0.47f);

    glVertex2f(-0.60f, 0.57f);

    glEnd();

    //Right

    glBegin(GL_POLYGON); //timber

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(0.605f, 0.33f);

    glVertex2f(0.595f, 0.33f);

    glVertex2f(0.595f, 0.43f);

    glVertex2f(0.605f, 0.43f);

    glEnd();

    //Leaf

    glBegin(GL_POLYGON); //leaf

    glColor3f(0.34f,0.46f,0.22f);

    glVertex2f(0.67f, 0.43f);

    glVertex2f(0.53f, 0.43f);

    glVertex2f(0.60f, 0.53f);

    glEnd();

    glBegin(GL_POLYGON); //leaf

    glColor3f(0.34f,0.46f,0.22f);

    glVertex2f(0.66f, 0.47f);

    glVertex2f(0.54f, 0.47f);

    glVertex2f(0.60f, 0.57f);

    glEnd();

}

void House()

{

//House Right

    glBegin(GL_POLYGON); //house

    glColor3f(0.44f, 0.36f, 0.24f);

    glVertex2f(0.19f, 0.37f);

    glVertex2f(0.19f, 0.33f);

    glVertex2f(0.25f, 0.32f);

    glVertex2f(0.25f, 0.36f);

    glVertex2f(0.21f, 0.415f);

    glEnd();

    glBegin(GL_POLYGON); //window

    glColor3f(0.161f, 0.0706, 0.0706);

    glVertex2f(0.21f, 0.375f);

    glVertex2f(0.21f, 0.33f);

    glVertex2f(0.2275f, 0.3485f);

    glVertex2f(0.2275f, 0.371f);

    glEnd();

    glBegin(GL_POLYGON); //1st

    glColor3f(0.44f, 0.33f, 0.24f);

    glVertex2f(0.25f, 0.18f+0.19);

    glVertex2f(0.25f, 0.13f+0.19);

    glVertex2f(0.39f, 0.1525f+0.19);

    glVertex2f(0.39f, 0.18f+0.19);

    glEnd();

    glBegin(GL_POLYGON); //door

    glColor3f(0.161f, 0.0706, 0.0706);

    glVertex2f(0.31f, 0.165f+0.19);

    glVertex2f(0.31f, 0.14f+0.19);

    glVertex2f(0.33f, 0.1415f+0.19);

    glVertex2f(0.33f, 0.16575f+0.19);

    glEnd();

    glBegin(GL_POLYGON); //1st

    glColor3f(0.35f, 0.35f, 0.35f);

    glVertex2f(0.215f, 0.225f+0.19);

    glVertex2f(0.2f, 0.225f+0.19);

    glVertex2f(0.175f, 0.18f+0.19);

    glVertex2f(0.19f, 0.18f+0.19);

    glEnd();

    glBegin(GL_POLYGON); //1st

    glColor3f(0.5764, 0.6039, 0.6392);

    glVertex2f(0.325f, 0.225f+0.19);

    glVertex2f(0.2f, 0.225f+0.19);

    glVertex2f(0.25f, 0.175f+0.19);

    glVertex2f(0.4f, 0.18f+0.19);

    glEnd();

    // House Left

    glBegin(GL_POLYGON); //house

    glColor3f(0.44f, 0.36f, 0.24f);

    glVertex2f(-0.19f, 0.37f);

    glVertex2f(-0.19f, 0.33f);

    glVertex2f(-0.25f, 0.32f);

    glVertex2f(-0.25f, 0.36f);

    glVertex2f(-0.21f, 0.415f);

    glEnd();

    glBegin(GL_POLYGON); //window

    glColor3f(0.161f, 0.0706, 0.0706);

    glVertex2f(-0.21f, 0.375f);

    glVertex2f(-0.21f, 0.33f);

    glVertex2f(-0.2275f, 0.3485f);

    glVertex2f(-0.2275f, 0.371f);

    glEnd();

    glBegin(GL_POLYGON); //1st

    glColor3f(0.44f, 0.33f, 0.24f);

    glVertex2f(-0.25f, 0.18f+0.19);

    glVertex2f(-0.25f, 0.13f+0.19);

    glVertex2f(-0.39f, 0.1525f+0.19);

    glVertex2f(-0.39f, 0.18f+0.19);

    glEnd();

    glBegin(GL_POLYGON); //door

    glColor3f(0.161f, 0.0706, 0.0706);

    glVertex2f(-0.31f, 0.165f+0.19);

    glVertex2f(-0.31f, 0.14f+0.19);

    glVertex2f(-0.33f, 0.1415f+0.19);

    glVertex2f(-0.33f, 0.16575f+0.19);

    glEnd();

    glBegin(GL_POLYGON); //1st

    glColor3f(0.35f, 0.35f, 0.35f);

    glVertex2f(-0.215f, 0.225f+0.19);

    glVertex2f(-0.2f, 0.225f+0.19);

    glVertex2f(-0.175f, 0.18f+0.19);

    glVertex2f(-0.19f, 0.18f+0.19);

    glEnd();

    glBegin(GL_POLYGON); //1st

    glColor3f(0.5764, 0.6039, 0.6392);

    glVertex2f(-0.325f, 0.225f+0.19);

    glVertex2f(-0.2f, 0.225f+0.19);

    glVertex2f(-0.25f, 0.175f+0.19);

    glVertex2f(-0.4f, 0.18f+0.19);

    glEnd();

}

void wood()

{

    //circle(0.001,0.05,-0.7,1.0,1.0,1.0);

    circle(0.12,0.0,-0.6,0.2,0.24,0.29); //Bonfire Ash Circle

    circle(0.06,0.0,-0.6,0.53,0.56,0.58); //Bonfire Outer Circle

    circle(0.04,0.0,-0.6,0.2,0.24,0.29); //Bonfire Ash Circle

    //left

    circle(0.019,-0.031,-0.498,0.3,0.08,-0.10);

    glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.14f, -0.65f);

    glColor3f(0.2f, -0.08f, -0.20f);

    glVertex2f(-0.10f, -0.65f);

    glVertex2f(-0.01f, -0.50f);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.05f, -0.50f);

    glEnd();

    circle(0.019,-0.119,-0.652,0.2,-0.08,-0.20);

    circle(0.015,-0.119,-0.652,0.4,0.18,0.0);

    //middle

    circle(0.019,0.0,-0.498,0.3,0.08,-0.10);

    circle(0.015,0.0,-0.677,0.3,0.08,-0.10);

    glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.014f, -0.68f);

    glColor3f(0.2f, -0.08f, -0.20f);

    glVertex2f(0.014f, -0.68f);

    glVertex2f(0.014f, -0.49f);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.014f, -0.49f);

    glEnd();


    //Right

    circle(0.019,0.031,-0.498,0.3,0.08,-0.10);

    glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(0.14f, -0.65f);

    glColor3f(0.2f, -0.08f, -0.20f);

    glVertex2f(0.10f, -0.65f);

    glVertex2f(0.01f, -0.50f);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(0.05f, -0.50f);

    glEnd();

    circle(0.019,0.119,-0.652,0.2,-0.08,-0.20);

    circle(0.015,0.119,-0.652,0.4,0.18,0.0);


}

void cloud()

{

    // 1.0, 1.0, 0.9

    //Left

    circle(0.04, (-0.63 + cloudPositionX),0.9,1.0, 1.0, 0.9);

    circle(0.045,(-0.65 + cloudPositionX),0.85,1.0, 1.0, 0.9);

    circle(0.04,(-0.6 + cloudPositionX),0.85,1.0, 1.0, 0.9);

    circle(0.04,(-0.63 + cloudPositionX),0.9,1.0, 1.0, 0.9);

    circle(0.035,(-0.65 + cloudPositionX),0.85,1.0, 1.0, 0.9);

    circle(0.045,(-0.7 + cloudPositionX),0.85,1.0, 1.0, 0.9);

//middle

    circle(0.04,-0.30+ cloudPositionX,0.9,1.0, 1.0, 0.9);

    circle(0.045,-0.32+ cloudPositionX,0.85,1.0, 1.0, 0.9);

    circle(0.04,-0.36+ cloudPositionX,0.85,1.0, 1.0, 0.9);

    circle(0.04,-0.36+ cloudPositionX,0.92,1.0, 1.0, 0.9);

    circle(0.04,-0.4+ cloudPositionX,0.9,1.0, 1.0, 0.9);

    circle(0.04,-0.4+ cloudPositionX,0.9,1.0, 1.0, 0.9);

    circle(0.04,-0.7+ cloudPositionX,0.9,1.0, 1.0, 0.9);

//Right

    circle(0.05,0.13+ cloudPositionX,0.9,1.0, 1.0, 0.9);

    circle(0.04,0.15+ cloudPositionX,0.85,1.0, 1.0, 0.9);

    circle(0.035,0.1+ cloudPositionX,0.85,1.0, 1.0, 0.9);

    circle(0.05,0.13+ cloudPositionX,0.9,1.0, 1.0, 0.9);

    circle(0.055,0.15+ cloudPositionX,0.93,1.0, 1.0, 0.9);

    circle(0.055,0.1+ cloudPositionX,0.87,1.0, 1.0, 0.9);

    circle(0.055,0.22+ cloudPositionX,0.87,1.0, 1.0, 0.9);

}


void tent()

{

    /////////////////Tent Left////////////////

    //dark1: 1.00, 0.84, 0.0f

    // 0.90f, 0.60f, 0.0f

    //light: 1.00, 0.88, 0.30

    glBegin(GL_POLYGON);

    glColor3f(0.90f, 0.60f, 0.0f);

    glVertex2f(-0.354, -0.57f);

    glVertex2f(-0.348, -0.476f);

    glVertex2f(-0.262, -0.396f);

    glVertex2f(-0.272, -0.496f);

    glEnd();

    //Khuti

    glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(-0.170f, -0.55f);

    glVertex2f(-0.160f, -0.55f);

    glVertex2f(-0.160f, -0.60f);

    glVertex2f(-0.170f, -0.60f);

    glEnd();

    ///// Roshi

    glBegin(GL_POLYGON);

    glColor3ub(210, 115, 45);

    glVertex2f(-0.345, -0.49f);

    glVertex2f(-0.170f, -0.56f);

    glVertex2f(-0.170f, -0.565f);

    glVertex2f(-0.345, -0.50f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(210, 115, 45);

    glVertex2f(-0.345, -0.38f);

    glVertex2f(-0.170f, -0.56f);

    glVertex2f(-0.170f, -0.565f);

    glVertex2f(-0.345, -0.39f);

    glEnd();


    // Tent Roof Top

    glBegin(GL_POLYGON);


    glColor3f(1.00f, 0.84f, 0.0f);

    glVertex2f((133.68 + 0.2 * maxX) / maxX * 2.0 - 1.0, (209.63 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((259.04 + 0.2 * maxX) / maxX * 2.0 - 1.0, (48.56 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((338.81 + 0.2 * maxX) / maxX * 2.0 - 1.0, (90.11 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((244.79 + 0.2 * maxX) / maxX * 2.0 - 1.0, (207.92 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();

// Tent Roof Dark

    glBegin(GL_POLYGON);

    glColor3f(0.90f, 0.74f, -0.10f);

    glVertex2f((104.72 + 0.2 * maxX) / maxX * 2.0 - 1.0, (164.5 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((259.04 + 0.2 * maxX) / maxX * 2.0 - 1.0, (48.56 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glColor3f(1.00f, 0.84f, 0.0f);

    glVertex2f((133.68 + 0.2 * maxX) / maxX * 2.0 - 1.0, (209.63 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();

// Tent Front

    glBegin(GL_POLYGON);

    glColor3ub(231, 144, 34);

    glVertex2f((65.69 + 0.2 * maxX) / maxX * 2.0 - 1.0, (28.29 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((235.44 + 0.2 * maxX) / maxX * 2.0 - 1.0, (15.1 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glColor3f(1.00f, 0.84f, 0.0f);

    glVertex2f((243.29 + 0.2 * maxX) / maxX * 2.0 - 1.0, (61.29 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((104.72 + 0.2 * maxX) / maxX * 2.0 - 1.0, (167 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((48.76 + 0.2 * maxX) / maxX * 2.0 - 1.0, (74.43 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();

// Tent Roof Dark Triangle

    glBegin(GL_POLYGON);

    glColor3f(0.90f, 0.60f, 0.0f);

    glVertex2f((Tx + m * 129.34 + 0.2 * maxX) / maxX * 2.0 - 1.0, (Ty + m * 24.23 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((Tx + m * 133.46 + 0.2 * maxX) / maxX * 2.0 - 1.0, (Ty + m * 141.46 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((Tx + m * 135.84 + 0.2 * maxX) / maxX * 2.0 - 1.0, (Ty + m * 139.65 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f((Tx + m * 137.52 + 0.2 * maxX) / maxX * 2.0 - 1.0, (Ty + m * 23.71 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();


    /////////////////Tent Right////////////////


    glBegin(GL_POLYGON);

    glColor3f(0.90f, 0.60f, 0.0f);

    glVertex2f(0.354, -0.57f);

    glVertex2f(0.348, -0.476f);

    glVertex2f(0.262, -0.396f);

    glVertex2f(0.272, -0.496f);

    glEnd();

    //Khuti

    glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.18f, 0.0f);

    glVertex2f(0.170f, -0.55f);

    glVertex2f(0.160f, -0.55f);

    glVertex2f(0.160f, -0.60f);

    glVertex2f(0.170f, -0.60f);

    glEnd();

    ///// Roshi

    glBegin(GL_POLYGON);

    glColor3ub(210, 115, 45);

    glVertex2f(0.345, -0.49f);

    glVertex2f(0.170f, -0.56f);

    glVertex2f(0.170f, -0.565f);

    glVertex2f(0.345, -0.50f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(210, 115, 45);

    glVertex2f(0.345, -0.38f);

    glVertex2f(0.170f, -0.56f);

    glVertex2f(0.170f, -0.565f);

    glVertex2f(0.345, -0.39f);

    glEnd();

    // Tent Roof Top

    glBegin(GL_POLYGON);

    glColor3ub(231, 144, 34);

    glVertex2f(-(133.68 + 0.2 * maxX) / maxX * 2.0 + 1.0, (209.63 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(259.04 + 0.2 * maxX) / maxX * 2.0 + 1.0, (48.56 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(338.81 + 0.2 * maxX) / maxX * 2.0 + 1.0, (90.11 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(244.79 + 0.2 * maxX) / maxX * 2.0 + 1.0, (207.92 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();

    // Tent Roof Dark

    glBegin(GL_POLYGON);

    glColor3f(1.00f, 0.84f, 0.0f);

    glVertex2f(-(104.72 + 0.2 * maxX) / maxX * 2.0 + 1.0, (164.5 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(259.04 + 0.2 * maxX) / maxX * 2.0 + 1.0, (48.56 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(133.68 + 0.2 * maxX) / maxX * 2.0 + 1.0, (209.63 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();

    // Tent Front

    glBegin(GL_POLYGON);

    glColor3f(1.00f, 0.84f, 0.0f);

    glVertex2f(-(65.69 + 0.2 * maxX) / maxX * 2.0 + 1.0, (28.29 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(235.44 + 0.2 * maxX) / maxX * 2.0 + 1.0, (15.1 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(243.29 + 0.2 * maxX) / maxX * 2.0 + 1.0, (61.29 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(104.72 + 0.2 * maxX) / maxX * 2.0 + 1.0, (167 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(48.76 + 0.2 * maxX) / maxX * 2.0 + 1.0, (74.43 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();

    // Tent Roof Dark Triangle

    glBegin(GL_POLYGON);

    glColor3f(0.90f, 0.60f, 0.0f);

    glVertex2f(-(Tx + m * 129.34 + 0.2 * maxX) / maxX * 2.0 + 1.0, (Ty + m * 24.23 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(Tx + m * 133.46 + 0.2 * maxX) / maxX * 2.0 + 1.0, (Ty + m * 141.46 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(Tx + m * 135.84 + 0.2 * maxX) / maxX * 2.0 + 1.0, (Ty + m * 139.65 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glVertex2f(-(Tx + m * 137.52 + 0.2 * maxX) / maxX * 2.0 + 1.0, (Ty + m * 23.71 + 0.2 * maxY) / maxY * 2.0 - 1.0);

    glEnd();

}

void plane(float a, float b)
{

    // Scale factor

    float scaleFactor = 0.25;

    // Body

    glBegin(GL_QUADS);

    glColor3ub(66, 66, 66);

    glVertex2f((-0.73 + a) * scaleFactor, (0.56 + b) * scaleFactor);

    glVertex2f((-0.38 + a) * scaleFactor, (0.56 + b) * scaleFactor);

    glVertex2f((-0.38 + a) * scaleFactor, (0.68 + b) * scaleFactor);

    glVertex2f((-0.73 + a) * scaleFactor, (0.68 + b) * scaleFactor);

    glEnd();

    // Front Triangle

    glBegin(GL_TRIANGLES);

    glColor3ub(66, 66, 66);

    glVertex2f((-0.38 + a) * scaleFactor, (0.56 + b) * scaleFactor);

    glVertex2f((-0.25 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.38 + a) * scaleFactor, (0.68 + b) * scaleFactor);

    glEnd();

    // Fan Back

    glBegin(GL_QUADS);

    glColor3ub(66, 66, 66);

    glVertex2f((-0.71 + a) * scaleFactor, (0.68 + b) * scaleFactor);

    glVertex2f((-0.59 + a) * scaleFactor, (0.68 + b) * scaleFactor);

    glVertex2f((-0.69 + a) * scaleFactor, (0.76 + b) * scaleFactor);

    glVertex2f((-0.85 + a) * scaleFactor, (0.76 + b) * scaleFactor);

    glEnd();

    // Fan Front Up

    glBegin(GL_QUADS);

    glVertex2f((-0.45 + a) * scaleFactor, (0.68 + b) * scaleFactor);

    glVertex2f((-0.37 + a) * scaleFactor, (0.68 + b) * scaleFactor);

    glVertex2f((-0.53 + a) * scaleFactor, (0.76 + b) * scaleFactor);

    glVertex2f((-0.61 + a) * scaleFactor, (0.76 + b) * scaleFactor);

    glEnd();

    // Fan Front Down

    glBegin(GL_QUADS);

    glColor3ub(66, 66, 66);

    glVertex2f((-0.45 + a) * scaleFactor, (0.56 + b) * scaleFactor);

    glVertex2f((-0.37 + a) * scaleFactor, (0.56 + b) * scaleFactor);

    glVertex2f((-0.53 + a) * scaleFactor, (0.48 + b) * scaleFactor);

    glVertex2f((-0.61 + a) * scaleFactor, (0.48 + b) * scaleFactor);

    glEnd();

    // Window

    glColor3ub(255, 255, 255);

    glBegin(GL_POINTS);

    glVertex2f((-0.60 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.56 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.52 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.48 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.44 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.40 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.36 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.32 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glVertex2f((-0.28 + a) * scaleFactor, (0.62 + b) * scaleFactor);

    glEnd();

}



void boat() {

    glBegin(GL_POLYGON); // main body

    glColor3f(0.38f, 0.38f, 0.38f);

    glVertex2f(-0.075f + boatPositionX, 0.20f);

    glVertex2f(0.075f + boatPositionX, 0.20f);

    glVertex2f(0.055f + boatPositionX, 0.15f);

    glVertex2f(-0.055f + boatPositionX, 0.15f);

    glEnd();

    glBegin(GL_POLYGON); //

    glColor3f(0.38f, 0.38f, 0.38f);

    glVertex2f(-0.002f + boatPositionX, 0.20f);

    glVertex2f(0.002f + boatPositionX, 0.20f);

    glVertex2f(0.002f + boatPositionX, 0.45f);

    glVertex2f(-0.002f + boatPositionX, 0.45f);

    glEnd();

    glBegin(GL_POLYGON); // left triangle

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.002f + boatPositionX, 0.35f);

    glVertex2f(-0.053f + boatPositionX, 0.24f);

    glVertex2f(-0.002f + boatPositionX, 0.20f);

    glEnd();

    glBegin(GL_POLYGON); // right triangle

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.002f + boatPositionX, 0.34f);

    glVertex2f(0.050f + boatPositionX, 0.23f);

    glVertex2f(0.002f + boatPositionX, 0.21f);

    glEnd();

}

void Windmill()
{

    //glPushMatrix();  // Push the current matrix to avoid affecting other objects

    //glTranslatef(0.0f,0.442f, 0.0f);  // Set the windmill position

    //glRotatef(windmillAngle, 0.0f, 0.0f, 1.0f);  // Rotate the windmill blades

    glBegin(GL_POLYGON); //main_body

    glColor3f(0.6f, 0.0f, 0.0f);

    glVertex2f(-0.050f, 0.35f);

    glVertex2f(0.050f, 0.35f);

    glColor3f(0.8f, 0.0f, 0.0f);

    glVertex2f(0.038f, 0.53f);

    glVertex2f(-0.038f, 0.53f);

    glEnd();

    glBegin(GL_POLYGON); //door_size

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.012f, 0.35f);

    glVertex2f(0.012f, 0.35f);

    glVertex2f(0.012f, 0.405f);

    glVertex2f(-0.012f, 0.405f);

    glEnd();

    glBegin(GL_POLYGON); //1st window(door)

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.006f, 0.46f);

    glVertex2f(0.006f, 0.46f);

    glVertex2f(0.006f, 0.425f);

    glVertex2f(-0.006f, 0.425f);

    glEnd();

    glBegin(GL_POLYGON); //2nd window(door)

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.006f, 0.475f);

    glVertex2f(0.006f, 0.475f);

    glVertex2f(0.006f, 0.51f);

    glVertex2f(-0.006f, 0.51f);

    glEnd();

    glBegin(GL_POLYGON); //upper rectangle

    glColor3f(0.00f,0.02f,0.00f);

    glVertex2f(-0.039f, 0.53f);

    glVertex2f(0.039f, 0.53f);

    glVertex2f(0.042f, 0.538f);

    glVertex2f(-0.042f, 0.538f);

    glEnd();

    glBegin(GL_POLYGON); //upper triangle

    glColor3f(1.00f,0.92f,0.50f);

    glVertex2f(-0.042f, 0.538f);

    glVertex2f(0.042f, 0.538f);

    glVertex2f(0.0f, 0.565f);

    glEnd();

    //blade____________________________

    glPushMatrix();  // Save the current matrix

    glTranslatef(0.0f, 0.552f, 0.0f);

    glRotatef(bladeRotationAngle, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON); //1st blade

    glColor3f(0.65f,0.33f,0.00f);

    glVertex2f(0.0f, 0.0f);

    glColor3f(0.86f,0.44f,0.00f);

    glVertex2f(-0.076f, -0.014f);

    glVertex2f(-0.05f, -0.072f);

    glEnd();

    glPopMatrix();  // Restore the original matrix

    glPushMatrix();  // Save the current matrix

    glTranslatef(0.0f, 0.552f, 0.0f);

    glRotatef(bladeRotationAngle + 120.0f, 0.0f, 0.0f, 1.0f);  // Rotate the blade

    glBegin(GL_POLYGON); //2nd blade

    glColor3f(0.65f,0.33f,0.00f);

    glVertex2f(0.0f, 0.0f);

    glColor3f(0.86f,0.44f,0.00f);

    glVertex2f(-0.076f, -0.014f);

    glVertex2f(-0.05f, -0.072f);

    glEnd();

    glPopMatrix();  // Restore the original matrix

    glPushMatrix();  // Save the current matrix

    glTranslatef(0.0f, 0.552f, 0.0f);

    glRotatef(bladeRotationAngle + 240.0f, 0.0f, 0.0f, 1.0f);  // Rotate the blade

    glBegin(GL_POLYGON); //3rd blade

    glColor3f(0.65f,0.33f,0.00f);

    glVertex2f(0.0f, 0.0f);

    glColor3f(0.86f,0.44f,0.00f);

    glVertex2f(-0.076f, -0.014f);

    glVertex2f(-0.05f, -0.072f);

    glEnd();

    glPopMatrix();  // Restore the original matrix

    circle(0.01,0.0,0.552,0.20,0.20,0.20);

    //glPopMatrix();


}

void riverLine()
{
    for (float i = -1.0f; i < 1.2f; i += 0.20f)
    {
        glBegin(GL_POLYGON);
        //glColor3f(0.25f, 0.54f, 0.73f);  // Dark blue
        glColor3f(1.0f, 1.0f, 1.0f);  // white
        glVertex2f(i + riverLinePositionX, 0.1f);          // Updated x-coordinate
        glVertex2f(i + 0.03f + riverLinePositionX, 0.1f);   // Updated x-coordinate
        glVertex2f(i + 0.03f + riverLinePositionX, 0.103f); // Updated x-coordinate
        glVertex2f(i + riverLinePositionX, 0.103f);         // Updated x-coordinate
        glEnd();
    }

    for (float i = -1.5f; i < 2.5f; i += 0.20f)
    {
        glBegin(GL_POLYGON);
        //glColor3f(0.25f, 0.54f, 0.73f);  // Dark blue
        glColor3f(1.0f, 1.0f, 1.0f);  // white
        glVertex2f(i + 0.2 + riverLinePositionX, 0.2f);          // Updated x-coordinate
        glVertex2f(i + 0.2 + 0.03f + riverLinePositionX, 0.2f);   // Updated x-coordinate
        glVertex2f(i + 0.2 + 0.03f + riverLinePositionX, 0.203f); // Updated x-coordinate
        glVertex2f(i + 0.2 + riverLinePositionX, 0.203f);         // Updated x-coordinate
        glEnd();
    }
}

void river()
{
        ////////////////River side grass////////////////

    glBegin(GL_POLYGON);

    glColor3f(0.48f,0.69f,0.00f);

    glVertex2f(-1.0f, 0.5f);

    glVertex2f(1.0, 0.5f);

    glVertex2f(1.0f, 0.28f);

    glVertex2f(-1.0f, 0.28f);

    glEnd();

    ////////////////river/////////////////

    glBegin(GL_POLYGON);

    glColor3f(0.88f,0.87,0.66f);//yellow

    glVertex2f(-1.0f, 0.29f);

    glVertex2f(1.0, 0.29f);

    glColor3f(0.34f,0.63f,0.83f); // blue

    glVertex2f(1.0f, 0.0f);

    glVertex2f(-1.0f, 0.0f);

    glEnd();

    riverLine();

    glBegin(GL_POLYGON); //river side left

    glColor3f(0.50f, 0.45f, 0.30f);

    glVertex2f(-1.0f, 0.31f);

    glVertex2f(-0.5f, 0.29f);

    glVertex2f(-0.5f, 0.27f);

    glVertex2f(-1.0, 0.29f);

    glEnd();

    glBegin(GL_POLYGON); //river side middle

    glColor3f(0.50f, 0.45f, 0.30f);

    glVertex2f(-0.5f, 0.29f);

    glVertex2f(0.5f, 0.29f);

    glVertex2f(0.5f, 0.27f);

    glVertex2f(-0.5f, 0.27f);

    glEnd();

    glBegin(GL_POLYGON); //river side right

    glColor3f(0.50f, 0.45f, 0.30f);

    glVertex2f(0.5f, 0.29f);

    glVertex2f(1.0f, 0.31f);

    glVertex2f(1.0f, 0.29f);

    glVertex2f(0.5, 0.27f);

    glEnd();

}

void road()
{
        ////////////////Road/////////////////

    glBegin(GL_POLYGON);

    glColor3f(0.222f, 0.244f, 0.252f);

    glVertex2f(-1.0f, 0.0f);

    glVertex2f(1.0, 0.0f);

    glVertex2f(1.0f, -0.20f);

    glVertex2f(-1.0f, -0.20f);

    glEnd();

    // Road Line

    for (float i = -1.0f; i < 1.2f; i += 0.05f)

    {

        glBegin(GL_POLYGON);

        glColor3f(0.85f, 0.66f, 0.09f);

        glVertex2f(i, -0.1f);

        glVertex2f(i + 0.03f, -0.1f);

        glVertex2f(i + 0.03f, -0.103f);

        glVertex2f(i, -0.103f);

        glEnd();

    }
}
void grass()
{
    //////////////// Down grass////////////////

    glBegin(GL_POLYGON);

    //glColor3f(0.01f,0.37,0.10f);

    glColor3f(0.50f,0.69f,0.00f);

    glVertex2f(-1.0f, -0.20f);

    glVertex2f(1.0, -0.20f);

    glVertex2f(1.0f, -1.0f);

    glVertex2f(-1.0f, -1.0f);

    glEnd();

    //Grass shades

//1

    circle(0.040,0.30,-0.9, 0.46,0.67,0.00);

    circle(0.045,0.32,-0.85, 0.46,0.67,0.00);

    circle(0.04,0.36,-0.85, 0.46,0.67,0.00);

    circle(0.04,0.37,-0.92, 0.46,0.67,0.00);

    circle(0.04,0.40,-0.9, 0.46,0.67,0.00);

    circle(0.04,0.41,-0.9, 0.46,0.67,0.00);

    circle(0.04,0.40,-0.9, 0.46,0.67,0.00);

    circle(0.040,0.35,-0.6, 0.46,0.67,0.00);

    circle(0.045,0.37,-0.55, 0.46,0.67,0.00);

    circle(0.04,0.41,-0.55, 0.46,0.67,0.00);

    circle(0.04,0.43,-0.62, 0.46,0.67,0.00);

    circle(0.04,0.44,-0.6, 0.46,0.67,0.00);

    circle(0.04,0.47,-0.6, 0.46,0.67,0.00);

    circle(0.04,0.45,-0.6, 0.46,0.67,0.00);

    circle(0.040,-0.35,-0.6, 0.46,0.67,0.00);

    circle(0.045,-0.37,-0.55, 0.46,0.67,0.00);

    circle(0.04,-0.41,-0.55, 0.46,0.67,0.00);

    circle(0.04,-0.43,-0.62, 0.46,0.67,0.00);

    circle(0.04,-0.44,-0.6, 0.46,0.67,0.00);

    circle(0.04,-0.47,-0.6, 0.46,0.67,0.00);

    circle(0.04,-0.45,-0.6, 0.46,0.67,0.00);

    //middle

    circle(0.040,-0.05,-0.4, 0.46,0.67,0.00);

    circle(0.045,-0.07,-0.35, 0.46,0.67,0.00);

    circle(0.04,-0.11,-0.35, 0.46,0.67,0.00);

    circle(0.04,-0.12,-0.42, 0.46,0.67,0.00);

    circle(0.04,-0.14,-0.4, 0.46,0.67,0.00);

    circle(0.04,-0.16,-0.4, 0.46,0.67,0.00);

    circle(0.04,-0.15,-0.4, 0.46,0.67,0.00);

//

    circle(0.040,-0.30,-0.9, 0.46,0.67,0.00);

    circle(0.045,-0.32,-0.85, 0.46,0.67,0.00);

    circle(0.04,-0.36,-0.85, 0.46,0.67,0.00);

    circle(0.04,-0.37,-0.92, 0.46,0.67,0.00);

    circle(0.04,-0.40,-0.9, 0.46,0.67,0.00);

    circle(0.04,-0.41,-0.9, 0.46,0.67,0.00);

    circle(0.04,-0.40,-0.9, 0.46,0.67,0.00);

    circle(0.040,0.4,-0.9, 0.46,0.67,0.00);

    circle(0.045,0.42,-0.85, 0.46,0.67,0.00);

    circle(0.04,0.46,-0.85, 0.46,0.67,0.00);

    circle(0.04,0.47,-0.92, 0.46,0.67,0.00);

    circle(0.04,0.50,-0.9, 0.46,0.67,0.00);

    circle(0.04,0.51,-0.9, 0.46,0.67,0.00);

    circle(0.04,0.50,-0.9, 0.46,0.67,0.00);

//2

    circle(0.040,0.50,-0.4, 0.46,0.67,0.00);

    circle(0.045,0.52,-0.35, 0.46,0.67,0.00);

    circle(0.04,0.56,-0.35, 0.46,0.67,0.00);

    circle(0.04,0.57,-0.42, 0.46,0.67,0.00);

    circle(0.04,0.60,-0.4, 0.46,0.67,0.00);

    circle(0.04,0.61,-0.4, 0.46,0.67,0.00);

    circle(0.04,0.60,-0.4, 0.46,0.67,0.00);

    circle(0.040,-0.50,-0.4, 0.46,0.67,0.00);

    circle(0.045,-0.52,-0.35, 0.46,0.67,0.00);

    circle(0.04,-0.56,-0.35, 0.46,0.67,0.00);

    circle(0.04,-0.57,-0.42, 0.46,0.67,0.00);

    circle(0.04,-0.60,-0.4, 0.46,0.67,0.00);

    circle(0.04,-0.61,-0.4, 0.46,0.67,0.00);

    circle(0.04,-0.60,-0.4, 0.46,0.67,0.00);

//3

    circle(0.040,0.70,-0.60, 0.46,0.67,0.00);

    circle(0.045,0.72,-0.55, 0.46,0.67,0.00);

    circle(0.04,0.76,-0.55, 0.46,0.67,0.00);

    circle(0.04,0.77,-0.62, 0.46,0.67,0.00);

    circle(0.04,0.80,-0.60, 0.46,0.67,0.00);

    circle(0.04,0.81,-0.60, 0.46,0.67,0.00);

    circle(0.04,0.80,-0.60, 0.46,0.67,0.00);

    circle(0.040,0.95,-0.4, 0.46,0.67,0.00);

    circle(0.045,0.82,-0.35, 0.46,0.67,0.00);

    circle(0.04,0.86,-0.35, 0.46,0.67,0.00);

    circle(0.04,0.87,-0.42, 0.46,0.67,0.00);

    circle(0.04,0.93,-0.36, 0.46,0.67,0.00);

    circle(0.04,0.91,-0.4, 0.46,0.67,0.00);

    circle(0.04,0.90,-0.4, 0.46,0.67,0.00);

    circle(0.040,-1.02,-0.3, 0.46,0.67,0.00);

    circle(0.045,-0.92,-0.25, 0.46,0.67,0.00);

    circle(0.04,-0.96,-0.25, 0.46,0.67,0.00);

    circle(0.04,-0.97,-0.32, 0.46,0.67,0.00);

    circle(0.04,-1.02,-0.26, 0.46,0.67,0.00);

    circle(0.04,-1.0,-0.30, 0.46,0.67,0.00);

    circle(0.04,-1.0,-0.30, 0.46,0.67,0.00);

}
void walkWay()
{
    //Walkway Right//////////////

    glBegin(GL_POLYGON); //Walkway Right Tent First Step

    glColor3f(0.2f,0.24f,0.29f);

    glVertex2f(0.40f, -0.63f);

    glVertex2f(0.55f, -0.61f);

    glVertex2f(0.53f, -0.58f);

    glVertex2f(0.37f, -0.6f);

    glEnd();

    circle(0.008,0.42,-0.61,0.53,0.56,0.58); //Stone Shadow

    circle(0.008,0.48,-0.60,0.53,0.56,0.58); //Stone Shadow

    circle(0.005,0.50,-0.61,0.83,0.86,0.88); //Stone Shadow

    circle(0.005,0.45,-0.61,0.8,0.84,0.89); //Stone Shadow

    circle(0.005,0.52,-0.60,0.83,0.86,0.88); //Stone Shadow

    glBegin(GL_POLYGON); //Walkway Right Tent second Step

    glColor3f(0.2f,0.24f,0.29f);

    glVertex2f(0.50f, -0.73f);

    glVertex2f(0.65f, -0.71f);

    glVertex2f(0.63f, -0.68f);

    glVertex2f(0.47f, -0.7f);

    glEnd();

    circle(0.008,0.52,-0.71,0.53,0.56,0.58); //Stone Shadow

    circle(0.008,0.58,-0.70,0.53,0.56,0.58); //Stone Shadow

    circle(0.005,0.60,-0.71,0.83,0.86,0.88); //Stone Shadow

    circle(0.005,0.55,-0.71,0.8,0.84,0.89); //Stone Shadow

    circle(0.005,0.62,-0.70,0.83,0.86,0.88); //Stone Shadow

    glBegin(GL_POLYGON); //Walkway Right Tent Third Step

    glColor3f(0.2f,0.24f,0.29f);

    glVertex2f(0.60f, -0.83f);

    glVertex2f(0.75f, -0.81f);

    glVertex2f(0.73f, -0.78f);

    glVertex2f(0.57f, -0.8f);

    glEnd();

    circle(0.008,0.62,-0.81,0.53,0.56,0.58); //Stone Shadow

    circle(0.008,0.68,-0.80,0.53,0.56,0.58); //Stone Shadow

    circle(0.005,0.70,-0.81,0.83,0.86,0.88); //Stone Shadow

    circle(0.005,0.65,-0.81,0.8,0.84,0.89); //Stone Shadow

    circle(0.005,0.72,-0.80,0.83,0.86,0.88); //Stone Shadow

    glBegin(GL_POLYGON); //Walkway Right Tent Forth Step

    glColor3f(0.2f,0.24f,0.29f);

    glVertex2f(0.70f, -0.93f);

    glVertex2f(0.85f, -0.91f);

    glVertex2f(0.83f, -0.88f);

    glVertex2f(0.67f, -0.9f);

    glEnd();

    circle(0.008,0.72,-0.91,0.53,0.56,0.58); //Stone Shadow

    circle(0.008,0.78,-0.90,0.53,0.56,0.58); //Stone Shadow

    circle(0.005,0.80,-0.91,0.83,0.86,0.88); //Stone Shadow

    circle(0.005,0.75,-0.91,0.8,0.84,0.89); //Stone Shadow

    circle(0.005,0.82,-0.90,0.83,0.86,0.88); //Stone Shadow

//Walkway Left//////////////

    glBegin(GL_POLYGON); //Walkway Right Tent First Step

    glColor3f(0.2f,0.24f,0.29f);

    glVertex2f(-0.40f, -0.63f);

    glVertex2f(-0.55f, -0.61f);

    glVertex2f(-0.53f, -0.58f);

    glVertex2f(-0.37f, -0.6f);

    glEnd();

    circle(0.008,-0.42,-0.61,0.53,0.56,0.58); //Stone Shadow

    circle(0.008,-0.48,-0.60,0.53,0.56,0.58); //Stone Shadow

    circle(0.005,-0.50,-0.61,0.83,0.86,0.88); //Stone Shadow

    circle(0.005,-0.45,-0.61,0.8,0.84,0.89); //Stone Shadow

    circle(0.005,-0.52,-0.60,0.83,0.86,0.88); //Stone Shadow

    glBegin(GL_POLYGON); //Walkway Right Tent second Step

    glColor3f(0.2f,0.24f,0.29f);

    glVertex2f(-0.50f, -0.73f);

    glVertex2f(-0.65f, -0.71f);

    glVertex2f(-0.63f, -0.68f);

    glVertex2f(-0.47f, -0.7f);

    glEnd();

    circle(0.008,-0.52,-0.71,0.53,0.56,0.58); //Stone Shadow

    circle(0.008,-0.58,-0.70,0.53,0.56,0.58); //Stone Shadow

    circle(0.005,-0.60,-0.71,0.83,0.86,0.88); //Stone Shadow

    circle(0.005,-0.55,-0.71,0.8,0.84,0.89); //Stone Shadow

    circle(0.005,-0.62,-0.70,0.83,0.86,0.88); //Stone Shadow

}
void mountain()
{

/////////////Right  mountain////////////////////

///////////// Rear

    glBegin(GL_POLYGON);

    glColor3f(0.45f,0.62f,0.45f);

    glVertex2f(387.67f / maxX, 399.0f / maxY);

    glVertex2f(387.67f / maxX, 760.73f / maxY);

    glVertex2f(348.32f / maxX, 765.88f / maxY);

    glVertex2f(320.46f / maxX, 774.31f / maxY);

    glVertex2f(299.96f / maxX, 789.06f / maxY);

    glVertex2f(286.54f / maxX, 781.83f / maxY);

    glVertex2f(243.2f / maxX, 807.31f / maxY);

    glVertex2f(216.28f / maxX, 788.02f / maxY);

    glVertex2f(206.29f / maxX, 788.98f / maxY);

    glVertex2f(149.44f / maxX, 766.41f / maxY);

    glVertex2f(116.31f / maxX, 735.41f / maxY);

    glVertex2f(80.72f / maxX, 735.49f / maxY);

    glVertex2f(42.76f / maxX, 721.31f / maxY);

    glVertex2f(0.0f, 712.6f / maxY);

    glVertex2f(0.0f, 399.0f / maxY);

    glVertex2f(690.42f / maxX, 419.21f / maxY);

    glVertex2f(690.42f / maxX, 757.24f / maxY);

    glVertex2f(709.64f / maxX, 766.25f / maxY);

    glVertex2f(728.84f / maxX, 762.53f / maxY);

    glVertex2f(745.91f / maxX, 779.31f / maxY);

    glVertex2f(774.19f / maxX, 797.69f / maxY);

    glVertex2f(787.32f / maxX, 790.72f / maxY);

    glVertex2f(808.37f / maxX, 807.38f / maxY);

    glVertex2f(863.74f / maxX, 769.09f / maxY);

    glVertex2f(876.16f / maxX, 776.44f / maxY);

    glVertex2f(901.02f / maxX, 771.37f / maxY);

    glVertex2f(916.09f / maxX, 757.99f / maxY);

    glVertex2f(945.28f / maxX, 782.72f / maxY);

    glVertex2f(1002.54f / maxX, 737.36f / maxY);

    glVertex2f(1024.48f / maxX, 745.68f / maxY);

    glVertex2f(1024.48f / maxX, 745.68f / maxY);

    glVertex2f(1084.4f / maxX, 712.8f / maxY);

    glVertex2f(1096.1f / maxX, 718.64f / maxY);

    glVertex2f(1125.06f / maxX, 692.17f / maxY);

    glVertex2f(1166.05f / maxX, 675.09f / maxY);

    glVertex2f(1195.96f / maxX, 677.25f / maxY);

    glVertex2f(1230.89f / maxX, 688.87f / maxY);

    glVertex2f(1267.07f / maxX, 688.85f / maxY);

    glVertex2f(1300.48f / maxX, 715.54f / maxY);

    glVertex2f(1357.64f / maxX, 735.28f / maxY);

    glVertex2f(1366.68f / maxX, 734.21f / maxY);

    glVertex2f(1393.75f / maxX, 751.33f / maxY);

    glVertex2f(1437.43f / maxX, 729.19f / maxY);

    glVertex2f(1450.75f / maxX, 735.32f / maxY);

    glVertex2f(1471.2f / maxX, 722.3f / maxY);

    glVertex2f(1498.42f / maxX, 715.01f / maxY);

    glVertex2f(1537.89f / maxX, 710.47f / maxY);

    glVertex2f(1537.89f / maxX, 415.63f / maxY);

    glVertex2f(1841.53f / maxX, 415.63f / maxY);

    glVertex2f(1841.53f / maxX, 707.41f / maxY);

    glVertex2f(1860.76f / maxX, 715.26f / maxY);

    glVertex2f(1879.12f / maxX, 712.43f / maxY);

    glVertex2f(1920.0f / maxX, 736.81f / maxY);

    glVertex2f(1920.0f / maxX, 415.63f / maxY);

    glEnd();

    //////////// Front

    glBegin(GL_POLYGON);

    //glColor3f(0.53f,0.64f,0.41f);

    glColor3f(0.25f,0.42f,0.25f);

    glVertex2f(1166.00f / maxX, 400.00f / maxY);

    glVertex2f(1166.00f / maxX, 535.11f / maxY);

    glVertex2f(1205.15f / maxX, 550.08f / maxY);

    glVertex2f(1238.54f / maxX, 603.29f / maxY);

    glVertex2f(1398.15f / maxX, 667.96f / maxY);

    glVertex2f(1436.34f / maxX, 647.9f / maxY);

    glVertex2f(1460.13f / maxX, 671.01f / maxY);

    glVertex2f(1525.59f / maxX, 691.51f / maxY);

    glVertex2f(1532.36f / maxX, 708.08f / maxY);

    glVertex2f(1568.29f / maxX, 729.59f / maxY);

    glVertex2f(1589.46f / maxX, 750.52f / maxY);

    glVertex2f(1674.12f / maxX, 807.22f / maxY);

    glVertex2f(1718.64f / maxX, 764.92f / maxY);

    glVertex2f(1734.57f / maxX, 770.37f / maxY);

    glVertex2f(1760.1f / maxX, 747.91f / maxY);

    glVertex2f(1782.62f / maxX, 753.8f / maxY);

    glVertex2f(1829.14f / maxX, 722.66f / maxY);

    glVertex2f(1850.61f / maxX, 696.52f / maxY);

    glVertex2f(1859.94f / maxX, 702.7f / maxY);

    glVertex2f(1920.0f / maxX, 685.85f / maxY);

    glVertex2f(1920.0f / maxX, 415.63f / maxY);

    glVertex2f(0.0f, 399.0f / maxY);

    glVertex2f(2.25f / maxX, 551.5f / maxY);

    glVertex2f(38.98f / maxX, 551.5f / maxY);

    glVertex2f(88.79f / maxX, 636.1f / maxY);

    glVertex2f(248.5f / maxX, 710.75f / maxY);

    glVertex2f(285.99f / maxX, 688.18f / maxY);

    glVertex2f(309.44f / maxX, 714.25f / maxY);

    glVertex2f(374.34f / maxX, 737.76f / maxY);

    glVertex2f(382.35f / maxX, 757.46f / maxY);

    glVertex2f(416.33f / maxX, 781.97f / maxY);

    glVertex2f(438.72f / maxX, 806.81f / maxY);

    glVertex2f(523.28f / maxX, 872.26f / maxY);

    glVertex2f(569.27f / maxX, 823.59f / maxY);

    glVertex2f(584.07f / maxX, 829.74f / maxY);

    glVertex2f(609.17f / maxX, 804.24f / maxY);

    glVertex2f(631.7f / maxX, 810.58f / maxY);

    glVertex2f(678.52f / maxX, 774.51f / maxY);

    glVertex2f(700.18f / maxX, 743.9f / maxY);

    glVertex2f(709.57f / maxX, 751.36f / maxY);

    glVertex2f(788.14f / maxX, 724.27f / maxY);

    glVertex2f(811.41f / maxX, 701.83f / maxY);

    glVertex2f(826.72f / maxX, 711.39f / maxY);

    glVertex2f(828.6f / maxX, 710.54f / maxY);

    glVertex2f(829.72f / maxX, 711.5f / maxY);

    glVertex2f(831.99f / maxX, 709.63f / maxY);

    glVertex2f(879.22f / maxX, 698.09f / maxY);

    glVertex2f(920.12f / maxX, 686.66f / maxY);

    glVertex2f(954.98f / maxX, 674.09f / maxY);

    glVertex2f(965.89f / maxX, 668.04f / maxY);

    glVertex2f(970.37f / maxX, 664.47f / maxY);

    glVertex2f(970.37f / maxX, 662.34f / maxY);

    glVertex2f(984.1f / maxX, 650.66f / maxY);

    glVertex2f(1155.36f / maxX, 539.05f / maxY);

    glVertex2f(1155.36f / maxX, 531.11f / maxY);

    glVertex2f(1166.00f / maxX, 535.11f / maxY);

    glVertex2f(1166.00f / maxX, 400.00f / maxY);

    glEnd();


    //left mountain

    // Rear

    glBegin(GL_POLYGON);

    glColor3f(0.45f,0.62f,0.45f);

    glVertex2f(-387.67f / maxX, 399.0f / maxY);

    glVertex2f(-387.67f / maxX, 760.73f / maxY);

    glVertex2f(-348.32f / maxX, 765.88f / maxY);

    glVertex2f(-320.46f / maxX, 774.31f / maxY);

    glVertex2f(-299.96f / maxX, 789.06f / maxY);

    glVertex2f(-286.54f / maxX, 781.83f / maxY);

    glVertex2f(-243.2f / maxX, 807.31f / maxY);

    glVertex2f(-216.28f / maxX, 788.02f / maxY);

    glVertex2f(-206.29f / maxX, 788.98f / maxY);

    glVertex2f(-149.44f / maxX, 766.41f / maxY);

    glVertex2f(-116.31f / maxX, 735.41f / maxY);

    glVertex2f(-80.72f / maxX, 735.49f / maxY);

    glVertex2f(-42.76f / maxX, 721.31f / maxY);

    glVertex2f(0.0f, 712.6f / maxY);

    glVertex2f(0.0f, 399.0f / maxY);

    glVertex2f(-690.42f / maxX, 419.21f / maxY);

    glVertex2f(-690.42f / maxX, 757.24f / maxY);

    glVertex2f(-709.64f / maxX, 766.25f / maxY);

    glVertex2f(-728.84f / maxX, 762.53f / maxY);

    glVertex2f(-745.91f / maxX, 779.31f / maxY);

    glVertex2f(-774.19f / maxX, 797.69f / maxY);

    glVertex2f(-787.32f / maxX, 790.72f / maxY);

    glVertex2f(-808.37f / maxX, 807.38f / maxY);

    glVertex2f(-863.74f / maxX, 769.09f / maxY);

    glVertex2f(-876.16f / maxX, 776.44f / maxY);

    glVertex2f(-901.02f / maxX, 771.37f / maxY);

    glVertex2f(-916.09f / maxX, 757.99f / maxY);

    glVertex2f(-945.28f / maxX, 782.72f / maxY);

    glVertex2f(-1002.54f / maxX, 737.36f / maxY);

    glVertex2f(-1024.48f / maxX, 745.68f / maxY);

    glVertex2f(-1024.48f / maxX, 745.68f / maxY);

    glVertex2f(-1084.4f / maxX, 712.8f / maxY);

    glVertex2f(-1096.1f / maxX, 718.64f / maxY);

    glVertex2f(-1125.06f / maxX, 692.17f / maxY);

    glVertex2f(-1166.05f / maxX, 675.09f / maxY);

    glVertex2f(-1195.96f / maxX, 677.25f / maxY);

    glVertex2f(-1230.89f / maxX, 688.87f / maxY);

    glVertex2f(-1267.07f / maxX, 688.85f / maxY);

    glVertex2f(-1300.48f / maxX, 715.54f / maxY);

    glVertex2f(-1357.64f / maxX, 735.28f / maxY);

    glVertex2f(-1366.68f / maxX, 734.21f / maxY);

    glVertex2f(-1393.75f / maxX, 751.33f / maxY);

    glVertex2f(-1437.43f / maxX, 729.19f / maxY);

    glVertex2f(-1450.75f / maxX, 735.32f / maxY);

    glVertex2f(-1471.2f / maxX, 722.3f / maxY);

    glVertex2f(-1498.42f / maxX, 715.01f / maxY);

    glVertex2f(-1537.89f / maxX, 710.47f / maxY);

    glVertex2f(-1537.89f / maxX, 415.63f / maxY);

    glVertex2f(-1841.53f / maxX, 415.63f / maxY);

    glVertex2f(-1841.53f / maxX, 707.41f / maxY);

    glVertex2f(-1860.76f / maxX, 715.26f / maxY);

    glVertex2f(-1879.12f / maxX, 712.43f / maxY);

    glVertex2f(-1920.0f / maxX, 736.81f / maxY);

    glVertex2f(-1920.0f / maxX, 415.63f / maxY);

    glEnd();

    //////////// Front

    glBegin(GL_POLYGON);

    glColor3f(0.25f,0.42f,0.25f);

    glVertex2f(-1166.00f / maxX, 400.00f / maxY);

    glVertex2f(-1166.00f / maxX, 535.11f / maxY);

    glVertex2f(-1205.15f / maxX, 550.08f / maxY);

    glVertex2f(-1238.54f / maxX, 603.29f / maxY);

    glVertex2f(-1398.15f / maxX, 667.96f / maxY);

    glVertex2f(-1436.34f / maxX, 647.9f / maxY);

    glVertex2f(-1460.13f / maxX, 671.01f / maxY);

    glVertex2f(-1525.59f / maxX, 691.51f / maxY);

    glVertex2f(-1532.36f / maxX, 708.08f / maxY);

    glVertex2f(-1568.29f / maxX, 729.59f / maxY);

    glVertex2f(-1589.46f / maxX, 750.52f / maxY);

    glVertex2f(-1674.12f / maxX, 807.22f / maxY);

    glVertex2f(-1718.64f / maxX, 764.92f / maxY);

    glVertex2f(-1734.57f / maxX, 770.37f / maxY);

    glVertex2f(-1760.1f / maxX, 747.91f / maxY);

    glVertex2f(-1782.62f / maxX, 753.8f / maxY);

    glVertex2f(-1829.14f / maxX, 722.66f / maxY);

    glVertex2f(-1850.61f / maxX, 696.52f / maxY);

    glVertex2f(-1859.94f / maxX, 702.7f / maxY);

    glVertex2f(-1920.0f / maxX, 685.85f / maxY);

    glVertex2f(-1920.0f / maxX, 415.63f / maxY);

    glVertex2f(0.0f, 399.0f / maxY);

    glVertex2f(-2.25f / maxX, 551.5f / maxY);

    glVertex2f(-38.98f / maxX, 551.5f / maxY);

    glVertex2f(-88.79f / maxX, 636.1f / maxY);

    glVertex2f(-248.5f / maxX, 710.75f / maxY);

    glVertex2f(-285.99f / maxX, 688.18f / maxY);

    glVertex2f(-309.44f / maxX, 714.25f / maxY);

    glVertex2f(-374.34f / maxX, 737.76f / maxY);

    glVertex2f(-382.35f / maxX, 757.46f / maxY);

    glVertex2f(-416.33f / maxX, 781.97f / maxY);

    glVertex2f(-438.72f / maxX, 806.81f / maxY);

    glVertex2f(-523.28f / maxX, 872.26f / maxY);

    glVertex2f(-569.27f / maxX, 823.59f / maxY);

    glVertex2f(-584.07f / maxX, 829.74f / maxY);

    glVertex2f(-609.17f / maxX, 804.24f / maxY);

    glVertex2f(-631.7f / maxX, 810.58f / maxY);

    glVertex2f(-678.52f / maxX, 774.51f / maxY);

    glVertex2f(-700.18f / maxX, 743.9f / maxY);

    glVertex2f(-709.57f / maxX, 751.36f / maxY);

    glVertex2f(-788.14f / maxX, 724.27f / maxY);

    glVertex2f(-811.41f / maxX, 701.83f / maxY);

    glVertex2f(-826.72f / maxX, 711.39f / maxY);

    glVertex2f(-828.6f / maxX, 710.54f / maxY);

    glVertex2f(-829.72f / maxX, 711.5f / maxY);

    glVertex2f(-831.99f / maxX, 709.63f / maxY);

    glVertex2f(-879.22f / maxX, 698.09f / maxY);

    glVertex2f(-920.12f / maxX, 686.66f / maxY);

    glVertex2f(-954.98f / maxX, 674.09f / maxY);

    glVertex2f(-965.89f / maxX, 668.04f / maxY);

    glVertex2f(-970.37f / maxX, 664.47f / maxY);

    glVertex2f(-970.37f / maxX, 662.34f / maxY);

    glVertex2f(-984.1f / maxX, 650.66f / maxY);

    glVertex2f(-1155.36f / maxX, 539.05f / maxY);

    glVertex2f(-1155.36f / maxX, 531.11f / maxY);

    glVertex2f(-1166.00f / maxX, 535.11f / maxY);

    glVertex2f(-1166.00f / maxX, 400.00f / maxY);

    glEnd();
}
void bird()
{
    //Bird 1
    circle(0.015,-0.23+BirdsPositionX,0.83,0.35,0.35,0.35);
    circle(0.010,-0.215+BirdsPositionX,0.83,0.35,0.35,0.35);

    glBegin(GL_POLYGON); //lip
    glColor3f(0.35, 0.35, 0.35);
    glVertex2f(-0.205f+BirdsPositionX, 0.83f);
    glVertex2f(-0.197f+BirdsPositionX, 0.83f);
    glVertex2f(-0.205f+BirdsPositionX, 0.829f);
    glEnd();

    glBegin(GL_POLYGON); //wings
    glColor3f(0.35, 0.35, 0.35f);
    glVertex2f(-0.229f+BirdsPositionX, 0.80f);
    glVertex2f(-0.24f+BirdsPositionX, 0.82f);
    glVertex2f(-0.229f+BirdsPositionX, 0.829f);
    glEnd();

    glBegin(GL_POLYGON); //wings
    glColor3f(0.35f, 0.35f, 0.35f);
    glVertex2f(-0.229f+BirdsPositionX, 0.83f);
    glVertex2f(-0.24f+BirdsPositionX, 0.85f);
    glVertex2f(-0.229f+BirdsPositionX, 0.859f);
    glEnd();


    //Bird 2
    circle(0.015,-0.33+BirdsPositionX,0.73,0.35,0.35,0.35);
    circle(0.010,-0.315+BirdsPositionX,0.73,0.35,0.35,0.35);

    glBegin(GL_POLYGON); //lip
    glColor3f(0.35, 0.35, 0.35);
    glVertex2f(-0.305f+BirdsPositionX, 0.73f);
    glVertex2f(-0.297f+BirdsPositionX, 0.73f);
    glVertex2f(-0.305f+BirdsPositionX, 0.729f);
    glEnd();

    glBegin(GL_POLYGON); //wings
    glColor3f(0.35, 0.35, 0.35f);
    glVertex2f(-0.329f+BirdsPositionX, 0.70f);
    glVertex2f(-0.34f+BirdsPositionX, 0.72f);
    glVertex2f(-0.329f+BirdsPositionX, 0.729f);
    glEnd();

    glBegin(GL_POLYGON); //wings
    glColor3f(0.35f, 0.35f, 0.35f);
    glVertex2f(-0.329f+BirdsPositionX, 0.73f);
    glVertex2f(-0.34f+BirdsPositionX, 0.75f);
    glVertex2f(-0.329f+BirdsPositionX, 0.759f);
    glEnd();


    //Bird 3
    circle(0.015,-0.33+BirdsPositionX,0.93,0.35,0.35,0.35);
    circle(0.010,-0.315+BirdsPositionX,0.93,0.35,0.35,0.35);

    glBegin(GL_POLYGON); //lip
    glColor3f(0.35, 0.35, 0.35);
    glVertex2f(-0.305f+BirdsPositionX, 0.93f);
    glVertex2f(-0.297f+BirdsPositionX, 0.93f);
    glVertex2f(-0.305f+BirdsPositionX, 0.929f);
    glEnd();

    glBegin(GL_POLYGON); //wings
    glColor3f(0.35, 0.35, 0.35f);
    glVertex2f(-0.329f+BirdsPositionX, 0.90f);
    glVertex2f(-0.34f+BirdsPositionX, 0.92f);
    glVertex2f(-0.329f+BirdsPositionX, 0.929f);
    glEnd();

    glBegin(GL_POLYGON); //wings
    glColor3f(0.35f, 0.35f, 0.35f);
    glVertex2f(-0.329f+BirdsPositionX, 0.93f);
    glVertex2f(-0.34f+BirdsPositionX, 0.95f);
    glVertex2f(-0.329f+BirdsPositionX, 0.959f);
    glEnd();
}
void display()
{

    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with the current clearing color

    sky();
    sun();
    river();
    road();
    grass();
    walkWay();
    mountain();
    Tree1();
    Tree2();
    cTree();
    cloud();
    bird();
    House();
    wood();
    plane(planePositionX, 2.92);
    tent();
    boat();
    Windmill();

    glFlush();  // Render now
    glutSwapBuffers();
}

int main(int argc, char** argv)

{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 700);          // Initialize GLUT
    glutCreateWindow("Autumn Afternoon");  // Create window with the given title// Set the window's initial width & height
    glutInitWindowPosition(0, 0); // Position the window's initial top-left corner
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
//	return 0;

}
