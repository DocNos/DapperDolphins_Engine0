//-----------------------------------------------------------------------------
//
// File Name:	Camera.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include "main.h"
class Camera
{
public:
	Camera();
	~Camera();

	Camera(glm::vec3 startPosition, glm::vec3 startUp, GLfloat startYaw, 
		   GLfloat startPitch, GLfloat startMoveSpeed, GLfloat startTurnSpeed);

	void keyControl(bool* keys, GLfloat deltaTime);
	void mouseControl(GLfloat xChange, GLfloat yChange);

	glm::mat4 calculateViewMatrix();

	glm::vec3 getCameraPosition();
	glm::vec3 getCameraDirection();

private:
	glm::vec3 position;
	glm::vec3 front;
	glm::vec3 up;
	glm::vec3 right;
	glm::vec3 worldUp;

	GLfloat yaw;	//left and right x axis
	GLfloat pitch;	//up and down y axis

	GLfloat moveSpeed;
	GLfloat turnSpeed;

	void update();
};

