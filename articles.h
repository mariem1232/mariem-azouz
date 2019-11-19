#ifndef ARTICLES_H
#define ARTICLES_H
#include <QString>
#include <QObject>
#include <QSqlQueryModel>
#include <QWidget>
#include "connection.h"

class articles
{ QString ref;
    QString prix;
    QString type;
    int quant;
public:
    articles();
    articles(QString, QString, QString, int);
     bool ajouter();
     QSqlQueryModel * afficher();
     void  supprimer(QString ref);
     bool  modifier();
     void setRef(QString Ref) {this->ref=Ref;}
    ~articles(){}
};

#endif // ARTICLES_H
