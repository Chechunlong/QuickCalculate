#ifndef QUICKCALCULATE_H
#define QUICKCALCULATE_H

#include<QFileDialog>
#include<QMessageBox>

#include<vector>
#include<QDebug>
//��������
#include"qcustomplot.h"
#include<opencv2/opencv.hpp>

#include <QtWidgets/QMainWindow>
#include "ui_quickcalculate.h"

#include"GBK.h"
#include"fstream"
#include "imgshowdlg.h"


using namespace std;
using namespace cv;

class QuickCalculate : public QMainWindow
{
	Q_OBJECT

public:
	QuickCalculate(QWidget *parent = 0);
	~QuickCalculate();

private:
	Ui::QuickCalculateClass ui;

private slots:
	//��������ȷ��
	void on_btnPutNumberOK_clicked();
	//������
	void on_btnGetResult_clicked();
	//������ֱ��
	void on_btn_ShowImg_clicked();
	//�˳�
	void on_btnExit_clicked();

public:
	//����������20�����ݱ���
	double X1, Y1;
	double X2, Y2;
	double X3, Y3;
	double X4, Y4;
	double X5, Y5;
	double X6, Y6;
	double X7, Y7;
	double X8, Y8;
	double X9, Y9;
	double X10, Y10;
	double X11, Y11;
	double X12, Y12;
	double X13, Y13;
	double X14, Y14;
	double X15, Y15;
	double X16, Y16;
	double X17, Y17;
	double X18, Y18; 
	double X19, Y19;
	double X20, Y20;
	//���������Ĳ���ֵ
	double testValue1, testValue2, testValue3, testValue4;
	double testValueT1, testValueT2, testValueT3, testValueT4;

	//����������
	double Lower_Limit1, Upper_Limit1;
	double Lower_Limit2, Upper_Limit2;
	double Lower_Limit3, Upper_Limit3;
	double Lower_Limit4, Upper_Limit4;

	double R11_1, R11_2, R11_3, R11_4;



	//����һ�����������20�����ݵ�
	std::vector<Point2d> Point2dVec;

	//����һ�����������������ĸ���ֵ�Լ���Ӧ�Ĳ���ֵ
	std::vector<Point2d> PntOkValue_TestValue;

	//����һ�����������������ĸ���ֵ�Լ���Ӧ��Upper_limit
	std::vector<Point2d> PntValue_UpperLimit;

	//����һ�����������������ĸ���ֵ�Լ���Ӧ��Lower_Limit
	std::vector<Point2d> PntValue_LowerLimit;

	//���20��������Ϻõ�ֱ�߱ؾ�����һ����
	 cv::Point2d Pnt0;
	//���20��������Ϻ��ֱ��б��
	double k;

	//����ϱ߽����ֱ�߱ؾ����ĵ�
	cv::Point2d PntUpper0;
	//����ϱ߽����ֱ�ߵ�б��
	double k_Upper;

	//����±߽����ֱ�߱ؾ����ĵ�
	cv::Point2d PntLower0;
	//����ϱ߽����ֱ�ߵ�б��
	double k_Lower;



};

#endif // QUICKCALCULATE_H
