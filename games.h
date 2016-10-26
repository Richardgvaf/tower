#ifndef GAMES_H
#define GAMES_H
#define rutaimagen "C:/Users/estadm.B-71734/Documents/progra/imgs/background.png"
#define fondo2 "C:/Users/estadm.B-71734/Documents/progra/imgs/fondo2.png"
#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
namespace Ui {
class games;
}

class games : public QMainWindow
{
    Q_OBJECT

public:
    explicit games(QWidget *parent = 0);
    ~games();


private slots:
    void on_torre_clicked();

private:
    Ui::games *ui;
    QImage imagen;
    QLabel *label[9];

};

#endif // GAMES_H
