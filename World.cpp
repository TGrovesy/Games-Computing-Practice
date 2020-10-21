#include "World.h"
#include "Cube.h"

World* World::instance;

Cube* cube;

World::World() {
	instance = this;
	cube = new Cube(glm::vec3(64, 64, 0), glm::vec3(100.f));
}

World::~World() {
	//TODO: delete all objects in world
}


void World::Draw() {
	cube->Draw();
}

void World::Update(float dt) {
	cube->Update(dt);

}
