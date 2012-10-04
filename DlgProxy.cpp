// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "sword.h"
#include "DlgProxy.h"
#include "swordDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSwordDlgAutoProxy

IMPLEMENT_DYNCREATE(CSwordDlgAutoProxy, CCmdTarget)

CSwordDlgAutoProxy::CSwordDlgAutoProxy()
{
	EnableAutomation();
	
	// To keep the application running as long as an automation 
	//	object is active, the constructor calls AfxOleLockApp.
	AfxOleLockApp();

	// Get access to the dialog through the application's
	//  main window pointer.  Set the proxy's internal pointer
	//  to point to the dialog, and set the dialog's back pointer to
	//  this proxy.
	ASSERT (AfxGetApp()->m_pMainWnd != NULL);
	ASSERT_VALID (AfxGetApp()->m_pMainWnd);
	ASSERT_KINDOF(CSwordDlg, AfxGetApp()->m_pMainWnd);
	m_pDialog = (CSwordDlg*) AfxGetApp()->m_pMainWnd;
	m_pDialog->m_pAutoProxy = this;
}

CSwordDlgAutoProxy::~CSwordDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CSwordDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CSwordDlgAutoProxy, CCmdTarget)
	//{{AFX_MSG_MAP(CSwordDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CSwordDlgAutoProxy, CCmdTarget)
	//{{AFX_DISPATCH_MAP(CSwordDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_ISword to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {54749446-D1F0-4CB8-A057-2C339BDB7E82}
static const IID IID_ISword =
{ 0x54749446, 0xd1f0, 0x4cb8, { 0xa0, 0x57, 0x2c, 0x33, 0x9b, 0xdb, 0x7e, 0x82 } };

BEGIN_INTERFACE_MAP(CSwordDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CSwordDlgAutoProxy, IID_ISword, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {2832B58F-9AF6-41FA-B877-79B13E6ABA89}
IMPLEMENT_OLECREATE2(CSwordDlgAutoProxy, "Sword.Application", 0x2832b58f, 0x9af6, 0x41fa, 0xb8, 0x77, 0x79, 0xb1, 0x3e, 0x6a, 0xba, 0x89)

/////////////////////////////////////////////////////////////////////////////
// CSwordDlgAutoProxy message handlers
