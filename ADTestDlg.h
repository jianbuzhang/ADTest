
// ADTestDlg.h : 头文件
//

#pragma once
#include "CMSComm.h"
#include "afxwin.h"


// CADTestDlg 对话框
class CADTestDlg : public CDialogEx
{
// 构造
public:
	CADTestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADTEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	//******************************

public:
	// MScomm消息变量
	CMSComm m_MSComm;
	DECLARE_EVENTSINK_MAP()
	void OnCommMscomm1();
	//*****************************

	afx_msg void OnBnClickedButtonOpen();
	CComboBox m_ComChoose;
};
