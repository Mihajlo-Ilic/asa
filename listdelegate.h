#ifndef LISTDELEGATE_H
#define LISTDELEGATE_H

#include <QObject>

class ListDelegate : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString title READ title)
public:
    ListDelegate(QObject* parent = nullptr);

    QString title() const;

    Q_INVOKABLE void setTitle(const QString& title);

    virtual void clicked();
private:
    QString _title;
};

#endif // LISTDELEGATE_H
