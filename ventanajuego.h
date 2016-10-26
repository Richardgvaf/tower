#ifndef VENTANAJUEGO_H
#define VENTANAJUEGO_H

#include <QDialog>

namespace Ui {
class ventanajuego;
}

class ventanajuego : public QDialog
{
    Q_OBJECT

public:
    explicit ventanajuego(QWidget *parent = 0);
    ~ventanajuego();

private slots:
    void on_label_objectNameChanged(const QString &objectName);

private:
    Ui::ventanajuego *ui;
};

#endif // VENTANAJUEGO_H
