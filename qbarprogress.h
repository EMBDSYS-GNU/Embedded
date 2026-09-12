#ifndef QBARPROGRESS_H
#define QBARPROGRESS_H

#include <QMainWindow>

namespace Ui {
class qbarprogress;
}

class qbarprogress : public QMainWindow
{
    Q_OBJECT

public:
    explicit qbarprogress(QWidget *parent = nullptr);
    ~qbarprogress();

private:
    Ui::qbarprogress *ui;
};

#endif // QBARPROGRESS_H
