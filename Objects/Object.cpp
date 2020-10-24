#include"Object.h"
#include<glm/gtc/matrix_transform.hpp>
#include<glm/common.hpp>
#include <iostream>

Object::Object() :name("UNNAMED"), position(0.f), scale(1.f), rotationAxis(0.f, 1.f, 0.f), rotationAngleDegrees(0.0f), mass(1.f), velocity(0.f) {

}

Object::~Object() {
	std::cout << "Deleted " << name << std::endl;
}

void Object::SetRotation(glm::vec3 axis, float angleDegrees) {
	rotationAxis = axis;
	rotationAngleDegrees = angleDegrees;
}

glm::mat4 Object::GetWorldMatrix() const{
	glm::mat4 worldMatrix(1.f);
	glm::mat4 transform = glm::translate(glm::mat4(1.f), position);
	glm::mat4 rotate = glm::rotate(glm::mat4(1.f), glm::radians(rotationAngleDegrees), rotationAxis);
	glm::mat4 scaleing = glm::scale(glm::mat4(1.0f), scale);

	worldMatrix = transform * rotate * scaleing;
	return worldMatrix;
}