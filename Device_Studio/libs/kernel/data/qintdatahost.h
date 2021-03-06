#ifndef QINTDATAHOST_H
#define QINTDATAHOST_H

#include "qabstractdatahost.h"

class KERNEL_EXPORT QIntDataHost : public QAbstractDataHost
{
    Q_OBJECT
public:
    Q_INVOKABLE QIntDataHost(QAbstractHost * parent = NULL);

    static QAbstractHostInfo * getHostInfo();
protected:
    void    initProperty();
    void    initDefaultValue();
};

#endif // QINTDATAHOST_H
