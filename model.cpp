#include "model.h"

Model::Model(QObject *parent)
    : QAbstractListModel(parent)
{
    /* load the cpuinfo file contents into mycpudata */
    QFile file("/proc/cpuinfo");
    QString cpuinfostr;
    if(file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        cpuinfostr = in.readAll();
        file.close();
        /* Split into row's and skip empty line */
        mycpudata = cpuinfostr.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);
    }
}



int Model::rowCount(const QModelIndex &parent) const
{
    /* To cont the number of lines in the CPUinfo file */
    Q_UNUSED(parent);
    return mycpudata.count();
}


QVariant Model::data(const QModelIndex &index, int request) const
{
    int lines = index.row();

    if(lines < 0 || lines >= mycpudata.count()) {
        /* Nothing to display or index value out of lines count  */
        return QVariant();
    }

    /* display request to access in QML with "model.display"*/
    switch(request) {
        case Qt::DisplayRole:
        return mycpudata.value(lines);
    }

    /* Other request, so return an empty QVariant*/
    return QVariant();
}
