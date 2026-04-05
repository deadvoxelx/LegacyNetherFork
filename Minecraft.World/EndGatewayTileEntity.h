#pragma once
#include "TileEntity.h"

class EndGatewayTileEntity : public TileEntity
{
public:
	eINSTANCEOF GetType() { return eTYPE_ENDGATEWAYTILEENTITY; }
	static TileEntity *create() { return new EndGatewayTileEntity(); }


	shared_ptr<TileEntity> clone();
};