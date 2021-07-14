//-----------------------------------------------------------------------------
//
// File Name:	Texture.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once
#include "main.h"

class Texture
{
public: 
	Texture();
	Texture(const char* fileLoc);
	~Texture();

	bool LoadTexture();
	bool LoadTextureA();

	void UseTexture();
	void ClearTexture();

private:
	GLuint textureID;
	int width, height, bitDepth;

	const char* fileLocation;
};

