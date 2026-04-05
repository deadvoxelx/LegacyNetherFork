#include "stdafx.h"
#include "EndGatewayTileEntity.h"


shared_ptr<TileEntity> EndGatewayTileEntity::clone()
{
	shared_ptr<EndGatewayTileEntity> result = std::make_shared<EndGatewayTileEntity>();
	TileEntity::clone(result);
	return result;
}