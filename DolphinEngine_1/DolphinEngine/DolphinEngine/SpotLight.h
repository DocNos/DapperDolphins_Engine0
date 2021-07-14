//-----------------------------------------------------------------------------
//
// File Name:	SpotLight.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include "main.h"

class SpotLight :
    public PointLight
{
public:
	SpotLight();
	SpotLight(GLuint shadowWidth, GLuint shadowHeight,
			  GLfloat near, GLfloat far,
			  GLfloat red, GLfloat green, GLfloat blue,
			  GLfloat aIntensity, GLfloat dIntensity,
			  GLfloat xPos, GLfloat yPos, GLfloat zPos,
			  GLfloat xDir, GLfloat yDir, GLfloat zDir,
			  GLfloat con, GLfloat lin, GLfloat exp,
			  GLfloat edg);
	~SpotLight();

	void UseLight(GLuint ambientIntensityLocation, GLuint ambientColourLocation,
		GLuint diffuseIntensityLocation, GLuint positionLocation, GLuint directionLocation,
		GLuint constantLocation, GLuint linearLocation, GLuint exponentLocation,
		GLuint edgeLocation);

	void SetFlash(glm::vec3 pos, glm::vec3 dir);

	void Toggle() { isOn = !isOn; };

private:
    glm::vec3 direction;

    GLfloat edge, procEdge;
	bool isOn;
};

