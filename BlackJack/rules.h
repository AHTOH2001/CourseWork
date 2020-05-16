#ifndef RULES_H
#define RULES_H

#include <QWidget>
#include <QtWidgets/QTextBrowser>
#include <QKeyEvent>

class Rules : public QTextBrowser
{
    Q_OBJECT
public:
    explicit Rules(QWidget *parent = nullptr);
private:
    void keyPressEvent(QKeyEvent *event);
};

#endif // RULES_H
