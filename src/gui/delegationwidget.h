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

#ifndef ADMC_DELEGATION_WIDGET_H

#define ADMC_DELEGATION_WIDGET_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE

namespace Ui { class DelegationWidget; }

QT_END_NAMESPACE

namespace admc

{

class DelegationWidget : public QWidget

{

public:

    Q_OBJECT

public:

    explicit DelegationWidget(QWidget* parent = nullptr);

    ~DelegationWidget() override;

private:

    DelegationWidget(const DelegationWidget&)            = delete;   // copy ctor

    DelegationWidget(DelegationWidget&&)                 = delete;   // move ctor

    DelegationWidget& operator=(const DelegationWidget&) = delete;   // copy assignment

    DelegationWidget& operator=(DelegationWidget&&)      = delete;   // move assignment

private:

    Ui::DelegationWidget *ui {nullptr};

};

}

#endif//ADMC_DELEGATION_WIDGET_H
