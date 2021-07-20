#pragma once
#include "main.h"

class GraphicObject: public BaseObject
{
public:
	
	
private:
	// indices_;
	// vertices_;
	// normal_;
	
};
using GraphicPtr = GraphicObject*;

class MeshGraphic: public GraphicObject
{


	
};
using MeshGraphicPtr = MeshGraphic*;

class TextureGraphic: public GraphicObject
{

	
};
using TextureGraphicPtr = TextureGraphic*;

class MaterialGraphic: public GraphicObject
{

	
};
using MaterialGraphicPtr = MaterialGraphic*;