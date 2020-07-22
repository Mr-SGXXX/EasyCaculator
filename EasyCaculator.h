// EasyCaculator.h : main header file for the EASYCACULATOR application
//

#if !defined(AFX_EASYCACULATOR_H__407ABA9B_B87D_4D9A_906A_49A2C856985A__INCLUDED_)
#define AFX_EASYCACULATOR_H__407ABA9B_B87D_4D9A_906A_49A2C856985A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEasyCaculatorApp:
// See EasyCaculator.cpp for the implementation of this class
//

class CEasyCaculatorApp : public CWinApp
{
public:
	CEasyCaculatorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEasyCaculatorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEasyCaculatorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EASYCACULATOR_H__407ABA9B_B87D_4D9A_906A_49A2C856985A__INCLUDED_)
