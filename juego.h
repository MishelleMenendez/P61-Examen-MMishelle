#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QDebug>
#include <QPen>
#include <QPoint>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include "configuracion.h"
#include "circulo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    Juego(QWidget *parent = nullptr);
    ~Juego();

private slots:
    void on_btnArriba_released();

    void on_btnAbajo_released();

    void on_btnIzqueirda_released();

    void on_btnDerecha_released();

    void on_actionConfigraci0n_triggered();

    void on_actionSalir_triggered();

    void on_marco_customContextMenuRequested(const QPoint &pos);

private:
    Ui::Juego *ui;
    QPixmap m_lienzo;

    Circulo *m_circulo;
    QPainter painter;
    QImage *m_Imagen;
    void dibujar();

};
#endif // JUEGO_H
