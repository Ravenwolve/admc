cmake_minimum_required(VERSION 3.5)

project(admc VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
   src/app/main.cpp

   src/gui/accountwidget.h
   src/gui/addresswidget.h
   src/gui/compluswidget.h
   src/gui/computertabwidget.h
   src/gui/delegationwidget.h
   src/gui/dialinwidget.h
   src/gui/entityselectionadvancedwidget.h
   src/gui/entityselectionbasewidget.h
   src/gui/entityselectionsimplewidget.h
   src/gui/environmentwidget.h
   src/gui/generalcomputerwidget.h
   src/gui/generalgroupwidget.h
   src/gui/generaluserwidget.h
   src/gui/grouptabwidget.h
   src/gui/locationwidget.h
   src/gui/logonworkstationwidget.h
   src/gui/mainwindow.h
   src/gui/managedbywidget.h
   src/gui/memberofbasewidget.h
   src/gui/memberofcommonwidget.h
   src/gui/memberofgroupwidget.h
   src/gui/ndtssettingstabwidget.h
   src/gui/operationsystemwidget.h
   src/gui/organizationwidget.h
   src/gui/paramselectionwidget.h
   src/gui/profilewidget.h
   src/gui/remotecontrolwidget.h
   src/gui/remotedesktopservicesprofilewidget.h
   src/gui/sessionswidget.h
   src/gui/staticaddresseswidget.h
   src/gui/staticroutesaddingwidget.h
   src/gui/staticrouteswidget.h
   src/gui/telephoneswidget.h
   src/gui/valuemanagerwidget.h

   src/gui/accountwidget.cpp
   src/gui/addresswidget.cpp
   src/gui/compluswidget.cpp
   src/gui/computertabwidget.cpp
   src/gui/delegationwidget.cpp
   src/gui/dialinwidget.cpp
   src/gui/entityselectionadvancedwidget.cpp
   src/gui/entityselectionbasewidget.cpp
   src/gui/entityselectionsimplewidget.cpp
   src/gui/environmentwidget.cpp
   src/gui/generalcomputerwidget.cpp
   src/gui/generalgroupwidget.cpp
   src/gui/generaluserwidget.cpp
   src/gui/grouptabwidget.cpp
   src/gui/locationwidget.cpp
   src/gui/logonworkstationwidget.cpp
   src/gui/mainwindow.cpp
   src/gui/managedbywidget.cpp
   src/gui/memberofbasewidget.cpp
   src/gui/memberofcommonwidget.cpp
   src/gui/memberofgroupwidget.cpp
   src/gui/ndtssettingstabwidget.cpp
   src/gui/operationsystemwidget.cpp
   src/gui/organizationwidget.cpp
   src/gui/paramselectionwidget.cpp
   src/gui/profilewidget.cpp
   src/gui/remotecontrolwidget.cpp
   src/gui/remotedesktopservicesprofilewidget.cpp
   src/gui/sessionswidget.cpp
   src/gui/staticaddresseswidget.cpp
   src/gui/staticroutesaddingwidget.cpp
   src/gui/staticrouteswidget.cpp
   src/gui/telephoneswidget.cpp
   src/gui/valuemanagerwidget.cpp   

   src/gui/accountwidget.ui
   src/gui/addresswidget.ui
   src/gui/compluswidget.ui
   src/gui/computertabwidget.ui
   src/gui/delegationwidget.ui
   src/gui/dialinwidget.ui
   src/gui/entityselectionadvancedwidget.ui
   src/gui/entityselectionbasewidget.ui
   src/gui/entityselectionsimplewidget.ui
   src/gui/environmentwidget.ui
   src/gui/generalcomputerwidget.ui
   src/gui/generalgroupwidget.ui
   src/gui/generaluserwidget.ui
   src/gui/grouptabwidget.ui
   src/gui/locationwidget.ui
   src/gui/logonworkstationwidget.ui
   src/gui/mainwindow.ui
   src/gui/managedbywidget.ui
   src/gui/memberofbasewidget.ui
   src/gui/memberofcommonwidget.ui
   src/gui/memberofgroupwidget.ui
   src/gui/ndtssettingstabwidget.ui
   src/gui/operationsystemwidget.ui
   src/gui/organizationwidget.ui
   src/gui/paramselectionwidget.ui
   src/gui/profilewidget.ui
   src/gui/remotecontrolwidget.ui
   src/gui/remotedesktopservicesprofilewidget.ui
   src/gui/sessionswidget.ui
   src/gui/staticaddresseswidget.ui
   src/gui/staticroutesaddingwidget.ui
   src/gui/staticrouteswidget.ui
   src/gui/telephoneswidget.ui
   src/gui/valuemanagerwidget.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(admc
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET admc APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(admc SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(admc
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(admc PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.admc)
endif()
set_target_properties(admc PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS admc
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(admc)
endif()
