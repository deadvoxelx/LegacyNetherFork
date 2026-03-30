#pragma once
#include "HumanoidMobRenderer.h"

class Pigman;

class PigmanRenderer : public HumanoidMobRenderer
{
private:
	static ResourceLocation PIGMAN_LOCATION;

public:
	PigmanRenderer();

	virtual void render(shared_ptr<Entity> _mob, double x, double y, double z, float rot, float a);
	virtual ResourceLocation *getTextureLocation(shared_ptr<Entity> mob);
};