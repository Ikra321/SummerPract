#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QContextMenuEvent>
#include "Book.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    // Обработка нажатий клавиш (Пункт 3)
    void keyPressEvent(QKeyEvent *event) override;
    // Обработка правой кнопки мыши (Пункт 5)
    void contextMenuEvent(QContextMenuEvent *event) override;

private slots:
    void on_btnAddTable_clicked();
    void on_btnDelTable_clicked();
    void on_btnAddList_clicked();
    void on_btnDelList_clicked();
    void on_btnSortAsc_clicked();
    void on_btnSortDesc_clicked();
    void on_btnLoadImg_clicked();
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    Book getBookFromInput(); // Вспомогательная функция
};

#endif // MAINWINDOW_H