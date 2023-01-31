#include "juego.h"
#include "ui_juego.h"

#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    m_lienzo = QPixmap(500,500);
    this->dibujar();
    ui->marco->setPixmap(m_lienzo);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());
}

Juego::~Juego()
{
    delete ui;
}


void Juego::on_btnArriba_released()
{

    dibujar();

}


void Juego::on_btnAbajo_released()
{
    dibujar();
}


void Juego::on_btnIzqueirda_released()
{
    dibujar();
}


void Juego::on_btnDerecha_released()
{
    dibujar();
}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::dibujar()
{
    Configuracion a;
    m_lienzo.fill(Qt::white);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    QPainter painter(&m_lienzo);
    QPen pincel;
    pincel.setColor(a.color());
    pincel.setWidth(40);
    painter.setPen(pincel);
    painter.drawEllipse(m_circulo->getYpos(), m_circulo->getXpos(),m_circulo->getYpos(), m_circulo->getXpos());

}

