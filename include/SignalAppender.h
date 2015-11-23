#ifndef SIGNALAPPENDER_H
#define SIGNALAPPENDER_H

#include "CuteLogger_global.h"
#include <AbstractStringAppender.h>

#include <QObject>

class CUTELOGGERSHARED_EXPORT SignalAppender : public QObject, public AbstractStringAppender
{
    Q_OBJECT
public:
    SignalAppender(QObject *parent = 0);

protected:
    virtual void append(const QDateTime& timeStamp, Logger::LogLevel logLevel, const char* file, int line,
                        const char* function, const QString& category, const QString& message);

signals:
    void log_message(QString msg);
};

#endif // SIGNALAPPENDER_H
