// EasyCaculatorDlg.h : header file
//

#if !defined(AFX_EASYCACULATORDLG_H__C422F24C_C261_43E8_B891_87226A36D520__INCLUDED_)
#define AFX_EASYCACULATORDLG_H__C422F24C_C261_43E8_B891_87226A36D520__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CEasyCaculatorDlg dialog

class CEasyCaculatorDlg : public CDialog
{
// Construction
public:
	CEasyCaculatorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEasyCaculatorDlg)
	enum { IDD = IDD_EASYCACULATOR_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEasyCaculatorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEasyCaculatorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EASYCACULATORDLG_H__C422F24C_C261_43E8_B891_87226A36D520__INCLUDED_)
