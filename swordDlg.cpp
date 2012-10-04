// swordDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sword.h"
#include "swordDlg.h"
#include "DlgProxy.h"
#include "const.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSwordDlg dialog

IMPLEMENT_DYNAMIC(CSwordDlg, CDialog);

CSwordDlg::CSwordDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSwordDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSwordDlg)
	m_strduv = _T("");
	m_strLv = _T("");
	m_strT = _T("");
	m_strx = _T("");
	m_stry = _T("");
	m_strdisprobe = _T("");
	m_fltsyncmode = _T("");
	m_longdismode = _T("");
	m_longdisdigits = _T("");
	m_longaveragingmode = _T("");
	m_strcatype = _T("");
	m_strcaver = _T("");
	m_longnum = _T("");
	m_strid = _T("");
	m_strportid = _T("");
	m_longcalstd = _T("");
	m_longcount = _T("");
	m_strsx = _T("");
	m_strsy = _T("");
	m_strprobeid = _T("");
	m_strserino = _T("");
	m_strz = _T("");
	m_strr = _T("");
	m_strg = _T("");
	m_strb = _T("");
	m_longprobenum = _T("");
	m_strususer = _T("");
	m_strvsuser = _T("");
	m_strlsuser = _T("");
	m_strdeuser = _T("");
	m_strud = _T("");
	m_strvd = _T("");
	m_strfjeita = _T("");
	m_strffma = _T("");
	m_strrad = _T("");
	m_strrd = _T("");
	m_strrfma = _T("");
	m_strrjeita = _T("");
	m_longchannelno = _T("");
	m_strchannelid = _T("");
	m_longtypeno = _T("");
	m_strtypename = _T("");
	m_strRefLv = _T("");
	m_strRefSx = _T("");
	m_strRefSy = _T("");
	m_strAnalogRange1 = _T("");
	m_strAnalogRange2 = _T("");
	m_strAnalogRangeFlk = _T("");
	m_strRefProbe = _T("");
	m_strCalMode = _T("");
	m_strCalProb = _T("");
	m_strBridUnit = _T("");
	m_strFlckrElement = _T("");
	m_strFrequency = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pAutoProxy = NULL;
}

CSwordDlg::~CSwordDlg()
{
	// If there is an automation proxy for this dialog, set
	//  its back pointer to this dialog to NULL, so it knows
	//  the dialog has been deleted.
	if (m_pAutoProxy != NULL)
		m_pAutoProxy->m_pDialog = NULL;
}

void CSwordDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSwordDlg)
	DDX_Text(pDX, IDC_STATIC_DUV, m_strduv);
	DDX_Text(pDX, IDC_STATIC_Lv, m_strLv);
	DDX_Text(pDX, IDC_STATIC_T, m_strT);
	DDX_Text(pDX, IDC_STATIC_X, m_strx);
	DDX_Text(pDX, IDC_STATIC_Y, m_stry);
	DDX_Control(pDX, IDC_XYCONTROL1, m_CxyControl);
	DDX_Control(pDX, IDC_CACONTROL1, m_CCaControl);
	DDX_Text(pDX, IDC_STATIC_CA_DISPROBE, m_strdisprobe);
	DDX_Text(pDX, IDC_STATIC_CA_SYNCMODE, m_fltsyncmode);
	DDX_Text(pDX, IDC_STATIC_CA_DISMODE, m_longdismode);
	DDX_Text(pDX, IDC_STATIC_CA_DISDIGITS, m_longdisdigits);
	DDX_Text(pDX, IDC_STATIC_CA_AVGMODE, m_longaveragingmode);
	DDX_Text(pDX, IDC_STATIC_CATYPE, m_strcatype);
	DDX_Text(pDX, IDC_STATIC_CA_CAVER, m_strcaver);
	DDX_Text(pDX, IDC_STATIC_CA_NUM, m_longnum);
	DDX_Text(pDX, IDC_STATIC_CA_ID, m_strid);
	DDX_Text(pDX, IDC_STATIC_CA_PORTID, m_strportid);
	DDX_Text(pDX, IDC_STATIC_CA_CALSTD, m_longcalstd);
	DDX_Text(pDX, IDC_STATIC_PROBES_COUNT, m_longcount);
	DDX_Text(pDX, IDC_STATIC_SX, m_strsx);
	DDX_Text(pDX, IDC_STATIC_SY, m_strsy);
	DDX_Text(pDX, IDC_STATIC_PROBE_ID, m_strprobeid);
	DDX_Text(pDX, IDC_STATIC_PROBE_SERNO, m_strserino);
	DDX_Text(pDX, IDC_STATIC_Z, m_strz);
	DDX_Text(pDX, IDC_STATIC_R, m_strr);
	DDX_Text(pDX, IDC_STATIC_G, m_strg);
	DDX_Text(pDX, IDC_STATIC_B, m_strb);
	DDX_Text(pDX, IDC_STATIC_PROB_NUM, m_longprobenum);
	DDX_Text(pDX, IDC_STATIC_USUSER, m_strususer);
	DDX_Text(pDX, IDC_STATIC_VSUSER, m_strvsuser);
	DDX_Text(pDX, IDC_STATIC_LSUSER, m_strlsuser);
	DDX_Text(pDX, IDC_STATIC_DEUSER, m_strdeuser);
	DDX_Text(pDX, IDC_STATIC_UD, m_strud);
	DDX_Text(pDX, IDC_STATIC_UV, m_strvd);
	DDX_Text(pDX, IDC_STATIC_FLCKRJEITA, m_strfjeita);
	DDX_Text(pDX, IDC_STATIC_FLCKRFMA, m_strffma);
	DDX_Text(pDX, IDC_STATIC_RAD, m_strrad);
	DDX_Text(pDX, IDC_STATIC_RD, m_strrd);
	DDX_Text(pDX, IDC_STATIC_RFMA, m_strrfma);
	DDX_Text(pDX, IDC_STATIC_RJEITA, m_strrjeita);
	DDX_Text(pDX, IDC_STATIC_MEM_CHNO, m_longchannelno);
	DDX_Text(pDX, IDC_STATIC_MEM_CHID, m_strchannelid);
	DDX_Text(pDX, IDC_STATIC_PROBEINFO_TYPENO, m_longtypeno);
	DDX_Text(pDX, IDC_STATIC_PROBINFO_TYPENAME, m_strtypename);
	DDX_Text(pDX, IDC_STATIC_REFLV, m_strRefLv);
	DDX_Text(pDX, IDC_STATIC_REFSX, m_strRefSx);
	DDX_Text(pDX, IDC_STATIC_REFSY, m_strRefSy);
	DDX_Text(pDX, IDC_STATIC_ANALOG_RNGE1, m_strAnalogRange1);
	DDX_Text(pDX, IDC_STATIC_ANALOG_RNGE2, m_strAnalogRange2);
	DDX_Text(pDX, IDC_STATIC_ANALOG_RANGE_FLK, m_strAnalogRangeFlk);
	DDX_Text(pDX, IDC_STATIC_REF_PROB_SN, m_strRefProbe);
	DDX_Text(pDX, IDC_STATIC_CALMODE, m_strCalMode);
	DDX_Text(pDX, IDC_STATIC_CAL_PROB_SN, m_strCalProb);
	DDX_Text(pDX, IDC_STATIC_CA_BRIG_UNIT, m_strBridUnit);
	DDX_Text(pDX, IDC_STATIC_FLCKRELEM, m_strFlckrElement);
	DDX_Text(pDX, IDC_STATIC_FREQUCNCY, m_strFrequency);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSwordDlg, CDialog)
	//{{AFX_MSG_MAP(CSwordDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON_MSR, OnMsr)
	ON_BN_CLICKED(IDC_BUTTON_CAL0, OnCal0)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSwordDlg message handlers

BOOL CSwordDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_ICa200.CreateDispatch("CA200Srvr.Ca200.1");
	m_ICa200.m_bAutoRelease = TRUE;
	m_ICa200.AutoConnect();

	LPDISPATCH pICa = m_ICa200.GetSingleCa();
	m_ICa.AttachDispatch(pICa);
	
	LPDISPATCH pIProbe = m_ICa.GetSingleProbe();
	m_IProbe.AttachDispatch(pIProbe);
	m_IProbeInfo.AttachDispatch(pIProbe);
	
	LPDISPATCH pMemory = m_ICa.GetMemory();
	m_IMemory.AttachDispatch(pMemory);

// 	m_ICa200.SetConfiguration( 1, "1", PORT_USB, 38400);
// 	m_ICas.AttachDispatch(m_ICa200.GetCas());
// 	m_ICa = m_ICas.GetItemOfNumber(1);
// 	m_IOutputProbes.AttachDispatch(m_ICa.GetOutputProbes());
// 	m_IOutputProbes.RemoveAll();
// 	m_IOutputProbes.Add(m_ICa.GetDisplayProbe());
// 
//     VARIANT vprbid("P1");
// 	LPDISPATCH pOutputProbes = m_IOutputProbes.GetItem(vprbid);
// 	m_IProbe.AttachDispatch(m_IOutputProbes.GetItem(m_IProbe.));
// 	m_IMemory.AttachDispatch(m_ICa.GetMemory());


    
	


	//動態執行0-Cal
 //   m__ICaEvents.ExeCalZero();
	
	m_CCaControl.SetRefCa(&m_ICa.m_lpDispatch);
	m_CCaControl.SetRefProbe(&m_IProbe.m_lpDispatch);
	m_CCaControl.SetRefMemory(&m_IMemory.m_lpDispatch);
	m_CCaControl.UpdateCaInfo();
	m_CCaControl.UpdateMemoryInfo();

	m_CxyControl.SetRefCa(&m_ICa.m_lpDispatch);
	m_CxyControl.SetRefProbe(&m_IProbe.m_lpDispatch);
	m_CxyControl.ClearData();
	m_lIndex = 0;

	//設定 SYNC MODE
	float fsetsyncmode;
	fsetsyncmode = 3.0;//UNIV
	m_ICa.SetSyncMode(fsetsyncmode);


	
	CatchValue();

	UpdateData(FALSE);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSwordDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSwordDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSwordDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

