#include "NPC.h"

NPC::NPC(Point2D * _location, std::string _name)
:Entity(_location, _name)
{
}

bool NPC::isAlive() const
{
	return true;
}

Entity * NPC::clone() const
{
	return new NPC(*this);
}

type NPC::get() const
{
	return npc;
}
