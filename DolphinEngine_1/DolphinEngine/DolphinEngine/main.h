#ifndef MAIN_H
#define MAIN_H

#define isType(O, T) (typeid(O) == typeid(T))
#define STB_IMAGE_IMPLEMENTATION

// Have all necc. includes under this header. Should be only data here. 
#include <string>
#include <vector>
#include <iterator>
#include <typeinfo>

#include "Engine.h"
#include "Object.h"
#include "ObjectManager.h"
#include "Cmp.h"
#include  "Level.h"
#include "Actor.h"
#include "Interface.h"
#include "Environment.h"
#include "Transform.h"
//////////////////
///	Graphics
/////////////////
#include "Mesh.h"
#include "Shader.h"
#include "Camera.h"
#include "Texture.h"
#include "DirectionalLight.h"
#include "PointLight.h"
#include "SpotLight.h"
#include "Material.h"
#include "Model.h"
#include "Skybox.h"
#include "Window.h"
#include "ShadowMap.h"
#include "Light.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "OmniShadowMap.h"
#include "Mesh.h"
#include "Texture.h"

#include "stb_image.h"
/////////////////
/// Libraries
/////////////////
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>

#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <glm.hpp>
#include <gtc\matrix_transform.hpp>
#include <gtc\type_ptr.hpp>
#include "CommonValues.h"




typedef glm::mat3 mtx3;
typedef glm::vec3 vec3;


#endif