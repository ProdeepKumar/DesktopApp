#ifndef MESSAGEVIEWMODEL_H
#define MESSAGEVIEWMODEL_H

#include <QObject>
#include <QList>
#include "message.h"

class MessageViewModel : public QObject
{
    Q_OBJECT

public:
    explicit MessageViewModel(QObject *parent = nullptr);

    Q_INVOKABLE QList<Message*> getMessages() const;

private:
    QList<Message*> m_messages;
};

#endif // MESSAGEVIEWMODEL_H
