// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "_xycontrol.h"

/////////////////////////////////////////////////////////////////////////////
// C_xyControl

IMPLEMENT_DYNCREATE(C_xyControl, CWnd)

/////////////////////////////////////////////////////////////////////////////
// C_xyControl properties

/////////////////////////////////////////////////////////////////////////////
// C_xyControl operations

void C_xyControl::BateiSet()
{
	InvokeHelper(0x60030005, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_xyControl::KokutaiSet()
{
	InvokeHelper(0x60030008, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_xyControl::SetRefProbe(LPDISPATCH* newValue)
{
	static BYTE parms[] =
		VTS_PDISPATCH;
	InvokeHelper(0x68030001, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

void C_xyControl::SetXYGraphData()
{
	InvokeHelper(0x6003001a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_xyControl::SetRefCa(LPDISPATCH* newValue)
{
	static BYTE parms[] =
		VTS_PDISPATCH;
	InvokeHelper(0x68030000, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

void C_xyControl::SetXYData(short ll, float xx, float yy)
{
	static BYTE parms[] =
		VTS_I2 VTS_R4 VTS_R4;
	InvokeHelper(0x6003001b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ll, xx, yy);
}

void C_xyControl::ClearData()
{
	InvokeHelper(0x6003001c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_xyControl::SetVisible(long* lIndex)
{
	static BYTE parms[] =
		VTS_PI4;
	InvokeHelper(0x6003001d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 lIndex);
}

void C_xyControl::SetVisibleAll(BOOL* bFlag)
{
	static BYTE parms[] =
		VTS_PBOOL;
	InvokeHelper(0x6003001e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bFlag);
}

void C_xyControl::AddXYGraphData(long* lIndex)
{
	static BYTE parms[] =
		VTS_PI4;
	InvokeHelper(0x6003001f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 lIndex);
}
