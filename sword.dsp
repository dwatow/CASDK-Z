# Microsoft Developer Studio Project File - Name="sword" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=sword - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "sword.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "sword.mak" CFG="sword - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "sword - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "sword - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "sword - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x404 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x404 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "sword - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ  /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ   /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x404 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x404 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "sword - Win32 Release"
# Name "sword - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\_cacontrol.cpp
# End Source File
# Begin Source File

SOURCE=.\_xycontrol.cpp
# End Source File
# Begin Source File

SOURCE=.\ca.cpp
# End Source File
# Begin Source File

SOURCE=.\ca200srvr.cpp
# End Source File
# Begin Source File

SOURCE=.\DlgProxy.cpp
# End Source File
# Begin Source File

SOURCE=.\memory.cpp
# End Source File
# Begin Source File

SOURCE=.\outputprobes.cpp
# End Source File
# Begin Source File

SOURCE=.\probe.cpp
# End Source File
# Begin Source File

SOURCE=.\probes.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\sword.cpp
# End Source File
# Begin Source File

SOURCE=.\sword.odl
# End Source File
# Begin Source File

SOURCE=.\sword.rc
# End Source File
# Begin Source File

SOURCE=.\swordDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\_cacontrol.h
# End Source File
# Begin Source File

SOURCE=.\_xycontrol.h
# End Source File
# Begin Source File

SOURCE=.\ca.h
# End Source File
# Begin Source File

SOURCE=.\ca200srvr.h
# End Source File
# Begin Source File

SOURCE=.\DlgProxy.h
# End Source File
# Begin Source File

SOURCE=.\memory.h
# End Source File
# Begin Source File

SOURCE=.\outputprobes.h
# End Source File
# Begin Source File

SOURCE=.\probe.h
# End Source File
# Begin Source File

SOURCE=.\probes.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\sword.h
# End Source File
# Begin Source File

SOURCE=.\swordDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\sword.ico
# End Source File
# Begin Source File

SOURCE=.\res\sword.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# Begin Source File

SOURCE=.\sword.reg
# End Source File
# End Target
# End Project
# Section sword : {20EA33BB-6914-465A-B98E-8DBD4E386CD0}
# 	2:5:Class:CMemory
# 	2:10:HeaderFile:memory.h
# 	2:8:ImplFile:memory.cpp
# End Section
# Section sword : {745B81BE-B2E5-4655-A8AF-C88C867BCA39}
# 	2:5:Class:C_xyControl
# 	2:10:HeaderFile:_xycontrol.h
# 	2:8:ImplFile:_xycontrol.cpp
# End Section
# Section sword : {1F2F52A5-CE61-45F1-B737-75A56ED77422}
# 	2:21:DefaultSinkHeaderFile:_cacontrol.h
# 	2:16:DefaultSinkClass:C_CaControl
# End Section
# Section sword : {B455EFE8-1576-481C-BAC6-A1C506BF4E81}
# 	2:5:Class:CProbes
# 	2:10:HeaderFile:probes.h
# 	2:8:ImplFile:probes.cpp
# End Section
# Section sword : {A930F0DB-F79A-467A-8479-F8369B063B8D}
# 	2:5:Class:CCa
# 	2:10:HeaderFile:ca.h
# 	2:8:ImplFile:ca.cpp
# End Section
# Section sword : {EF009364-CDD3-43F0-BE96-E6A920B29D60}
# 	2:21:DefaultSinkHeaderFile:_xycontrol.h
# 	2:16:DefaultSinkClass:C_xyControl
# End Section
# Section sword : {A77E545F-15E1-47D0-882E-1CFD59FF43B2}
# 	2:5:Class:C_CaControl
# 	2:10:HeaderFile:_cacontrol.h
# 	2:8:ImplFile:_cacontrol.cpp
# End Section
# Section sword : {3EE4760C-B9F3-47B1-953F-F5A2F83FF688}
# 	2:5:Class:COutputProbes
# 	2:10:HeaderFile:outputprobes.h
# 	2:8:ImplFile:outputprobes.cpp
# End Section
# Section sword : {B2FDD51E-CBA7-45CE-AF0A-DD962E46B74F}
# 	2:5:Class:CProbe
# 	2:10:HeaderFile:probe.h
# 	2:8:ImplFile:probe.cpp
# End Section
