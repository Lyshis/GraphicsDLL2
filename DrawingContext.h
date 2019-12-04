#pragma once
#include "Element.h"

class CDrawingContext
{
public:
	// Drawing Attributes are built in the ctor
	CDrawingContext(shared_ptr<CElement> pElement);
	virtual ~CDrawingContext(void);

public:
	Graphics* GetGraphics() { return m_pGraphics; }

public:
	Graphics* m_pGraphics;
};