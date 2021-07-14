//-----------------------------------------------------------------------------
//
// File Name:	Model.h
// Author(s):	Adam Tackett
//
// Copyright ?2021 DigiPen (USA) Corporation.
//
//-----------------------------------------------------------------------------

#pragma once

#include "main.h"



class Model
{
public:
	Model();
	~Model();

	void LoadModel(const std::string& filename);
	void RenderModel();
	void ClearModel();

private:

	void LoadNode(aiNode *node, const aiScene *scene);
	void LoadMesh(aiMesh* mesh, const aiScene* scene);
	void LoadMaterials(const aiScene* scene);

	std::vector<Mesh*> meshList;
	std::vector<Texture*> textureList;
	std::vector<unsigned int> meshToTex;

};

