#if !defined(AFX_PROBE_H__BE9AF29D_7054_4741_AE64_A2BDB78D4C9C__INCLUDED_)
#define AFX_PROBE_H__BE9AF29D_7054_4741_AE64_A2BDB78D4C9C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CProbe wrapper class

class CProbe : public COleDispatchDriver
{
public:
	CProbe() {}		// Calls COleDispatchDriver default constructor
	CProbe(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CProbe(const CProbe& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	float GetX();
	float GetY();
	float GetZ();
	float GetFlckrJEITA();
	long GetNumber();
	CString GetId();
	void SetId(LPCTSTR lpszNewValue);
	CString GetSerialNO();
	float GetLv();
	float GetUd();
	float GetVd();
	long GetT();
	float GetDEUser();
	float GetFlckrFMA();
	float GetSy();
	float GetSx();
	float GetDuv();
	float GetUsUser();
	float GetVsUser();
	float GetLsUser();
	float GetLvfL();
	float GetR();
	float GetG();
	float GetB();
	long GetRd();
	long GetRad();
	long GetRfma();
	long GetRjeita();
	float GetSpectrum(long Frequency);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROBE_H__BE9AF29D_7054_4741_AE64_A2BDB78D4C9C__INCLUDED_)
