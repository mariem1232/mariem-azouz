#include "articles.h"
#include <QString>
#include <QSqlQuery>
#include <QVariant>
articles::articles()
{
ref="";
prix ="";
type="";
quant=0;
}
articles::articles(QString ref,QString prix,QString type, int quant)
{
    this->ref=ref;
    this->prix=prix;
    this->type=type;
    this->quant=quant;
}

bool articles :: ajouter()
{
    QSqlQuery query;
    QString res1=QString::number(quant);
         query.prepare("INSERT INTO articles(ref, prix, type,quant) "
                       "VALUES (:ref, :prix, :type,:quant)");
         query.bindValue(":ref",ref);
         query.bindValue(":prix",prix);
         query.bindValue(":type", type);
         query.bindValue(":quant", res1);
         return query.exec();
}
QSqlQueryModel * articles :: afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from articles");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ref"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("prix"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("quant"));
    return model;
}
void articles :: supprimer(QString ref)
{
    QSqlQuery query;
    query.prepare("DELETE FROM articles WHERE ref=:ref");
    query.bindValue(":ref",ref);
    query.exec();

}

bool articles :: modifier()
{
    QSqlQuery query;
    QString res1=QString::number(quant);
         query.prepare("UPDATE articles SET prix=:modifPrix, type=:modifType, quant=:modifQuant WHERE ref =:modifRef;");
         query.bindValue(":modifRef",ref);
         query.bindValue(":modifPrix",prix);
         query.bindValue(":modifType",type);
         query.bindValue(":modifQuant",res1);
         return query.exec();
}
