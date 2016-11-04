#ifndef GAMES_H
#define GAMES_H
#define rutaimagen "C:/Users/estadm.B-71734/Documents/progra/imgs/background.png"
#define fondo2 "C:/Users/estadm.B-71734/Documents/progra/imgs/fondo2.png"
#define fondo3 "C:/Users/estadm.B-71734/Documents/progra/imgs/mago.png"
#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
#include <QPushButton>
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

    void on_btn11_clicked();

    void on_btn12_clicked();

    void on_btn13_clicked();

    void on_btn14_clicked();

    void on_btn21_clicked();

    void on_btn22_clicked();

    void on_btn23_clicked();

    void on_btn24_clicked();

    void on_btn31_clicked();

    void on_btn32_clicked();

    void on_btn33_clicked();

    void on_btn34_clicked();

    void on_btn41_clicked();

    void on_btn42_clicked();

    void on_btn43_clicked();

    void on_btn44_clicked();

    void on_pushButton_clicked();

    void on_btnpagar_clicked();


    void on_btnMago_clicked();

private:
    Ui::games *ui;
    QPushButton *botoncitos[4][4];
    int tipoTorre;
    int seleccionx;
    int selecciony;
    void selec(int x, int y);
    void mover();
    void upgradeTorre();
    bool upgrade;
    void actualizarBotones(QString fondo);
    QLabel *labeles[20];
};

#endif // GAMES_H