// Automation servers should not exit when a user closes the UI
//  if a controller still holds on to one of its objects.  These
//  message handlers make sure that if the proxy is still in use,
//  then the UI is hidden but the dialog remains around if it
//  is dismissed.

void CSwordDlg::OnClose() 
{
	if (CanExit())
		CDialog::OnClose();
}

void CSwordDlg::OnOK() 
{
	if (CanExit())
		CDialog::OnOK();
}

void CSwordDlg::OnCancel() 
{
	if (CanExit())
		CDialog::OnCancel();
}

BOOL CSwordDlg::CanExit()
{
	// If the proxy object is still around, then the automation
	//  controller is still holding on to this application.  Leave
	//  the dialog around, but hide its UI.
	m_ICa.SetRemoteMode(0);
	if (m_pAutoProxy != NULL)
	{
		ShowWindow(SW_HIDE);
		return FALSE;
	}

	return TRUE;
}

void CSwordDlg::OnMsr() 
{
	// TODO: Add your control notification handler code here
	m_ICa.Measure(0);
	CatchValue();
	m_CxyControl.AddXYGraphData(&m_lIndex);
	m_lIndex++;
// 	float analogRangeFlk = 0.0;
// 													  m_ICa.GetFMAAnalogRange(&analogRangeFlk);
// 													                            m_strAnalogRangeFlk.Format("%x", analogRangeFlk);
}

