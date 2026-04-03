#include "stdafx.h"
#include "TheEndBiome.h"
#include "TheEndBiomeDecorator.h"
#include "net.minecraft.world.entity.monster.h"

TheEndBiome::TheEndBiome(int id) : Biome(id)
{
	enemies.clear();
	friendlies.clear();
	friendlies_chicken.clear();	// 4J added
	friendlies_wolf.clear(); 	// 4J added
	waterFriendlies.clear();
	ambientFriendlies.clear();

	enemies.push_back(new MobSpawnerData(eTYPE_WATCHER, 7, 1, 1));
	enemies.push_back(new MobSpawnerData(eTYPE_ENDERMAN, 10, 4, 4));

	decorator = new TheEndBiomeDecorator(this);
}

// 4J Stu - Don't need override
//int TheEndBiome::getSkyColor(float temp)
//{
//	return 0x000000;
//}
