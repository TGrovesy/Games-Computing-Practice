#include "Cube.h"
#include<of3dGraphics.h>

Cube::Cube(glm::vec3 position, glm::vec3 scale) : position(position), scale(scale) {

}

Cube::~Cube() {

}

void Cube::Draw() {
	
	ofDrawBox(this->position, this->scale.x, this->scale.y, this->scale.z);
}

void Cube::Update(float dt) {
	position.x += 5;
}