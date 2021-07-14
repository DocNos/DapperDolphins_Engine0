//-----------------------------------------------------------------------------
//
// File Name:	Skybox.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include "main.h"

class Skybox
{
public:
	Skybox();
	Skybox(std::vector<std::string> faceLocations);
	~Skybox();

	void DrawSkybox(glm::mat4 viewMatrix, glm::mat4 projectionMatrix);

private:

	Mesh* skyMesh;
	Shader* skyShader;

	GLuint textureId;
	GLuint uniformProjection;
	GLuint uniformView;

};

