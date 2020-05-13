#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include "course.h"

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QUrl>
#include <QDebug>

class Downloader : public QObject
{
    Q_OBJECT
public:
    explicit Downloader(QObject *parent = nullptr);
    Course *course;

signals:
    void onReady(bool error);

public slots:    
    void getData();    
    void onResult(QNetworkReply *reply);

private:    
    QNetworkAccessManager *manager;


};

#endif // DOWNLOADER_H
