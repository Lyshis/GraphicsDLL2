#pragma once

#include "Element.h"
#include "ElementFactory.h"

class CElementManager
{
public:
	DECLARE_SERIAL(CElementManager);
	CElementManager();
	virtual ~CElementManager(void);

// Attributes
public:
	// Current working object
	std::wstring m_objectId;
	CPoint m_lastPoint;
	COLORREF m_paperColor;
	// Page size in logical coordinates
	CSize m_size;
	// Cursor hanlde
	int m_nDragHandle;
	// Zoom float factor (default 1.0f)
	float m_fZoomFactor;

// Attributes Current UI interaction members
public:
	// Is in drawing...
	BOOL m_bDrawing;
	// Current selected drawing tool
	ElementType m_type;
	// Current selected shape type from Ribbon
	ShapeType m_shapeType;

// Managing Zoom Operations
public:
	void Zoom(CModeler1View* pView);
	void ZoomIn(CModeler1View* pView);
	void ZoomOut(CModeler1View* pView);

// UI Handlers
public:
	virtual void OnLButtonDown(CModeler1View* pView, UINT nFlags, const CPoint& cpoint);
	virtual void OnLButtonDblClk(CModeler1View* pView, UINT nFlags, const CPoint& cpoint);
	virtual void OnLButtonUp(CModeler1View* pView, UINT nFlags, const CPoint& cpoint);
	virtual void OnMouseMove(CModeler1View* pView, UINT nFlags, const CPoint& cpoint);

// Operations
public:
	void ConnectToPropertyGrid();
};