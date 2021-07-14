//-----------------------------------------------------------------------------
//
// File Name:	ShadowMap.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include "main.h"

class ShadowMap
{
public:
	ShadowMap();
	~ShadowMap();

	virtual bool Init(unsigned int width, unsigned int height);
	
	virtual void Write();
	virtual void Read(GLenum textureUnit);

	GLuint GetShadowWidth() { return shadowWidth; }
	GLuint GetShadowHeight() { return shadowHeight; }

protected:
	//FBO = Frame Buffer Object
	GLuint FBO, shadowMap;
	GLuint shadowWidth, shadowHeight;
};

