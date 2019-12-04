#include "pch.h"
#include "ElementManager.h"
#include "DrawingElements.h"
#include "MainFrm.h"

CElementManager::CElementManager()
{
	m_objectId = L"";
	m_lastPoint = CPoint(0, 0);
	m_paperColor = RGB(255, 255, 255); //RGB(242, 242, 200); //RGB(255, 255, 255); //RGB(188, 251, 255);
	m_size = CSize(1500, 1500);

	// Initialize Current UI interaction members
	m_bDrawing = FALSE;
	// Current selected drawing tool = SELECT
	m_type = ElementType::type_select;
	// Current selected shape type from Ribbon = type_unknown
	m_shapeType = ShapeType::unknown;
	m_nDragHandle = 1;
	m_fZoomFactor = 1.0f;

	// Initiate the connection with the Property Window
	ConnectToPropertyGrid();
}

void CElementManager::ConnectToPropertyGrid()
{
	CWnd* p = AfxGetMainWnd();
	CMainFrame* pmf = (CMainFrame*)p;
	pmf->SetManager(this);
}