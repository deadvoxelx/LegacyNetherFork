#pragma once
#include "Feature.h"

class EndGatewayFeature : public Feature
{
public:
    EndGatewayFeature(int blockId);

    virtual bool place(Level *level, Random *random, int x, int y, int z);
};