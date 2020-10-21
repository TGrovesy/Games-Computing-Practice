#pragma once
class World
{
public:
	World();
	~World();
	
	static World* GetInstance();

	void Draw();
	void Update(float dt);

private:
	static World* instance;

};

