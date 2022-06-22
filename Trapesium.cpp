#include "Trapesium.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>

unsigned int Trapesium::vertexBuffer = 0;
unsigned int Trapesium::indexBuffer = 0;

void Trapesium::setColor(glm::vec4 newColor)
{
    color = glm::vec4(newColor);
}

glm::vec4 Trapesium::getColor()
{
    return color;
}

glm::mat4x4 Trapesium::getTransformationMat4x4()
{
    return transformationMat4x4;
}

void Trapesium::setTranslation(glm::vec3 newTranslation)
{
    transformationMat4x4 = glm::translate(transformationMat4x4, newTranslation);
}

void Trapesium::setTranslation(float transX, float transY, float transZ)
{
    setTranslation(glm::vec3(transX, transY, transZ));
}

void Trapesium::setRotation(float angle, glm::vec3 axis)
{
    transformationMat4x4 = glm::rotate(transformationMat4x4, angle, axis);
}

void Trapesium::setScale(glm::vec3 newScale)
{
    transformationMat4x4 = glm::scale(transformationMat4x4, newScale);
}

void Trapesium::setScale(float scaleX, float scaleY, float scaleZ)
{
    setScale(glm::vec3(scaleX, scaleY, scaleZ));
}

Trapesium::Trapesium()
{
    glGenBuffers(1, &vertexBuffer);

    glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 24, vertices, GL_STATIC_DRAW);

    glGenBuffers(1, &indexBuffer);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * 12, indexArr, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, 0);

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, (void*)(2 * sizeof(float)));
}

void Trapesium::draw()
{
    glDrawElements(GL_TRIANGLES, 12, GL_UNSIGNED_INT, nullptr);
}
