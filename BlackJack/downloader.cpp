#include "downloader.h"

Downloader::Downloader(QObject *parent) : QObject(parent)
{    
    manager = new QNetworkAccessManager();    
    connect(manager, &QNetworkAccessManager::finished, this, &Downloader::onResult);
}

void Downloader::getData()
{
    QUrl url("http://resources.finance.ua/ru/public/currency-cash.xml");
    QNetworkRequest request;
    request.setUrl(url);
    manager->get(request);
}

void Downloader::onResult(QNetworkReply *reply)
{    
    if(reply->error()){
        qDebug() << "ERROR";
        qDebug() << reply->errorString();
        course = new Course("",this);
        emit onReady(true);
    } else {
        course = new Course(reply->readAll(),this);
        emit onReady(false);
    }
}









