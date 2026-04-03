#include "stdafx.h"
#include "..\Minecraft.World\Mth.h"
#include "WatcherModel.h"
#include "ModelPart.h"

void WatcherModel::_init(float g)
{
    head = new ModelPart(this, 0, 0);
    head->addBox(-4, - 8, -4, 8, 8, 8, g);
    head->setPos(0, 24, 0);

	head->compile(1.0f/16.0f);
}

WatcherModel::WatcherModel() : Model()
{
	_init(0);
}

WatcherModel::WatcherModel(float g) : Model()
{
	_init(g);
}

void WatcherModel::render(shared_ptr<Entity> entity, float time, float r, float bob, float yRot, float xRot, float scale, bool usecompiled)
{
    setupAnim(time, r, bob, yRot, xRot, scale, entity);

    head->render(scale, usecompiled);
}

void WatcherModel::setupAnim(float time, float r, float bob, float yRot, float xRot, float scale, shared_ptr<Entity> entity, unsigned int uiBitmaskOverrideAnim)
{
    head->yRot = yRot / (float) (180 / PI);
}