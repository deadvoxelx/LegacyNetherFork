#pragma once

using namespace std;

#include "Monster.h"

class Player;

class Watcher : public Monster
{
public:
	eINSTANCEOF GetType() { return eTYPE_WATCHER; }
	static Entity *create(Level *level){ return new Watcher(level); }

public:
	Watcher(Level *level);

	virtual bool useNewAi();

protected:
	virtual void registerAttributes();
	virtual void newServerAiStep();

protected:
	virtual bool removeWhenFarAway();

protected:
	virtual int getDeathLoot();
	virtual void dropDeathLoot(bool wasKilledByPlayer, int playerBonusLevel);
	virtual void dropRareDeathLoot(int rareLootLevel);

};
