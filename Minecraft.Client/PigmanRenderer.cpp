#include "stdafx.h"
#include "PigmanRenderer.h"
#include "..\Minecraft.World\net.minecraft.world.entity.animal.h"
#include "HumanoidModel.h"

ResourceLocation PigmanRenderer::PIGMAN_LOCATION = ResourceLocation(TN_MOB_PIGMAN);

PigmanRenderer::PigmanRenderer() : HumanoidMobRenderer(new HumanoidModel(), .5f, 1.0f)
{
}

void PigmanRenderer::render(shared_ptr<Entity> _mob, double x, double y, double z, float rot, float a)
{
	MobRenderer::render(_mob, x, y, z, rot, a);
}

ResourceLocation *PigmanRenderer::getTextureLocation(shared_ptr<Entity> mob)
{
    return &PIGMAN_LOCATION;
}