#include "stdafx.h"
#include "com.mojang.nbt.h"
#include "net.minecraft.stats.h"
#include "net.minecraft.world.level.tile.h"
#include "net.minecraft.world.phys.h"
#include "net.minecraft.world.level.h"
#include "net.minecraft.world.item.h"
#include "net.minecraft.world.entity.h"
#include "net.minecraft.world.entity.ai.attributes.h"
#include "net.minecraft.world.entity.ai.goal.h"
#include "net.minecraft.world.entity.ai.navigation.h"
#include "net.minecraft.world.entity.item.h"
#include "net.minecraft.world.entity.monster.h"
#include "net.minecraft.world.entity.player.h"
#include "net.minecraft.world.entity.global.h"
#include "Watcher.h"
#include "..\Minecraft.Client\Textures.h"
#include "MobCategory.h"



Watcher::Watcher(Level *level) : Monster( level )
{
	this->defineSynchedData();
	registerAttributes();
	setHealth(getMaxHealth());

	setSize(0.6f, 0.6f);

	getNavigation()->setAvoidWater(true);
	goalSelector.addGoal(0, new FloatGoal(this));
	goalSelector.addGoal(7, new LookAtPlayerGoal(this, typeid(Player), 32));
	goalSelector.addGoal(8, new RandomLookAroundGoal(this));
}

bool Watcher::useNewAi()
{
	return true;
}

void Watcher::registerAttributes()
{
	Monster::registerAttributes();

	getAttribute(SharedMonsterAttributes::MAX_HEALTH)->setBaseValue(10);
	getAttribute(SharedMonsterAttributes::MOVEMENT_SPEED)->setBaseValue(0.0f);
}

void Watcher::newServerAiStep()
{
	Monster::newServerAiStep();
}

int Watcher::getDeathLoot() 
{
	return Item::enderPearl_Id;
}

void Watcher::dropDeathLoot(bool wasKilledByPlayer, int playerBonusLevel)
{
	int count = random->nextInt(2 + playerBonusLevel);
	for (int i = 0; i < count; i++)
	{
		spawnAtLocation(Item::enderPearl_Id, 1);
	}
}

void Watcher::dropRareDeathLoot(int rareLootLevel)
{
	spawnAtLocation(Item::eyeOfEnder_Id, 1);
}

bool Watcher::removeWhenFarAway()
{
	return true;
}