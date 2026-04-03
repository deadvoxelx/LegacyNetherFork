#pragma once
#include "MobRenderer.h"

class WatcherRenderer : public MobRenderer
{
private:
	static ResourceLocation WATCHER_LOCATION;

public:
	WatcherRenderer();

	virtual void render(shared_ptr<Entity> _mob, double x, double y, double z, float rot, float a);
	virtual ResourceLocation *getTextureLocation(shared_ptr<Entity> mob);
};