#pragma once

#include "Scene.h"
#include "InputManager.h"

class Engine;
class EntityManager;
class Entity;

class GameScene : public Scene {

public:
	// Constructor
	GameScene(Engine* engine);
	// Destructor
	~GameScene();

	void restart(void);
	void render(void);
	void update(void);

	enum groupLabels : std::size_t
	{
		groupMap,
		groupPlayers,
		groupColliders,
		groupProjectiles
	};

private:
	float fade;

	float currentTime;
	EntityManager* entityManager;
	InputManager* input;
	Entity* player;
};