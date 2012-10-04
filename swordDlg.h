// swordDlg.h : header file
//
//{{AFX_INCLUDES()
#include "_xycontrol.h"
#include "_cacontrol.h"
#include "ca200srvr.h"	// Added by ClassView
//}}AFX_INCLUDES

#if !defined(AFX_SWORDDLG_H__7B596D2F_C2F5_4CB5_A496_2ABB227F8E41__INCLUDED_)
#define AFX_SWORDDLG_H__7B596D2F_C2F5_4CB5_A496_2ABB227F8E41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CSwordDlgAutoProxy;

/////////////////////////////////////////////////////////////////////////////
// CSwordDlg dialog

class CSwordDlg : public CDialog
{
	DECLARE_DYNAMIC(CSwordDlg);
	friend class CSwordDlgAutoProxy;

// Construction
public:
	IProbeInfo		m_IProbeInfo;
	long m_lIndex;
	ICas			m_ICas;
	IProbes			m_IProbes;
	IOutputProbes	m_IOutputProbes;
	IProbe			m_IProbe;
	IMemory			m_IMemory;
	ICa200			m_ICa200;
	ICa				m_ICa;
	_ICaEvents      m__ICaEvents;
	CSwordDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CSwordDlg();

// Dialog Data
	//{{AFX_DATA(CSwordDlg)
	enum { IDD = IDD_SWORD_DIALOG };
	CString	m_strduv;
	CString	m_strLv;
	CString	m_strT;
	CString	m_strx;
	CString	m_stry;
	C_xyControl	m_CxyControl;
	C_CaControl	m_CCaControl;
	CString	m_strdisprobe;
	CString	m_fltsyncmode;
	CString	m_longdismode;
	CString	m_longdisdigits;
	CString	m_longaveragingmode;
	CString	m_strcatype;
	CString	m_strcaver;
	CString	m_longnum;
	CString	m_strid;
	CString	m_strportid;
	CString	m_longcalstd;
	CString	m_longcount;
	CString	m_strsx;
	CString	m_strsy;
	CString	m_strprobeid;
	CString	m_strserino;
	CString	m_strz;
	CString	m_strr;
	CString	m_strg;
	CString	m_strb;
	CString	m_longprobenum;
	CString	m_strususer;
	CString	m_strvsuser;
	CString	m_strlsuser;
	CString	m_strdeuser;
	CString	m_strud;
	CString	m_strvd;
	CString	m_strfjeita;
	CString	m_strffma;
	CString	m_strrad;
	CString	m_strrd;
	CString	m_strrfma;
	CString	m_strrjeita;
	CString	m_longchannelno;
	CString	m_strchannelid;
	CString	m_longtypeno;
	CString	m_strtypename;
	CString	m_strRefLv;
	CString	m_strRefSx;
	CString	m_strRefSy;
	CString	m_strAnalogRange1;
	CString	m_strAnalogRange2;
	CString	m_strAnalogRangeFlk;
	CString	m_strRefProbe;
	CString	m_strCalMode;
	CString	m_strCalProb;
	CString	m_strBridUnit;
	CString	m_strFlckrElement;
	CString	m_strFrequency;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSwordDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CSwordDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// Generated message map functions
	//{{AFX_MSG(CSwordDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnMsr();
	afx_msg void OnCal0();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void CatchValue();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SWORDDLG_H__7B596D2F_C2F5_4CB5_A496_2ABB227F8E41__INCLUDED_)
