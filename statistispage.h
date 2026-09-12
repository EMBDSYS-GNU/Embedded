#ifndef STATISTISPAGE_H
#define STATISTISPAGE_H

#include <QMainWindow>
#include <QString>
#include <QtGlobal>

namespace Ui {
class statistispage;
}

class statistispage : public QMainWindow
{
    Q_OBJECT

public:
    explicit statistispage(
        qint32 id,
        qint8 result,
        const QString &name,
        qint8 age,
        qint8 math,
        qint8 science,
        qint8 english,
        QWidget *parent = nullptr
        );

    ~statistispage();

private:
    Ui::statistispage *ui;

    qint32 id;
    qint8 result;
    QString name;
    qint8 age;
    qint8 math;
    qint8 science;
    qint8 english;
};

#endif // STATISTISPAGE_H