// MyProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <math.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "Util.h"
#include "glm.hpp"
#include "gtc/matrix_transform.hpp"
#include "Square.h"

float currentTime = 0.0f;
float lastTime = 0.0f;
float deltaTime = 0.0f;

float speedUp = 4.0f;

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(800, 800, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    //glfwSetKeyCallback(window, keyCallback);

    GLenum err = glewInit();


    // Gedung 1
    Square s1;
    s1.setTranslation(-0.5f, 0.05f, 0.0f);
    s1.setScale(0.2f, 0.45f, 1.0f);
    s1.setColor(glm::vec4(0.93, 0.89, 0.83, 1.0));

    //Kaca
    Square s2;
    s2.setTranslation(-0.5f, 0.4f, 0.0f);
    s2.setScale(0.15f, 0.04f, 1.0f);
    s2.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square s3;
    s3.setTranslation(-0.5f, 0.4f, 0.0f);
    s3.setScale(0.14f, 0.03f, 1.0f);
    s3.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square s4;
    s4.setTranslation(-0.5f, 0.25f, 0.0f);
    s4.setScale(0.15f, 0.04f, 1.0f);
    s4.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square s5;
    s5.setTranslation(-0.5f, 0.25f, 0.0f);
    s5.setScale(0.14f, 0.03f, 1.0f);
    s5.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square s6;
    s6.setTranslation(-0.5f, 0.1f, 0.0f);
    s6.setScale(0.15f, 0.04f, 1.0f);
    s6.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square s7;
    s7.setTranslation(-0.5f, 0.1f, 0.0f);
    s7.setScale(0.14f, 0.03f, 1.0f);
    s7.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square s10;
    s10.setTranslation(-0.5f, -0.05f, 0.0f);
    s10.setScale(0.15f, 0.04f, 1.0f);
    s10.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square s11;
    s11.setTranslation(-0.5f, -0.05f, 0.0f);
    s11.setScale(0.14f, 0.03f, 1.0f);
    s11.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    //pintu
    Square s8;
    s8.setTranslation(-0.5f, -0.17f, 0.0f);
    s8.setScale(0.12f, 0.01f, 1.0f);
    s8.setColor(glm::vec4(0.278, 0.26, 0.24, 1.0));

    Square s9;
    s9.setTranslation(-0.5f, -0.28f, 0.0f);
    s9.setScale(0.1f, 0.12f, 1.0f);
    s9.setColor(glm::vec4(0.50, 0.48, 0.44, 1.0));

    // Gedung 2
    Square a1;
    a1.setTranslation(0.5f, 0.15f, 0.0f);
    a1.setScale(0.18f, 0.55f, 1.0f);
    a1.setColor(glm::vec4(0.51, 0.43, 0.42, 1.0));

    //kaca
    Square a2;
    a2.setTranslation(0.5f, 0.52f, 0.0f);
    a2.setScale(0.07f, 0.1f, 1.0f);
    a2.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a3;
    a3.setTranslation(0.5f, 0.52f, 0.0f);
    a3.setScale(0.052f, 0.082f, 1.0f);
    a3.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square a4;
    a4.setTranslation(0.5f, 0.43f, 0.0f);
    a4.setScale(0.09f, 0.012f, 1.0f);
    a4.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a5;
    a5.setTranslation(0.5f, 0.27f, 0.0f);
    a5.setScale(0.07f, 0.1f, 1.0f);
    a5.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a6;
    a6.setTranslation(0.5f, 0.27f, 0.0f);
    a6.setScale(0.052f, 0.082f, 1.0f);
    a6.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square a7;
    a7.setTranslation(0.5f, 0.18f, 0.0f);
    a7.setScale(0.09f, 0.012f, 1.0f);
    a7.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a8;
    a8.setTranslation(0.5f, 0.02f, 0.0f);
    a8.setScale(0.07f, 0.1f, 1.0f);
    a8.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a9;
    a9.setTranslation(0.5f, 0.02f, 0.0f);
    a9.setScale(0.052f, 0.082f, 1.0f);
    a9.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square a10;
    a10.setTranslation(0.5f, -0.07f, 0.0f);
    a10.setScale(0.09f, 0.012f, 1.0f);
    a10.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a11;
    a11.setTranslation(0.5f, -0.23f, 0.0f);
    a11.setScale(0.07f, 0.1f, 1.0f);
    a11.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a12;
    a12.setTranslation(0.5f, -0.23f, 0.0f);
    a12.setScale(0.052f, 0.082f, 1.0f);
    a12.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square a13;
    a13.setTranslation(0.5f, -0.32f, 0.0f);
    a13.setScale(0.09f, 0.012f, 1.0f);
    a13.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square a14;
    a14.setTranslation(0.5f, 0.7f, 0.0f);
    a14.setScale(0.2f, 0.018f, 1.0f);
    a14.setColor(glm::vec4(0.43, 0.29, 0.298, 1.0));

    Square a15;
    a15.setTranslation(0.6f, 0.76f, 0.0f);
    a15.setScale(0.03f, 0.05f, 1.0f);
    a15.setColor(glm::vec4(0.51, 0.23, 0.3, 1.0));

    Square a16;
    a16.setTranslation(0.6f, 0.8f, 0.0f);
    a16.setScale(0.05f, 0.02f, 1.0f);
    a16.setColor(glm::vec4(0.51, 0.23, 0.3, 1.0));

    //asap
    Square a17;
    a17.setRotation(45.0f, glm::vec3(0.7f, 0.04f, 0.9f));
    a17.setTranslation(1.0f, 0.3f, 0.0f);
    a17.setScale(glm::vec3(0.015f, 0.015f, 1.0f));
    a17.setColor(glm::vec4(0.882f, 0.878f, 0.874f, 1.0f));

    Square a18;
    a18.setRotation(45.0f, glm::vec3(0.7f, 0.04f, 0.9f));
    a18.setTranslation(1.0f, 0.4f, 0.0f);
    a18.setScale(glm::vec3(0.016f, 0.016f, 1.0f));
    a18.setColor(glm::vec4(0.882f, 0.878f, 0.874f, 1.0f));

    Square a19;
    a19.setRotation(45.0f, glm::vec3(0.7f, 0.04f, 0.9f));
    a19.setTranslation(1.0f, 0.5f, 0.0f);
    a19.setScale(glm::vec3(0.018f, 0.018f, 1.0f));
    a19.setColor(glm::vec4(0.882f, 0.878f, 0.874f, 1.0f));

    // Gedung 3
    Square q1;
    q1.setTranslation(0.12f, -0.05f, 0.0f);
    q1.setScale(0.2f, 0.35f, 1.0f);
    q1.setColor(glm::vec4(0.57, 0.38, 0.39, 1.0));

    Square q2;
    q2.setTranslation(0.12f, 0.3f, 0.0f);
    q2.setScale(0.2f, 0.018f, 1.0f);
    q2.setColor(glm::vec4(0.43, 0.29, 0.298, 1.0));

    Square q3;
    q3.setTranslation(0.12f, 0.1f, 0.0f);
    q3.setScale(0.2f, 0.018f, 1.0f);
    q3.setColor(glm::vec4(0.43, 0.29, 0.298, 1.0));

    Square q4;
    q4.setTranslation(0.12f, -0.1f, 0.0f);
    q4.setScale(0.2f, 0.018f, 1.0f);
    q4.setColor(glm::vec4(0.43, 0.29, 0.298, 1.0));

    // Kaca
    Square q5;
    q5.setTranslation(0.02f, 0.2f, 0.0f);
    q5.setScale(0.05f, 0.05f, 1.0f);
    q5.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q51;
    q51.setTranslation(0.02f, 0.2f, 0.0f);
    q51.setScale(0.04f, 0.04f, 1.0f);
    q51.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square q52;
    q52.setTranslation(0.02f, 0.2f, 0.0f);
    q52.setScale(0.045f, 0.008f, 1.0f);
    q52.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q53;
    q53.setTranslation(0.02f, 0.2f, 0.0f);
    q53.setScale(0.008f, 0.045f, 1.0f);
    q53.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q6;
    q6.setTranslation(0.22f, 0.2f, 0.0f);
    q6.setScale(0.05f, 0.05f, 1.0f);
    q6.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q61;
    q61.setTranslation(0.22f, 0.2f, 0.0f);
    q61.setScale(0.04f, 0.04f, 1.0f);
    q61.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square q62;
    q62.setTranslation(0.22f, 0.2f, 0.0f);
    q62.setScale(0.045f, 0.008f, 1.0f);
    q62.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q63;
    q63.setTranslation(0.22f, 0.2f, 0.0f);
    q63.setScale(0.008f, 0.045f, 1.0f);
    q63.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q7;
    q7.setTranslation(0.02f, 0.0f, 0.0f);
    q7.setScale(0.05f, 0.05f, 1.0f);
    q7.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q71;
    q71.setTranslation(0.02f, 0.0f, 0.0f);
    q71.setScale(0.04f, 0.04f, 1.0f);
    q71.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square q72;
    q72.setTranslation(0.02f, 0.0f, 0.0f);
    q72.setScale(0.045f, 0.008f, 1.0f);
    q72.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q73;
    q73.setTranslation(0.02f, 0.0f, 0.0f);
    q73.setScale(0.008f, 0.045f, 1.0f);
    q73.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q8;
    q8.setTranslation(0.22f, 0.0f, 0.0f);
    q8.setScale(0.05f, 0.05f, 1.0f);
    q8.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q81;
    q81.setTranslation(0.22f, 0.0f, 0.0f);
    q81.setScale(0.04f, 0.04f, 1.0f);
    q81.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square q82;
    q82.setTranslation(0.22f, 0.0f, 0.0f);
    q82.setScale(0.045f, 0.008f, 1.0f);
    q82.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square q83;
    q83.setTranslation(0.22f, 0.0f, 0.0f);
    q83.setScale(0.008f, 0.045f, 1.0f);
    q83.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    // Pintu
    Square q9;
    q9.setTranslation(0.12f, -0.28f, 0.0f);
    q9.setScale(0.1f, 0.12f, 1.0f);
    q9.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    // Gedung 4
    Square x1;
    x1.setTranslation(-0.1f, 0.0f, 0.0f);
    x1.setScale(0.2f, 0.4f, 1.0f);
    x1.setColor(glm::vec4(0.58, 0.62, 0.549, 1.0));

    Square x2;
    x2.setTranslation(-0.2f, 0.0f, 0.0f);
    x2.setScale(0.06f, 0.35f, 1.0f);
    x2.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square x3;
    x3.setTranslation(0.0f, 0.0f, 0.0f);
    x3.setScale(0.06f, 0.35f, 1.0f);
    x3.setColor(glm::vec4(0.92, 0.93, 0.96, 1.0));

    Square x21;
    x21.setTranslation(-0.2f, 0.0f, 0.0f);
    x21.setScale(0.04f, 0.33f, 1.0f);
    x21.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    Square x31;
    x31.setTranslation(0.0f, 0.0f, 0.0f);
    x31.setScale(0.04f, 0.33f, 1.0f);
    x31.setColor(glm::vec4(0.062, 0.25, 0.44, 1.0));

    // Tanah
    Square t;
    t.setTranslation(0.0f, -0.44f, 0.0f);
    //t.setScale(0.1f, 0.1f, 1.0f);
    t.setScale(1.0f, 0.04f, 1.0f);
    //t.setRotation(180.0f, glm::vec3(0.4f, 0.1f, 0.0f));
    t.setColor(glm::vec4(0.33, 0.30, 0.28, 1.0));

    string vertexString = readFile("vertex.vert");
    string fragmentString = readFile("fragment.frag");

    const char* vertexChar = vertexString.c_str();
    const char* fragmentChar = fragmentString.c_str();

    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
    unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(vertexShader, 1, &vertexChar, NULL);
    glShaderSource(fragmentShader, 1, &fragmentChar, NULL);

    glCompileShader(vertexShader);
    glCompileShader(fragmentShader);

    unsigned int program = glCreateProgram();
    glAttachShader(program, vertexShader);
    glAttachShader(program, fragmentShader);
    glLinkProgram(program);

    GLint uColor = glGetUniformLocation(program, "uColor");
    GLint uMat4x4 = glGetUniformLocation(program, "transformationMat4x4");

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        currentTime = glfwGetTime();
        deltaTime = (currentTime - lastTime) * speedUp;
        lastTime = currentTime;

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(program);

        glUniform4fv(uColor, 1, &s1.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s1.getTransformationMat4x4()[0][0]);
        s1.draw();

        glUniform4fv(uColor, 1, &s2.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s2.getTransformationMat4x4()[0][0]);
        s2.draw();

        glUniform4fv(uColor, 1, &s3.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s3.getTransformationMat4x4()[0][0]);
        s3.draw();

        glUniform4fv(uColor, 1, &s4.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s4.getTransformationMat4x4()[0][0]);
        s4.draw();

        glUniform4fv(uColor, 1, &s5.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s5.getTransformationMat4x4()[0][0]);
        s5.draw();

        glUniform4fv(uColor, 1, &s6.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s6.getTransformationMat4x4()[0][0]);
        s6.draw();

        glUniform4fv(uColor, 1, &s7.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s7.getTransformationMat4x4()[0][0]);
        s7.draw();

        glUniform4fv(uColor, 1, &s10.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s10.getTransformationMat4x4()[0][0]);
        s10.draw();

        glUniform4fv(uColor, 1, &s11.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s11.getTransformationMat4x4()[0][0]);
        s11.draw();

        glUniform4fv(uColor, 1, &s9.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s9.getTransformationMat4x4()[0][0]);
        s9.draw();

        glUniform4fv(uColor, 1, &s8.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &s8.getTransformationMat4x4()[0][0]);
        s8.draw();

        // Gedung 2
        glUniform4fv(uColor, 1, &a1.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a1.getTransformationMat4x4()[0][0]);
        a1.draw();

        glUniform4fv(uColor, 1, &a2.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a2.getTransformationMat4x4()[0][0]);
        a2.draw();

        glUniform4fv(uColor, 1, &a3.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a3.getTransformationMat4x4()[0][0]);
        a3.draw();

        glUniform4fv(uColor, 1, &a4.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a4.getTransformationMat4x4()[0][0]);
        a4.draw();

        glUniform4fv(uColor, 1, &a5.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a5.getTransformationMat4x4()[0][0]);
        a5.draw();

        glUniform4fv(uColor, 1, &a6.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a6.getTransformationMat4x4()[0][0]);
        a6.draw();

        glUniform4fv(uColor, 1, &a7.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a7.getTransformationMat4x4()[0][0]);
        a7.draw();

        glUniform4fv(uColor, 1, &a8.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a8.getTransformationMat4x4()[0][0]);
        a8.draw();

        glUniform4fv(uColor, 1, &a9.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a9.getTransformationMat4x4()[0][0]);
        a9.draw();

        glUniform4fv(uColor, 1, &a10.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a10.getTransformationMat4x4()[0][0]);
        a10.draw();

        glUniform4fv(uColor, 1, &a11.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a11.getTransformationMat4x4()[0][0]);
        a11.draw();

        glUniform4fv(uColor, 1, &a12.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a12.getTransformationMat4x4()[0][0]);
        a12.draw();

        glUniform4fv(uColor, 1, &a13.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a13.getTransformationMat4x4()[0][0]);
        a13.draw();

        glUniform4fv(uColor, 1, &a14.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a14.getTransformationMat4x4()[0][0]);
        a14.draw();

        glUniform4fv(uColor, 1, &a15.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a15.getTransformationMat4x4()[0][0]);
        a15.draw();

        glUniform4fv(uColor, 1, &a16.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a16.getTransformationMat4x4()[0][0]);
        a16.draw();

        glUniform4fv(uColor, 1, &a17.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a17.getTransformationMat4x4()[0][0]);
        a17.draw();

        glUniform4fv(uColor, 1, &a18.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a18.getTransformationMat4x4()[0][0]);
        a18.draw();

        glUniform4fv(uColor, 1, &a19.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &a19.getTransformationMat4x4()[0][0]);
        a19.draw();

        // Gedung 4
        glUniform4fv(uColor, 1, &x1.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &x1.getTransformationMat4x4()[0][0]);
        x1.draw();

        glUniform4fv(uColor, 1, &x2.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &x2.getTransformationMat4x4()[0][0]);
        x2.draw();

        glUniform4fv(uColor, 1, &x3.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &x3.getTransformationMat4x4()[0][0]);
        x3.draw();

        glUniform4fv(uColor, 1, &x21.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &x21.getTransformationMat4x4()[0][0]);
        x21.draw();

        glUniform4fv(uColor, 1, &x31.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &x31.getTransformationMat4x4()[0][0]);
        x31.draw();

        // Gedung 3
        glUniform4fv(uColor, 1, &q1.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q1.getTransformationMat4x4()[0][0]);
        q1.draw();

        glUniform4fv(uColor, 1, &q2.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q2.getTransformationMat4x4()[0][0]);
        q2.draw();

        glUniform4fv(uColor, 1, &q3.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q3.getTransformationMat4x4()[0][0]);
        q3.draw();

        glUniform4fv(uColor, 1, &q4.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q4.getTransformationMat4x4()[0][0]);
        q4.draw();

        glUniform4fv(uColor, 1, &q5.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q5.getTransformationMat4x4()[0][0]);
        q5.draw();

        glUniform4fv(uColor, 1, &q51.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q51.getTransformationMat4x4()[0][0]);
        q51.draw();

        glUniform4fv(uColor, 1, &q52.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q52.getTransformationMat4x4()[0][0]);
        q52.draw();

        glUniform4fv(uColor, 1, &q53.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q53.getTransformationMat4x4()[0][0]);
        q53.draw();

        glUniform4fv(uColor, 1, &q6.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q6.getTransformationMat4x4()[0][0]);
        q6.draw();

        glUniform4fv(uColor, 1, &q61.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q61.getTransformationMat4x4()[0][0]);
        q61.draw();

        glUniform4fv(uColor, 1, &q62.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q62.getTransformationMat4x4()[0][0]);
        q62.draw();

        glUniform4fv(uColor, 1, &q63.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q63.getTransformationMat4x4()[0][0]);
        q63.draw();

        glUniform4fv(uColor, 1, &q7.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q7.getTransformationMat4x4()[0][0]);
        q7.draw();

        glUniform4fv(uColor, 1, &q71.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q71.getTransformationMat4x4()[0][0]);
        q71.draw();

        glUniform4fv(uColor, 1, &q72.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q72.getTransformationMat4x4()[0][0]);
        q72.draw();

        glUniform4fv(uColor, 1, &q73.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q73.getTransformationMat4x4()[0][0]);
        q73.draw();

        glUniform4fv(uColor, 1, &q8.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q8.getTransformationMat4x4()[0][0]);
        q8.draw();

        glUniform4fv(uColor, 1, &q81.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q81.getTransformationMat4x4()[0][0]);
        q81.draw();

        glUniform4fv(uColor, 1, &q82.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q82.getTransformationMat4x4()[0][0]);
        q82.draw();

        glUniform4fv(uColor, 1, &q83.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q83.getTransformationMat4x4()[0][0]);
        q83.draw();

        glUniform4fv(uColor, 1, &q9.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &q9.getTransformationMat4x4()[0][0]);
        q9.draw();

        glUniform4fv(uColor, 1, &t.getColor()[0]);
        glUniformMatrix4fv(uMat4x4, 1, GL_FALSE, &t.getTransformationMat4x4()[0][0]);
        t.draw();



        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}