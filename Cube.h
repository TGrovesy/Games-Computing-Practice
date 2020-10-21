#pragma once
#include <glm/glm.hpp>
class Cube
{
public:
	Cube(glm::vec3 pos, glm::vec3 scale = glm::vec3(1.0, 1.0, 1.0));
	~Cube();

	glm::vec3 GetPosition() { return position; }
	glm::vec3 GetScale() { return scale; }

	void Draw();
	void Update(float dt);

private:
	glm::vec3 position;
	glm::vec3 scale;
};