void CSwordDlg::CatchValue()
{
	//IProbe	
	CString strgetProbid;	strgetProbid= m_IProbe.GetId();			m_strprobeid.Format("%s",strgetProbid);
	CString strgetserNO;	strgetserNO	= m_IProbe.GetSerialNO();	m_strserino.Format("%s",strgetserNO);
	long	lgetpnum;		lgetpnum	= m_IProbe.GetNumber();		m_longprobenum.Format("%ld",lgetpnum);
	
	float	fx;				fx  		= m_IProbe.GetSx();			m_strsx.Format("%f",fx);
	float	fy;				fy  		= m_IProbe.GetSy();			m_strsy.Format("%f",fy);
	long	lT;				lT  		= m_IProbe.GetT();			m_strT.Format("%d",lT);
	
	float	fduv;			fduv		= m_IProbe.GetDuv();		m_strduv.Format("%f",fduv);
	float	fLv;			fLv 		= m_IProbe.GetLv();			m_strLv.Format("%f",fLv);
	
	float	fud;			fud  		= m_IProbe.GetUd();			m_strud.Format("%f",fud);
	float	fvd;			fvd  		= m_IProbe.GetVd();			m_strvd.Format("%f",fvd);
	
	float	fX;				fX			= m_IProbe.GetX();			m_strx.Format("%f",fX);
	float	fY;				fY			= m_IProbe.GetY();			m_stry.Format("%f",fY);
	float	fZ;				fZ			= m_IProbe.GetZ();			m_strz.Format("%f",fZ);
	
	float	fR;				fR			= m_IProbe.GetR();			m_strr.Format("%f",fR);
	float	fG;				fG			= m_IProbe.GetG();			m_strg.Format("%f",fG);
	float	fB;				fB			= m_IProbe.GetB();			m_strb.Format("%f",fB);
	
	float	fdeuser;		fdeuser		= m_IProbe.GetDEUser();		m_strdeuser.Format("%f",fdeuser);
	float	fususer;		fususer		= m_IProbe.GetUsUser();		m_strususer.Format("%f",fususer);
	float	fvsuser;		fvsuser		= m_IProbe.GetVsUser();		m_strvsuser.Format("%f",fvsuser);
	float	flsuser;		flsuser		= m_IProbe.GetLsUser();		m_strlsuser.Format("%f",flsuser);
	
	float	ffjeita;		ffjeita		= m_IProbe.GetFlckrJEITA();	m_strfjeita.Format("%f",ffjeita);
	float	fffma;			fffma		= m_IProbe.GetFlckrFMA();	m_strffma.Format("%f",fffma);
	
	long	lRd;			lRd			= m_IProbe.GetRd();			m_strrd.Format("%ld",lRd);
	long	lRad;			lRad		= m_IProbe.GetRad();		m_strrad.Format("%ld",lRad);
	long	lRfma;			lRfma		= m_IProbe.GetRfma();		m_strrfma.Format("%ld",lRfma);
	
	float sFlckrElement;
	long lFrequency = 6;    
	sFlckrElement = m_IProbe.GetSpectrum(lFrequency);
	m_strFrequency.Format("%ld", lFrequency);
	m_strFlckrElement.Format("%f", sFlckrElement);
	
	//////////////////////////////////////////////////////////////////////////
	//無關測量
	float analogRange1 = 0.0, analogRange2 = 0.0;
 	                                                  m_ICa.GetAnalogRange(&analogRange1, &analogRange2);
													                            m_strAnalogRange1.Format("%f", analogRange1);
																				m_strAnalogRange2.Format("%f", analogRange2);

	//ICa
//  m_ICa.SetAnalyzerCalMode();
// 	m_ICa.ResetAnalyzerCalMode();
// 	m_ICa.ResetLvxyCalMode();
// 	m_ICa.SetAnalyzerCalData(long);  //RGBW
// 	m_ICa.Enter();

																				
    long    brightnessUnit;     brightnessUnit      = m_ICa.GetBrightnessUnit(); m_strBridUnit.Format("%ld", brightnessUnit);


	CString strdisprobe;		strdisprobe			= m_ICa.GetDisplayProbe();	m_strdisprobe.Format("%s",strdisprobe);
	float	fgetsyncmode;  		fgetsyncmode		= m_ICa.GetSyncMode(); 		m_fltsyncmode.Format("%1.0f",fgetsyncmode);
	long	lgetdismode;		lgetdismode			= m_ICa.GetDisplayMode();	m_longdismode.Format("%ld",lgetdismode);
	long	lgetdisdigits;		lgetdisdigits		= m_ICa.GetDisplayDigits();	m_longdisdigits.Format("%ld",lgetdisdigits);
	long	lgetaveragingmode;	lgetaveragingmode	= m_ICa.GetAveragingMode();	m_longaveragingmode.Format("%ld",lgetaveragingmode);
	
	CString strgetcatype;		strgetcatype		= m_ICa.GetCAType();		m_strcatype.Format("%s",strgetcatype);
	CString strgetcaversoion;	strgetcaversoion	= m_ICa.GetCAVersion();		m_strcaver.Format("%s",strgetcaversoion);
	long	lgetnum;			lgetnum				= m_ICa.GetNumber();		m_longnum.Format("%ld",lgetnum);
	CString strgetportid;		strgetportid		= m_ICa.GetPortID();		m_strportid.Format("%s",strgetportid);
	CString strgetCaid;			strgetCaid			= m_ICa.GetId();			m_strid.Format("%s",strgetCaid);
	long	lgetcalstd;			lgetcalstd			= m_ICa.GetCalStandard();	m_longcalstd.Format("%ld",lgetcalstd);
//	m_ICa.GetDisplayProbe()
	
	//IProbes
	long	lgetcount;			lgetcount			= m_IProbes.GetCount();	m_longcount.Format("%lx",lgetcount);
	
	//IMemory
	long	lchannelno;		lchannelno	= m_IMemory.GetChannelNO();	m_longchannelno.Format("%ld",lchannelno);
	CString	schannelid;		schannelid	= m_IMemory.GetChannelID();	m_strchannelid.Format("%s",schannelid);
	float RefSx, RefSy, RefLv;            m_IMemory.GetReferenceColor(m_IProbe.GetId(), &RefSx, &RefSy, &RefLv);
	                                                                m_strRefSx.Format("%f", RefLv);
																	m_strRefSy.Format("%f", RefSx);
																	m_strRefLv.Format("%f", RefSy);
	long lCProbeSNO, lRProbeSNO, lCalMode;
	                                      m_IMemory.GetMemoryStatus(m_IProbe.GetNumber(), &lCProbeSNO, &lRProbeSNO, &lCalMode);
										                                m_strCalProb.Format("%d", lCProbeSNO);
										                                m_strRefProbe.Format("%d", lRProbeSNO);
																		m_strCalMode.Format("%d", lCalMode);
	//IProbeInfo
	long	stypeno;		stypeno		= m_IProbeInfo.GetTypeNO();		m_longtypeno.Format("%d",stypeno);
	CString	ltypename;		ltypename	= m_IProbeInfo.GetTypeName();	m_strtypename.Format("%s",ltypename);

	UpdateData(FALSE);
}

void CSwordDlg::OnCal0() 
{
	// TODO: Add your control notification handler code here
	m_ICa.CalZero();
	m_CxyControl.SetRefCa(&m_ICa.m_lpDispatch);
	m_CxyControl.SetRefProbe(&m_IProbe.m_lpDispatch);
	m_CxyControl.ClearData();
	m_lIndex = 0;
}
