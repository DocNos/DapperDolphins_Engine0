//Made by Adam Tackett
#pragma once

#include <stdio.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class GLwindow
{
public:
	GLwindow();
	GLwindow(GLint windowWidth, GLint windowHeight);
	~GLwindow();

	int Initialise();

	GLfloat GetBufferWidth() { return bufferWidth; };
	GLfloat GetBufferHeight() { return bufferHeight; };

	bool GetShouldClose() { return glfwWindowShouldClose(mainWindow); };

	bool* GetKeys() { return keys; };
	GLfloat getXChange();
	GLfloat getYchange();

	void swapBuffers() { glfwSwapBuffers(mainWindow); };

private:
	GLFWwindow* mainWindow;
	GLint width, height;
	GLint bufferWidth, bufferHeight;

	bool keys[1024];

	GLfloat lastX;
	GLfloat lastY;
	GLfloat xChange;
	GLfloat yChange;
	bool mouseFirstMoved;

	void createCallbacks();
	static void handleKeys(GLFWwindow* window, int key, int code, int action, int mode);
	static void handleMouse(GLFWwindow* window, double xPos, double yPos);
};

