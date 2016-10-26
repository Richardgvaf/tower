#ifndef GAMES_H
#define GAMES_H
#define rutaimagen "C:/Users/estadm.B-71734/Documents/progra/imgs/background.png"
#include <QMainWindow>
#include <QFileDialog>
namespace Ui {
class games;
}

class games : public QMainWindow
{
    Q_OBJECT

public:
    explicit games(QWidget *parent = 0);
    ~games();


private:
    Ui::games *ui;
    QImage imagen;

};

#endif // GAMES_H
