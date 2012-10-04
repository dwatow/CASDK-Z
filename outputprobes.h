#if !defined(AFX_OUTPUTPROBES_H__15F8454C_6B5F_42C0_B2A3_40E7D3CCA9F8__INCLUDED_)
#define AFX_OUTPUTPROBES_H__15F8454C_6B5F_42C0_B2A3_40E7D3CCA9F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CProbe;

/////////////////////////////////////////////////////////////////////////////
// COutputProbes wrapper class

class COutputProbes : public COleDispatchDriver
{
public:
	COutputProbes() {}		// Calls COleDispatchDriver default constructor
	COutputProbes(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	COutputProbes(const COutputProbes& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CProbe GetItem(const VARIANT& ProbeIndexVal);
	long GetCount();
	void Add(LPCTSTR ProbeIDVal);
	CProbe GetItemOfNumber(long ProbeNumberVal);
	void AddAll();
	COutputProbes Clone();
	void RemoveAll();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OUTPUTPROBES_H__15F8454C_6B5F_42C0_B2A3_40E7D3CCA9F8__INCLUDED_)
