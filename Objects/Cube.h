#pragma once
#include "Object.h"
#include <glm/glm.hpp>
class Cube : public Object
{
public:
	Cube(glm::vec3 pos, glm::vec3 scale = glm::vec3(1.0, 1.0, 1.0));
	~Cube();

	virtual void Update(float deltaTime);
	virtual void Draw();

};

