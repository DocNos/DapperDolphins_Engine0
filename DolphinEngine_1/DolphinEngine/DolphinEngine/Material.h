//-----------------------------------------------------------------------------
//
// File Name:	Material.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include <GL/glew.h>

class Material
{
public:
	Material();
	Material(GLfloat sIntensity, GLfloat shine);
	~Material();

	void UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation);


private:
	GLfloat specularIntensity; //reflectiveness of object
	GLfloat shininess;		   //how smooth surface will be potrayed as
};

