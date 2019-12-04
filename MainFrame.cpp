#include "pch.h"
#include "MainFrm.h"

void CMainFrame::SetManager(CElementManager* pManager)
{
	ptrManager = pManager;
}

void CMainFrame::LogDebug(CString message)
{
	cout << message;
}