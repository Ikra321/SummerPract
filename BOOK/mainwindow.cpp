#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMenu>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QListWidgetItem>
#include <QStyle>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Настройка таблицы
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"Название", "Автор", "Страницы"});
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    // Добавление элементов в ComboBox (Пункт 6)
    ui->comboBox->addItems({"Жанр: Фантастика", "Жанр: Роман", "Жанр: Научная"});
}

MainWindow::~MainWindow()
{
    delete ui;
}

Book MainWindow::getBookFromInput()
{
    QString title = ui->lineEditTitle->text();
    QString author = ui->lineEditAuthor->text();
    qint16 pages = static_cast<qint16>(ui->spinBoxPages->value());
    return Book(title, author, pages);
}

// Пункт 8: Добавление в таблицу
void MainWindow::on_btnAddTable_clicked()
{
    Book book = getBookFromInput();
    if(book.getTitle().isEmpty()) return;

    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    QTableWidgetItem *itemTitle = new QTableWidgetItem(book.getTitle());
    // Пункт 7: Добавление картинки (иконки) в таблицу
    itemTitle->setIcon(style()->standardIcon(QStyle::SP_FileIcon));

    ui->tableWidget->setItem(row, 0, itemTitle);
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(book.getAuthor()));

    QTableWidgetItem *itemPages = new QTableWidgetItem();
    itemPages->setData(Qt::DisplayRole, book.getPages()); // Числовые данные
    ui->tableWidget->setItem(row, 2, itemPages);
}

// Пункт 8: Удаление из таблицы
void MainWindow::on_btnDelTable_clicked()
{
    int currentRow = ui->tableWidget->currentRow();
    if (currentRow >= 0) {
        ui->tableWidget->removeRow(currentRow);
    }
}

// Пункт 9: Добавление в список
void MainWindow::on_btnAddList_clicked()
{
    Book book = getBookFromInput();
    if(book.getTitle().isEmpty()) return;

    QListWidgetItem *item = new QListWidgetItem(book.toString());
    // Пункт 7: Картинка (иконка) в списке
    item->setIcon(style()->standardIcon(QStyle::SP_MessageBoxInformation));
    ui->listWidget->addItem(item);
}

// Пункт 9: Удаление из списка
void MainWindow::on_btnDelList_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if (item) {
        delete item;
    }
}

// Пункт 11: Сортировка QListWidget по возрастанию
void MainWindow::on_btnSortAsc_clicked()
{
    ui->listWidget->sortItems(Qt::AscendingOrder);
}

// Пункт 11: Сортировка QListWidget по убыванию
void MainWindow::on_btnSortDesc_clicked()
{
    ui->listWidget->sortItems(Qt::DescendingOrder);
}

// Пункт 4: Загрузка готовых картинок из файлов
void MainWindow::on_btnLoadImg_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Выберите изображение", "", "Images (*.png *.xpm *.jpg *.bmp)");
    if (!fileName.isEmpty()) {
        QPixmap pixmap(fileName);
        ui->labelImage->setPixmap(pixmap.scaled(ui->labelImage->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}

// Пункт 6: Обработка ComboBox
void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    // Просто демонстрация работы
}

// Пункт 3: Обработка нажатий клавиш (Удаление по клавише Delete)
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Delete) {
        on_btnDelTable_clicked(); // Пробуем удалить из таблицы
        on_btnDelList_clicked();  // Пробуем удалить из списка
    }
    QMainWindow::keyPressEvent(event);
}

// Пункт 5: Обработка правой кнопки мыши (Всплывающее меню)
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu contextMenu(this);
    QAction *actionClear = new QAction("Очистить поля ввода", this);
    connect(actionClear, &QAction::triggered, this, [this]() {
        ui->lineEditTitle->clear();
        ui->lineEditAuthor->clear();
        ui->spinBoxPages->setValue(0);
    });

    contextMenu.addAction(actionClear);
    contextMenu.exec(event->globalPos());
}

