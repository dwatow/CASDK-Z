#if !defined(AFX__CACONTROL_H__1C1D32F3_610F_4D65_9670_F7A225118AA2__INCLUDED_)
#define AFX__CACONTROL_H__1C1D32F3_610F_4D65_9670_F7A225118AA2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCa;
class CProbe;
class CMemory;

/////////////////////////////////////////////////////////////////////////////
// C_CaControl wrapper class

class C_CaControl : public CWnd
{
protected:
	DECLARE_DYNCREATE(C_CaControl)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x1f2f52a5, 0xce61, 0x45f1, { 0xb7, 0x37, 0x75, 0xa5, 0x6e, 0xd7, 0x74, 0x22 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void SetRefCa(LPDISPATCH* newValue);
	CCa GetCa();
	void SetRefProbe(LPDISPATCH* newValue);
	CProbe GetProbe();
	void SetRefMemory(LPDISPATCH* newValue);
	CMemory GetMemory();
	void SetStdColor(long* newValue);
	long GetStdColor();
	void SetVGType(BSTR* newValue);
	CString GetVGType();
	void SetVGTiming(BSTR* newValue);
	CString GetVGTiming();
	void SetVGPattern(BSTR* newValue);
	CString GetVGPattern();
	void Load(BSTR* strDataName);
	void Save(BSTR* strDataName);
	void UpdateCaInfo();
	void UpdateMemoryInfo();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__CACONTROL_H__1C1D32F3_610F_4D65_9670_F7A225118AA2__INCLUDED_)
