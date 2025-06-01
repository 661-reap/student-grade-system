# 指定项目使用的 Qt 模块
QT += core gui charts

# 指定 C++ 标准
CONFIG += c++17

# 启用自动生成 MOC、UIC、RCC
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# 项目名称和目标文件
TARGET = StudentManager
TEMPLATE = app

# 源文件列表
SOURCES += \
    analysisdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    student.cpp \
    logindialog.cpp \
    addstudentdialog.cpp \
    comparedialog.cpp

# 头文件列表
HEADERS += \
    analysisdialog.h \
    mainwindow.h \
    student.h \
    logindialog.h \
    addstudentdialog.h \
    comparedialog.h

# UI 文件（Qt Designer 生成的 .ui）
FORMS += \
    analysisdialog.ui \
    mainwindow.ui \
    logindialog.ui \
    addstudentdialog.ui \
    comparedialog.ui

# 资源文件（如 icons、图片等）
RESOURCES += \
    resources.qrc

# 附加文件（如 CSV、配置文件等）
DISTFILES += \
    setCodec.csv

# 目标路径设置（可选）
# macOS/Linux 通用
unix:!android: target.path = /opt/$$TARGET/bin
!isEmpty(target.path): INSTALLS += target

