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

#ifndef ADMC_ENVIRONMENT_WIDGET_H

#define ADMC_ENVIRONMENT_WIDGET_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE

namespace Ui { class EnvironmentWidget; }

QT_END_NAMESPACE

namespace admc

{

class EnvironmentWidget : public QWidget

{

public:

    Q_OBJECT

public:

    explicit EnvironmentWidget(QWidget* parent = nullptr);

    ~EnvironmentWidget() override;

private:

    EnvironmentWidget(const EnvironmentWidget&)            = delete;   // copy ctor

    EnvironmentWidget(EnvironmentWidget&&)                 = delete;   // move ctor

    EnvironmentWidget& operator=(const EnvironmentWidget&) = delete;   // copy assignment

    EnvironmentWidget& operator=(EnvironmentWidget&&)      = delete;   // move assignment

private:

    Ui::EnvironmentWidget *ui {nullptr};

};

}

#endif//ADMC_ENVIRONMENT_WIDGET_H
