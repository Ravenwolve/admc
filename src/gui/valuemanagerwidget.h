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

#ifndef ADMC_VALUEMANAGER_WIDGET_H

#define ADMC_VALUEMANAGER_WIDGET_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE

namespace Ui { class ValueManagerWidget; }

QT_END_NAMESPACE

namespace admc

{

class ValueManagerWidget : public QWidget

{

public:

    Q_OBJECT

public:

    explicit ValueManagerWidget(QWidget* parent = nullptr);

    ~ValueManagerWidget() override;

private:

    ValueManagerWidget(const ValueManagerWidget&)            = delete;   // copy ctor

    ValueManagerWidget(ValueManagerWidget&&)                 = delete;   // move ctor

    ValueManagerWidget& operator=(const ValueManagerWidget&) = delete;   // copy assignment

    ValueManagerWidget& operator=(ValueManagerWidget&&)      = delete;   // move assignment

private:

    Ui::ValueManagerWidget *ui {nullptr};

};

}

#endif//ADMC_VALUEMANAGER_WIDGET_H
