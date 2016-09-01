#ifndef SUPERTAG_H
#define SUPERTAG_H
#include <QMouseEvent>
#include <QLabel>
class SuperTag:public QLabel{
    Q_OBJECT
public:
    SuperTag(const QString s,QWidget *parent = 0);
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
signals:
    void Click();
};
#endif // SUPERTAG_H
