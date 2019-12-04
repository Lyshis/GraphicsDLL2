#pragma once
#include "Element.h"

class CLineElement : public CElement
{
	//public:
	//	CLineElement();
	//	virtual ~CLineElement();
};

class CRectangleElement : public CElement
{

};

class CTriangleElement : public CElement
{
	
};

class CArrowRightElement : public CElement
{

};

class CEllipseElement : public CElement
{

};

class CArrowDownElement : public CElement
{

};

class CStarElement : public CElement
{

};

class CParentheseLeftElement : public CElement
{

};

class CParentheseRightElement : public CElement
{

};

class CLineBrokenElement : public CElement
{

};

class CDevelopmentElement : public CElement
{

};

class CImportElement : public CElement
{
public:
	std::shared_ptr<CTypeData> m_TypeData;
};

class CImageElement : public CElement
{

};

class CInfrastructureElement : public CElement
{

};

class CTextElement : public CElement
{

};

class CSimpleTextElement : public CElement
{

};

class CNotImplementedElement : public CElement
{

};

class CConnectableElement : public CElement
{

};