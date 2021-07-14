//-----------------------------------------------------------------------------
//
// File Name:	OmniShadowMap.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include "main.h"

class OmniShadowMap :
    public ShadowMap
{
public:
	OmniShadowMap();
	~OmniShadowMap();

	bool Init(unsigned int width, unsigned int height);
	void Write();
	void Read(GLenum textureUnit);

private:
};

