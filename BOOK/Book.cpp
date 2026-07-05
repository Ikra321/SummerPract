#include "Book.h"

Book::Book() : title(""), author(""), pages(0) {}

Book::Book(const QString &title, const QString &author, qint16 pages)
    : title(title), author(author), pages(pages) {}

QString Book::getTitle() const { return title; }
QString Book::getAuthor() const { return author; }
qint16 Book::getPages() const { return pages; }

QString Book::toString() const
{
    return QString("%1 - %2 (%3 стр.)").arg(title, author).arg(pages);
}