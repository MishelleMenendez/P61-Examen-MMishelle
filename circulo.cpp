#include "circulo.h"

#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>

Circulo::Circulo()
    :QPoint(0,0)
{
    setYpos(175);
    setxpos(175);

}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{

}

int Circulo::getXpos() const
{
    return xpos;
}

void Circulo::setxpos(int value)
{
    xpos = value;
}

int Circulo::getYpos() const
{
    return ypos;
}

void Circulo::setYpos(int value)
{
    ypos = value;
}
