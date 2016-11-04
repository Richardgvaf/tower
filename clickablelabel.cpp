#include "clickablelabel.h"
#include <QDebug>

ClickableLabel::ClickableLabel(const QString& text, QWidget* parent):
 QLabel(parent)
{
    setText(text);
}

ClickableLabel::~ClickableLabel()
{

    //hola
}

void ClickableLabel::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
}
