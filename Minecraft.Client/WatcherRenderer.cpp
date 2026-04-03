#include "stdafx.h"
#include "WatcherRenderer.h"
#include "WatcherModel.h"
#include "..\Minecraft.World\net.minecraft.world.entity.animal.h"

ResourceLocation WatcherRenderer::WATCHER_LOCATION = ResourceLocation(TN_MOB_WATCHER);

WatcherRenderer::WatcherRenderer() : MobRenderer(new WatcherModel(), 0.3f)
{
}

void WatcherRenderer::render(shared_ptr<Entity> _mob, double x, double y, double z, float rot, float a)
{
	MobRenderer::render(_mob, x, y, z, rot, a);
}

ResourceLocation *WatcherRenderer::getTextureLocation(shared_ptr<Entity> mob)
{
    return &WATCHER_LOCATION;
}