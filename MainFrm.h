#pragma once
#include "Resource.h"
#include "Element.h"

class CMainFrame
{
// Operations
public:
	void SetManager(CElementManager* pManager);
	void LogDebug(CString message);
};