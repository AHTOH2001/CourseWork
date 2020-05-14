#ifndef COURSE_H
#define COURSE_H

#include <QObject>
#include <QRegularExpression>
#include <QMap>
#include <QFile>
#include <QDebug>

class Course : public QObject
{
    Q_OBJECT
public:
    explicit Course(QString rawData,QObject *parent = nullptr);
    QMap<QString,QString> title;
    QMap<QString,double> koef;
    QMap<QString,QString> symbol;
    QMap<int,QString> ind;

signals:

};

#endif // COURSE_H
