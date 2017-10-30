#ifndef DERIVACION_H
#define DERIVACION_H

#include <QMainWindow>

namespace Ui {
class derivacion;
}

class derivacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit derivacion(QWidget *parent = 0);
    ~derivacion();
double funcion(double v);//funtion that we use for derivation
double funcion1(double v);//first derivate
  double funcion2(double v);//second derivate
  double funcion3(double v);//third derivate
  double funcion4(double v);//fourth derivate
private:
    Ui::derivacion *ui;

public slots:
    void metodo();//Slot that carries out the numerical method of fixed point
    void borrar(); //Slot that erases the contents of the spinbox and textp
};

#endif // DERIVACION_H
