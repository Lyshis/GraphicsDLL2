#pragma once

#include "Element.h"

class CFactory
{
public:
	static shared_ptr<CElement> CreateElementOfType(ElementType type, ShapeType shapeType);
	// counter of objects
	static int g_counter;
};

class CGuid
{
public:
	CGuid();
	virtual ~CGuid(void);

public:
	CString ToString();

private:
	UUID m_uuid;

};