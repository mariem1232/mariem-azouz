#include "mainwindowarticles.h"
#include "ui_mainwindowarticles.h"
#include "articles.h"
#include <QComboBox>

MainWindowArticles::MainWindowArticles(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowArticles)
{
    ui->setupUi(this);
}

MainWindowArticles::~MainWindowArticles()
{
    delete ui;
}

articles a;

void MainWindowArticles::on_pushButton_clicked()
{
    QString ref=ui->ref->text();
    QString prix=ui->prix->text();
    QString type=ui->type->currentText();
    int quant=ui->quant->text().toInt();
    articles a(ref,prix,type,quant);
    bool test=a.ajouter();
    ui->quant->clear();
    ui->ref->clear();
    ui->prix->clear();
}

void MainWindowArticles::on_pushButton_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
this->ui->tableView->setModel(a.afficher());
}

void MainWindowArticles::on_ajouter_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void MainWindowArticles::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindowArticles::on_modifier_clicked()
{
    QString ref=ui->modifRef->text();
    QString prix=ui->modifPrix->text();
    QString type=ui->modifType->currentText();
    int quant=ui->modifQuant->text().toInt();
    articles a(ref,prix,type,quant);
    bool test=a.modifier();

}

void MainWindowArticles::on_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindowArticles::on_retour_2_clicked()
{
        ui->stackedWidget->setCurrentIndex(2);
}

void MainWindowArticles::on_retour_3_clicked()
{
        ui->stackedWidget->setCurrentIndex(2);
}

void MainWindowArticles::on_modifier_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);

}

void MainWindowArticles::on_supprimer_clicked()
{
    QString ref=ui->refSupprimer->text();
    articles aa;
    aa.supprimer(ref);
}

void MainWindowArticles::on_retour_4_clicked()
{
       ui->stackedWidget->setCurrentIndex(2);
       this->ui->tableView->setModel(a.afficher());
}

void MainWindowArticles::on_supprimer_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}

void MainWindowArticles::on_pushButton_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(2);
}

void MainWindowArticles::on_pushButton_8_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}

void MainWindowArticles::on_pushButton_9_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}

void MainWindowArticles::on_pushButton_11_clicked()
{
      ui->stackedWidget->setCurrentIndex(0);
}

void MainWindowArticles::on_pushButton_14_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindowArticles::on_pushButton_6_clicked()
{
       ui->stackedWidget->setCurrentIndex(8);
}

void MainWindowArticles::on_pushButton_13_clicked()
{
      ui->stackedWidget->setCurrentIndex(9);
}

void MainWindowArticles::on_pushButton_16_clicked()
{
      ui->stackedWidget->setCurrentIndex(0);
}

void MainWindowArticles::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}
