#include "message.h"

Message::Message(const QString& text)
    : m_text(text)
{
}

QString Message::getText() const
{
    return m_text;
}
