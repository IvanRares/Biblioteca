#include "QtMessageBox.h"

QtMessageBox::QtMessageBox(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose);
}

QtMessageBox::~QtMessageBox()
{
}

void QtMessageBox::on_okBtn_clicked() {
	close();
}

void QtMessageBox::SetMessage(std::string message)
{
	ui.outputMessage->setText(QString::fromStdString(message));
}
