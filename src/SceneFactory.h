#pragma once
#include <string>
#include "Scene.h"

class SceneFactory
{
	public:
	SceneFactory() = default;
	~SceneFactory() = default;
	Scene* CreateScene(const std::string& name, int width, int height);
};