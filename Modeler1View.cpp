#include "pch.h"
#include "Modeler1View.h"
#include "MainFrm.h"

void CModeler1View::LogDebug(CString strMessage)
{
	((CMainFrame*)AfxGetMainWnd())->LogDebug(strMessage);
}