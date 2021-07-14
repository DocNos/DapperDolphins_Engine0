//-----------------------------------------------------------------------------
//
// File Name:	Mesh.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include <GL\glew.h>

class Mesh
{
public:
	Mesh();
	~Mesh();

	void CreateMesh(GLfloat *vertices, unsigned int *indices, unsigned int numOfVertices, unsigned int numOfIndices);
	void RenderMesh();
	void ClearMesh();

private:
	//VAO = Vertex Array Object
	//VBO = Vertex Buffer Object
	//IBO = Index Buffer Object
	GLuint VAO, VBO, IBO;
	GLsizei indexCount;
};

