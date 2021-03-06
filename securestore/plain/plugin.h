#include "iplugin.h"

class PlainStorePlugin: public QObject, public QCloud::IPlugin
{
    Q_OBJECT
    Q_INTERFACES (QCloud::IPlugin)
public:
    virtual QString name() const;
    virtual QString displayName() const;
    virtual QObject* create(QObject* parent);
    virtual PluginCategory category();
};
