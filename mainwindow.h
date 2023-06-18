#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeView>
#include <QStandardItemModel>
#include "messageviewmodel.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void channelClicked(const QModelIndex &index);

private:
    QTreeView *m_channelsTreeView;
    QStandardItemModel *m_channelsModel;
    QTreeView *m_messagesTreeView;
    QStandardItemModel *m_messagesModel;
    MessageViewModel *m_viewModel;
};

#endif // MAINWINDOW_H
