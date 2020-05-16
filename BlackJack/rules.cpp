#include "rules.h"

Rules::Rules(QWidget *parent) : QTextBrowser(parent)
{

}

void Rules::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape || event->key() == Qt::Key_F1)
    {
        this->hide();
    }
}
