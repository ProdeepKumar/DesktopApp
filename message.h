#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>

class Message
{
public:
    Message(const QString& text);

    QString getText() const;

private:
    QString m_text;
};

#endif // MESSAGE_H
