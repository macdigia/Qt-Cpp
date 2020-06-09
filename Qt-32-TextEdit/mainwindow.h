#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButtonPlainText_toggled(bool checked);

    void on_radioButton_HtmlText_toggled(bool checked);

    void on_radioButton_MarkDown_toggled(bool checked);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString text;
};
#endif // MAINWINDOW_H
