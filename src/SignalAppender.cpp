#include "SignalAppender.h"

SignalAppender::SignalAppender(QObject *parent) :
    QObject(parent),
    AbstractStringAppender()
{
}

void SignalAppender::append(const QDateTime& timeStamp, Logger::LogLevel logLevel, const char* file, int line,
                             const char* function, const QString& category, const QString& message)
{
    emit log_message(formattedString(timeStamp, logLevel, file, line, function, category, message));
}
