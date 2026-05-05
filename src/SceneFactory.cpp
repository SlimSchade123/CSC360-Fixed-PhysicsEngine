#include "SceneFactory.h"
#include "VectorScene.h"
#include "SpringScene.h"
#include "TrigonometryScene.h"
#include "PolarScene.h"


Scene* SceneFactory::CreateScene(const std::string& name, int width, int height)
{
    if (name == "Vector")
    {
        return new VectorScene(name, width, height);
    }
    else if (name == "Spring")
    {
        return new SpringScene(name, width, height);
    }
    else if (name == "Trigonometry")
    {
        return new TrigonometryScene(name, width, height);
	}
    else if (name == "Polar")
    {
        return new PolarScene(name, width, height);
	}
    return nullptr;
}
