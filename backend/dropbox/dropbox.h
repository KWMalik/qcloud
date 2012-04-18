#ifndef DROPBOX_H
#define DROPBOX_H

#include "oauthbackend.h"

namespace QJson
{
class Parser;
}

namespace QCloud
{
class App;
}

class Dropbox : public QCloud::OAuthBackend
{
    Q_OBJECT
public:
    explicit Dropbox (QObject* parent = 0);
    virtual ~Dropbox();
    virtual void setApp (QCloud::App* app);
    virtual bool authorize (QWidget* parent = 0);
    virtual bool uploadFile (const QString& filename, const QString& filepath);
    virtual void startAuth (QCloud::OAuthWidget* widget);
    virtual void loadAccountInfo();
    virtual void saveAccountInfo();

private:
    QJson::Parser* m_parser;
    QByteArray m_uid;
    bool m_globalAccess;
};

#endif
