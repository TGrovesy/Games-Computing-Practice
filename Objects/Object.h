#pragma once
#include <string>
#include <glm/glm.hpp>
class Object
{
public:
	Object();
	virtual ~Object();

	virtual void Update(float dt) = 0;
	virtual void Draw() = 0;

	glm::mat4 GetWorldMatrix() const;
	glm::vec3 GetPosition() const { return position; }
	glm::vec3 GetScale() const { return scale; }
	glm::vec3 GetRotationAxis() { return rotationAxis; }
	float GetRotationAngle() { return rotationAngleDegrees; }
	std::string GetName() const { return name; }

	void SetPosition(glm::vec3 position) { position = position; }
	void SetScale(glm::vec3 scale) { scale = scale; }
	void SetRotation(glm::vec3 axis, float angleDegrees);
	void SetMass(float newMass) { mass = newMass; }

protected:
	std::string name;

	glm::vec3 position;
	glm::vec3 scale;
	glm::vec3 rotationAxis;
	float rotationAngleDegrees;
	
	//physics
	float mass;
	glm::vec3 velocity;
};

