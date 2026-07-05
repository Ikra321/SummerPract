#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book
{
public:
    Book();
    Book(const QString &title, const QString &author, qint16 pages);

    QString getTitle() const;
    QString getAuthor() const;
    qint16 getPages() const;
    QString toString() const;

private:
    QString title;
    QString author;
    qint16 pages;
};

#endif // BOOK_H