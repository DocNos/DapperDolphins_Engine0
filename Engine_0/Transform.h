#ifndef TRANSFORM_H
#define TRANSFORM_H
#include "main.h"

class TransformObject: public BaseObject
{
	public:

		TransformObject() : TransformMtx(mtx3(1.f)), isDirty(true)
		{}
		TransformObject(vec3 translation, float rotationDeg);
		TransformObject(mtx3 transform)
		{
			
		};
		void FSM() override;
		void Execute() override;
	
		void setRotationDeg(float rotationDeg);
		void setRotationRad(float rotationRad);
		void setTranslation(vec3 translation);
		void setTranslation(float x, float y, float z);

	


	private:
		mtx3 TransformMtx;
		bool isDirty;
		
	
};
using TransformPtr = TransformObject*;



#endif