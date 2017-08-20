#ifndef MODEL_H
#define MODEL_H

#include <QAbstractListModel>
#include <QQuickItem>
#include <QFile>
#include <QTextStream>
#include <QColor>

class Model : public QAbstractListModel
{
    Q_OBJECT
public:
    Model(QObject *parent = 0);

public:
    virtual int rowCount(const QModelIndex &parent) const;
    virtual QVariant data(const QModelIndex &index, int request) const;

private:
    /* String to store CPU Info */
    QStringList mycpudata;
};

#endif // MODEL_H
