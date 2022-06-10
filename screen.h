#ifndef SCREEN_H
#define SCREEN_H

#include <QObject>
#include <QList>
#include <QtQml/qqml.h>

enum ScreenType
{
    Undefined = 0,
    View = 1,
    ListViewScreen = 2
};

class Screen : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString title READ title NOTIFY titleChanged)
    Q_PROPERTY(QString subtitle READ subtitle NOTIFY subtitleChanged)
    Q_PROPERTY(bool hasBack READ hasBack NOTIFY hasBackChanged)
    QML_ELEMENT
public:
    explicit Screen(QObject *parent = nullptr);

    void setTitle(const QString& title);
    void setSubtitle(const QString& subtitle);

    QString title() const;
    QString subtitle() const;
    bool hasBack() const;

    ScreenType getType() const;

    Q_INVOKABLE void back();
signals:
    void titleChanged();
    void subtitleChanged();
    void hasBackChanged();

protected:
    bool _hasBack;
    QString _title;
    QString _subtitle;
    ScreenType _type;
};

#endif // SCREEN_H
