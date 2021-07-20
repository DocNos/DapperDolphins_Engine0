#ifndef MAIN_H
#define MAIN_H

#define isType(O, T) (typeid(O) == typeid(T))


// Have all necc. includes under this header. Should be only data here. 
#include <string>
#include <vector>
#include <iterator>
#include <typeinfo>


// There shouldn't be so many includes here, include only what you need
#include "Engine.h"
#include "Object.h"
#include "ObjectManager.h"
#include "Cmp.h"
#include "Level.h"
#include "Actor.h"
#include "Interface.h"
#include "Environment.h"
#include "Transform.h"

#include <glm.hpp>
typedef glm::mat3 mtx3;
typedef glm::vec3 vec3;

#endif