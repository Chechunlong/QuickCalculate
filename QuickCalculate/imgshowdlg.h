#ifndef IMGSHOWDLG_H
#define IMGSHOWDLG_H

#include <QDialog>
#include "ui_imgshowdlg.h"
#include "quickcalculate.h"

class imgshowDlg : public QDialog
{
	Q_OBJECT

public:
	imgshowDlg(QWidget *parent = 0);
	~imgshowDlg();

private:
	Ui::imgshowDlg ui;

private slots:
    //���ñ���·��
   void on_btnSetSavePath_clicked();
    //��ʾ���ݵ�
   void on_btnShowImg_clicked();
   //����ͼƬ
   void on_btnSaveImg_clicked();
   //�˳�
   void on_btnQuit_clicked();

public:
	QString imgPath;


};

#endif // IMGSHOWDLG_H
