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

#ifndef ADMC_REMOTEDESKTOPSERVICESPROFILE_WIDGET_H

#define ADMC_REMOTEDESKTOPSERVICESPROFILE_WIDGET_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE

namespace Ui { class RemoteDesktopServicesProfileWidget; }

QT_END_NAMESPACE

namespace admc

{

class RemoteDesktopServicesProfileWidget : public QWidget

{

public:

    Q_OBJECT

public:

    explicit RemoteDesktopServicesProfileWidget(QWidget* parent = nullptr);

    ~RemoteDesktopServicesProfileWidget() override;

private:

    RemoteDesktopServicesProfileWidget(const RemoteDesktopServicesProfileWidget&)            = delete;   // copy ctor

    RemoteDesktopServicesProfileWidget(RemoteDesktopServicesProfileWidget&&)                 = delete;   // move ctor

    RemoteDesktopServicesProfileWidget& operator=(const RemoteDesktopServicesProfileWidget&) = delete;   // copy assignment

    RemoteDesktopServicesProfileWidget& operator=(RemoteDesktopServicesProfileWidget&&)      = delete;   // move assignment

private:

    Ui::RemoteDesktopServicesProfileWidget *ui {nullptr};

};

}

#endif//ADMC_REMOTEDESKTOPSERVICESPROFILE_WIDGET_H
