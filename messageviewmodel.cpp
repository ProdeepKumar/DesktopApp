#include "messageviewmodel.h"

MessageViewModel::MessageViewModel(QObject *parent)
    : QObject(parent)
{
    // Initialize the list of messages
    m_messages.append(new Message("Hello!"));
    m_messages.append(new Message("Welcome to the APP!"));
}

QList<Message*> MessageViewModel::getMessages() const
{
    return m_messages;
}
