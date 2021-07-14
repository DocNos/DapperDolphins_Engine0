//-----------------------------------------------------------------------------
//
// File Name:	DirectionalLight.cpp
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#include "DirectionalLight.h"

DirectionalLight::DirectionalLight() : Light() //calls superclass first
{
	direction = glm::vec3(0.0f, -1.0f, 0.0f);
	lightProj = glm::ortho(-20.0f, 20.0f, -20.0f, 20.0f, 0.1f, 100.0f);
}

DirectionalLight::DirectionalLight(GLfloat shadowWidth, GLfloat shadowHeight,
								   GLfloat red, GLfloat green, GLfloat blue,
								   GLfloat aIntensity, GLfloat dIntensity,
								   GLfloat xDir, GLfloat yDir, GLfloat zDir) : Light(shadowWidth, shadowHeight, red, green, blue, aIntensity, dIntensity)
{
	direction = glm::vec3(xDir, yDir, zDir);
	lightProj = glm::ortho(-20.0f, 20.0f, -20.0f, 20.0f, 0.1f, 100.0f);
}

DirectionalLight::~DirectionalLight()
{
}

void DirectionalLight::UseLight(GLuint ambientIntensityLocation, GLuint ambientColourLocation,
								GLuint diffuseIntensityLocation, GLuint directionLocation)
{
	glUniform3f(ambientColourLocation, colour.x, colour.y, colour.z);
	glUniform1f(ambientIntensityLocation, ambientIntensity);

	glUniform3f(directionLocation, direction.x, direction.y, direction.z);
	glUniform1f(diffuseIntensityLocation, diffuseIntensity);
}

glm::mat4 DirectionalLight::CalculateLightTransform()
{
	return lightProj * glm::lookAt(-direction, glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	// if looking staright up or down need 1.0f as last argument  // glm::vec3(0.0f, 1.0f, 1.0f)
}
