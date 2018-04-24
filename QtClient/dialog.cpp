#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
#include <QFile>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    socket = new QTcpSocket(this);
     connect(socket, SIGNAL(readyRead()), this, SLOT(readServer()));
    ui->setupUi(this);
    ui->pushButtonSend->setEnabled(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButtonConnect_clicked()
{
    socket->connectToHost(ui->textEditIP->toPlainText(),ui->textEditPort->toPlainText().toInt());
    //enable the button when connect button is clicked
    ui->pushButtonSend->setEnabled(true);

}

void Dialog::on_pushButtonSend_clicked()
{

       QString message = ui->textEditMessage->toPlainText().trimmed();
       QFile file("D:/networkdevice20_12_18_00_370PM.avi");
       if(file.open(QIODevice::ReadOnly))
        {
           QByteArray mydata=file.readAll();
           ui->textEditMessage->setText(QString::number(mydata.size()));
            socket->write(mydata);
       }
      else{ ui->textEditMessage->setText("noo");}
//       if(!message.isEmpty())
//       {
//           socket->write(QString(message + " ").toUtf8());
//       }

       //ui->textEditMessage->clear();
}

void Dialog::readServer()
{
    QTcpSocket *socket = (QTcpSocket*)sender();

   // msg.append(ui->textEdit_chat->toPlainText());

    QByteArray data;
    ui->textEdit_chat->setText("writinh");
    data = socket->readAll();
    if(data.size()!=0)
    {
       ui->textEditMessage->setText(QString::number(data.size()));
    QFile file("D:/Helloo.avi");
    file.open(QIODevice::WriteOnly);
    file.write(data);
    file.close();
    }
    else
    {
        ui->textEditMessage->setText("yoyo");
    }

//    while(socket->canReadLine())
//    {
//         msg.append(socket->readLine());
//    }

    //ui->textEdit_chat->setText(msg);
}
