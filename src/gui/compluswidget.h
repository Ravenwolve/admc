/***********************************************************************************************************************
**
** Copyright (C) 2024 BaseALT Ltd. <org@basealt.ru>
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
***********************************************************************************************************************/

#ifndef ADMC_COMPLUS_WIDGET_H

#define ADMC_COMPLUS_WIDGET_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE

namespace Ui { class ComPlusWidget; }

QT_END_NAMESPACE

namespace admc

{

class ComPlusWidget : public QWidget

{

public:

    Q_OBJECT

public:

    explicit ComPlusWidget(QWidget* parent = nullptr);

    ~ComPlusWidget() override;

private:

    ComPlusWidget(const ComPlusWidget&)            = delete;   // copy ctor

    ComPlusWidget(ComPlusWidget&&)                 = delete;   // move ctor

    ComPlusWidget& operator=(const ComPlusWidget&) = delete;   // copy assignment

    ComPlusWidget& operator=(ComPlusWidget&&)      = delete;   // move assignment

private:

    Ui::ComPlusWidget *ui {nullptr};

};

}

#endif//ADMC_COMPLUS_WIDGET_H
