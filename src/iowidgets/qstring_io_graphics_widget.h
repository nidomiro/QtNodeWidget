/*
 * Copyright 2016  Niclas Roßberger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef QSTRINGIOGRAPHICSWIDGET_H
#define QSTRINGIOGRAPHICSWIDGET_H

class QLabel;
class QGraphicsProxyWidget;

class QGraphicsLinearLayout;

#include "../abstract_io_graphics_widget.h"

class QStringIOGraphicsWidget : public AbstractIOGraphicsWidget
{
    Q_OBJECT

public:


protected:
    virtual void createCenterWidget(QGraphicsWidget *centerWidget) override;




private:

    QGraphicsLinearLayout *m_layout = nullptr;

    QLabel *m_label = nullptr;
    QGraphicsProxyWidget *m_labelProxy = nullptr;

};

#endif // QSTRINGIOGRAPHICSWIDGET_H
