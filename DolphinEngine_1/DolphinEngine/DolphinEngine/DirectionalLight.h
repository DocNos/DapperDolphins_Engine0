//-----------------------------------------------------------------------------
//
// File Name:	DirectionalLight.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once
#include "main.h"


class DirectionalLight : public Light
{
public:
	DirectionalLight();
	DirectionalLight(GLfloat shadowWidth, GLfloat shadowHeight,
					 GLfloat red, GLfloat green, GLfloat blue, 
					 GLfloat aIntensity, GLfloat dIntensity,
					 GLfloat xDir, GLfloat yDir, GLfloat zDir);
	~DirectionalLight();

	void UseLight(GLuint ambientIntensityLocation, GLuint ambientColourLocation,
				  GLuint diffuseIntensityLocation, GLuint directionLocation);
	glm::mat4 CalculateLightTransform();

private:
	glm::vec3 direction;
};

