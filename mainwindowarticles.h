#ifndef MAINWINDOWARTICLES_H
#define MAINWINDOWARTICLES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowArticles; }
QT_END_NAMESPACE

class MainWindowArticles : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowArticles(QWidget *parent = nullptr);
    ~MainWindowArticles();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_ajouter_clicked();



    void on_pushButton_3_clicked();

    void on_modifier_clicked();

    void on_retour_clicked();

    void on_retour_2_clicked();

    void on_retour_3_clicked();

    void on_modifier_2_clicked();

    void on_supprimer_clicked();

    void on_retour_4_clicked();

    void on_supprimer_2_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindowArticles *ui;
};
#endif // MAINWINDOWARTICLES_H
