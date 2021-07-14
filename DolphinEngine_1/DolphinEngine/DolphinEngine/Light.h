//-----------------------------------------------------------------------------
//
// File Name:	Light.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include "main.h"



class Light
{
public:
	Light();
	Light(GLfloat shadowWidth, GLfloat shadowHeight,
		  GLfloat red, GLfloat green, GLfloat blue, 
		  GLfloat aIntensity, GLfloat dIntensity);
	~Light();

	ShadowMap* GetShadowMap() { return shadowMap; }

protected: // can be accessed by sub-classes
	glm::vec3 colour;
	GLfloat ambientIntensity;
	GLfloat diffuseIntensity;

	glm::mat4 lightProj;

	ShadowMap* shadowMap;
};

