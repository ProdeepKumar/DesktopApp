#include "mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QPalette> // Add this line for QPalette
#include <QTextEdit> // Add this line for QTextEdit
#include <QToolBar> // Add this line for QToolBar
#include <QToolButton> // Add this line for QToolButton
#include <QImage>
#include <QPixmap>
#include <QHeaderView>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{


    QVBoxLayout *totalLayout = new QVBoxLayout;
    totalLayout->setMargin(0);
    totalLayout->setSpacing(0);

    // Create the main layout
    QGroupBox *mainSection = new QGroupBox();
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->setMargin(0);
    mainLayout->setSpacing(0); // Set spacing between sections to 0

    QGroupBox *upperSection = new QGroupBox();
    QHBoxLayout *upperLayout = new QHBoxLayout;
    upperLayout->setMargin(0);
    upperSection->setFixedHeight(30);    //#301134
    upperSection->setStyleSheet("background-color: #301134; border: none;");

    QHBoxLayout *leftIconsLayout = new QHBoxLayout;  // Nested layout for left icons
    leftIconsLayout->setSpacing(20); // Set equal spacing between icons

    QLabel *threedots = new QLabel;
    QPixmap resizedots(":/Sources/threedot.PNG");
    resizedots = resizedots.scaled(50,20,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    threedots->setPixmap(resizedots);
    threedots->setStyleSheet("padding-right: 100;margin: 0;");

    QLabel *signs = new QLabel;
    QPixmap resizesigns(":/Sources/signs.PNG");
    resizesigns = resizesigns.scaled(70,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    signs->setPixmap(resizesigns);
    signs->setStyleSheet("padding-left: 80; padding-right: 120;");

    QLineEdit *searchBox = new QLineEdit;
    searchBox->setPlaceholderText("Search DesignersKR");
    searchBox->setStyleSheet("color: white; width: 300; padding-left: 20px; border: 0.6px solid black; border-radius: 5px;");

    QLabel *question = new QLabel;
    QPixmap resizequestion(":/Sources/question.PNG");
    resizequestion = resizequestion.scaled(20,20,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    question->setPixmap(resizequestion);
    question->setStyleSheet("padding-left: 0;");

    leftIconsLayout->addStretch(); // Add equal spacing before the icons
    leftIconsLayout->addWidget(threedots);
    leftIconsLayout->addWidget(signs);
    leftIconsLayout->addWidget(searchBox);
    leftIconsLayout->addWidget(question);
    leftIconsLayout->addStretch(); // Add equal spacing after the icons

    QSpacerItem *spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    QLabel *rightIcons = new QLabel;
    QPixmap resizerightIcons(":/Sources/rightIcons.PNG");
    resizerightIcons = resizerightIcons.scaled(50,20,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    rightIcons->setPixmap(resizerightIcons);
    rightIcons->setStyleSheet("padding-right: 10;");

    upperLayout->addLayout(leftIconsLayout);
    upperLayout->addSpacerItem(spacer);
    upperLayout->addWidget(rightIcons);
    upperSection->setLayout(upperLayout);








    // Create the left section
    QGroupBox *leftSection = new QGroupBox();
    QVBoxLayout *leftLayout = new QVBoxLayout;



    QGroupBox *leftofleftSection = new QGroupBox();
    QVBoxLayout *leftofleftLayout = new QVBoxLayout;
    leftofleftSection->setStyleSheet("background-color: #3F0F3F; width: 40;");



    // Create the labels for the PNG images
    QLabel *imageLabel1 = new QLabel;
    QLabel *imageLabel2 = new QLabel;
    QLabel *imageLabel3 = new QLabel;
    QLabel *imageLabel4 = new QLabel;

    // Create the resized images
    QPixmap resizedA(":/Sources/A.PNG");
    QPixmap resizedB(":/Sources/B.PNG");
    QPixmap resizedC(":/Sources/C.PNG");
    QPixmap resizedPlus(":/Sources/+.PNG");

    // Resize the images to 20x20
    int targetWidth = 30;
    int targetHeight = 30;
    resizedA = resizedA.scaled(targetWidth, targetHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    resizedB = resizedB.scaled(targetWidth, targetHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    resizedC = resizedC.scaled(targetWidth, targetHeight, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    resizedPlus = resizedPlus.scaled(25, 25, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    // Set the pixmap for each label
    imageLabel1->setPixmap(resizedA);
    imageLabel2->setPixmap(resizedB);
    imageLabel3->setPixmap(resizedC);
    imageLabel4->setPixmap(resizedPlus);


    // Set the alignment and spacing for the leftofleftLayout
    leftofleftLayout->setAlignment(Qt::AlignTop);  // Align widgets to the top
    leftofleftLayout->setSpacing(6);               // Set spacing between widgets



    // Add the labels to the leftofleft layout
    leftofleftLayout->addWidget(imageLabel1);
    leftofleftLayout->addWidget(imageLabel2);
    leftofleftLayout->addWidget(imageLabel3);
    leftofleftLayout->addWidget(imageLabel4);

    // Set the layout for the leftofleft section
    leftofleftSection->setLayout(leftofleftLayout);


    // Set the background color of the left section
    leftSection->setStyleSheet("background-color: #3F0F3F; border-radius: 0.5;");

    // Set the font color of the left section
    QPalette palette = leftSection->palette();
    palette.setColor(QPalette::WindowText, Qt::white);
    leftSection->setPalette(palette);

    QGroupBox *testboxSection = new QGroupBox;
    testboxSection->setStyleSheet("border-radius: 1;");
    QHBoxLayout * testbox = new QHBoxLayout;
    QLabel *test = new QLabel("Test");
    test->setStyleSheet("font-weight: bold; color: white; font-size: 15px;");
    testbox->addWidget(test);

    QLabel *downarrow = new QLabel;
    QPixmap resizeddownarrow(":/Sources/downarrow.PNG");
    resizeddownarrow = resizeddownarrow.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    downarrow->setPixmap(resizeddownarrow);
    testbox->addWidget(downarrow);

    QLabel *edit = new QLabel;
    QPixmap resizeedit(":/Sources/edit.PNG");
    resizeedit = resizeedit.scaled(40,40,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    edit->setPixmap(resizeedit);
    edit->setStyleSheet("padding-left: 60px;");
    testbox->addWidget(edit);

    testboxSection->setLayout(testbox);
    testboxSection->setAlignment(Qt::AlignTop);


    // Create the options layout
    QVBoxLayout *optionsLayout = new QVBoxLayout;
    optionsLayout->setSpacing(1);

    QLabel *mentionsLabel = new QLabel("Mentions & reactions");
    QLabel *savedItemsLabel = new QLabel("Saved items");
    QLabel *moreLabel = new QLabel("More");



    QHBoxLayout * mention = new QHBoxLayout;
    mention->setAlignment(Qt::AlignLeft);
    QLabel *mentionimg = new QLabel;
    QPixmap resizedmentionimg(":/Sources/mention.PNG");
    resizedmentionimg = resizedmentionimg.scaled(25,25,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    mentionimg->setPixmap(resizedmentionimg);
    mention->addWidget(mentionimg);
    mention->addWidget(mentionsLabel);
    optionsLayout->addLayout(mention);

    QHBoxLayout * saved = new QHBoxLayout;
    saved->setAlignment(Qt::AlignLeft);
    QLabel *savedimg = new QLabel;
    QPixmap resizedsavedimg(":/Sources/saved.PNG");
    resizedsavedimg = resizedsavedimg.scaled(25,25,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    savedimg->setPixmap(resizedsavedimg);
    saved->addWidget(savedimg);
    saved->addWidget(savedItemsLabel);
    optionsLayout->addLayout(saved);

    QHBoxLayout * more = new QHBoxLayout;
    more->setAlignment(Qt::AlignLeft);
    QLabel *moreimg = new QLabel;
    QPixmap resizedmoreimg(":/Sources/more.PNG");
    resizedmoreimg = resizedmoreimg.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    moreimg->setPixmap(resizedmoreimg);
    more->addWidget(moreimg);
    more->addWidget(moreLabel);
    optionsLayout->addLayout(more);


    // Set the font color of the labels in optionsLayout to white
    mentionimg->setStyleSheet("margin: 0px;");
    mentionsLabel->setStyleSheet("color: white; font-weight: bold;");
    savedItemsLabel->setStyleSheet("color: white; font-weight: bold; padding-left: 3px;");
    moreLabel->setStyleSheet("color: white; font-weight: bold; padding-left: 8px;");


    QLabel *channelsLabel = new QLabel("Channels");

    QHBoxLayout * channelsheader = new QHBoxLayout;
    channelsheader->setAlignment(Qt::AlignLeft);
    QLabel *downimg1 = new QLabel;
    QPixmap resizeddownimg1(":/Sources/down.PNG");
    resizeddownimg1 = resizeddownimg1.scaled(15,15,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    downimg1->setPixmap(resizeddownimg1);
    channelsheader->addWidget(downimg1);
    channelsheader->addWidget(channelsLabel);

    channelsLabel->setStyleSheet("color: white; font-weight: bold;");



    // Create the channels tree view
    m_channelsTreeView = new QTreeView();
    m_channelsTreeView->setStyleSheet("border-radius: 0px;");
    m_channelsTreeView->setFixedHeight(150);
    m_channelsModel = new QStandardItemModel(this);
    // Populate the channels model with the channel names
    QStringList channels;
    channels << "#  Channel-1" << "#  Channel-2" << "#  Channel-3" << "#  Channel-4"
             << "#  Channel-5" << "#  Channel-6" << "#  Channel-7";
    for (const QString& channel : channels) {
        QStandardItem *item = new QStandardItem(channel);
        item->setForeground(QBrush(Qt::white)); // Set the font color to white
        m_channelsModel->appendRow(item);
    }
    m_channelsTreeView->setModel(m_channelsModel);
    // Remove the header
    m_channelsTreeView->setHeaderHidden(true);




    // Connect the itemClicked signal of the channels tree view to a slot function
    connect(m_channelsTreeView, &QTreeView::clicked, this, &MainWindow::channelClicked);

    leftLayout->addWidget(testboxSection);
    leftLayout->addLayout(optionsLayout); // Add options layout to the left layout
    leftLayout->addLayout(channelsheader);
    leftLayout->addWidget(m_channelsTreeView); // Set stretch factor of tree view to 1

    // Add the "Add channels" option
    QHBoxLayout *addChannelsLayout = new QHBoxLayout;
    QLabel *addChannelsLabel = new QLabel("Add channels");
    QPushButton *addChannelButton = new QPushButton;
    addChannelButton->setIcon(QIcon(":/Sources/+.PNG")); // Set the "+" icon
    addChannelButton->setFixedWidth(25);
    addChannelButton->setStyleSheet("background-color: #5a1575;");
    addChannelsLabel->setStyleSheet("color: white;");

    addChannelsLayout->addWidget(addChannelButton);
    addChannelsLayout->addWidget(addChannelsLabel);

    leftLayout->addLayout(addChannelsLayout);

    // Add the "Direct messages" list
    QLabel *directMessagesLabel = new QLabel("Direct messages");

    QVBoxLayout *directmsgLayout = new QVBoxLayout;
    QLabel *hhhLabel = new QLabel("HHH");
    QLabel *healLabel = new QLabel("Heal");
    QLabel *kamranLabel = new QLabel("Kamran");



    QHBoxLayout * directmsg3 = new QHBoxLayout;
    directmsg3->setAlignment(Qt::AlignLeft);
    QLabel *downimg = new QLabel;
    QPixmap resizeddownimg(":/Sources/down.PNG");
    resizeddownimg = resizeddownimg.scaled(15,15,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    downimg->setPixmap(resizeddownimg);
    directmsg3->addWidget(downimg);
    directmsg3->addWidget(directMessagesLabel);
    directmsgLayout->addLayout(directmsg3);


    QHBoxLayout * directmsg = new QHBoxLayout;
    directmsg->setAlignment(Qt::AlignLeft);
    QLabel *HHHimg = new QLabel;
    QPixmap resizedHHHimg(":/Sources/HHH.PNG");
    resizedHHHimg = resizedHHHimg.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    HHHimg->setPixmap(resizedHHHimg);
    directmsg->addWidget(HHHimg);
    directmsg->addWidget(hhhLabel);
    directmsgLayout->addLayout(directmsg);

    QHBoxLayout * directmsg1 = new QHBoxLayout;
    directmsg1->setAlignment(Qt::AlignLeft);
    QLabel *Healimg = new QLabel;
    QPixmap resizedHealimg(":/Sources/Heal.PNG");
    resizedHealimg = resizedHealimg.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    Healimg->setPixmap(resizedHealimg);
    directmsg1->addWidget(Healimg);
    directmsg1->addWidget(healLabel);
    directmsgLayout->addLayout(directmsg1);

    QHBoxLayout * directmsg2 = new QHBoxLayout;
    directmsg2->setAlignment(Qt::AlignLeft);
    QLabel *Kamranimg = new QLabel;
    QPixmap resizedKamranimg(":/Sources/Kamran.PNG");
    resizedKamranimg = resizedKamranimg.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    Kamranimg->setPixmap(resizedKamranimg);
    directmsg2->addWidget(Kamranimg);
    directmsg2->addWidget(kamranLabel);
    directmsgLayout->addLayout(directmsg2);



    directmsgLayout->setSpacing(2);


    // Set the font color of the labels in the "Direct messages" list to white
    directMessagesLabel->setStyleSheet("color: white; font-weight: bold;");
    hhhLabel->setStyleSheet("color: white; font-weight: bold;");
    healLabel->setStyleSheet("color: white; font-weight: bold;");
    kamranLabel->setStyleSheet("color: white; font-weight: bold;");


    //leftLayout->addWidget(directMessagesLabel);
    leftLayout->addLayout(directmsgLayout);


    // Add the "Add Teammates" option
    QHBoxLayout *addTeammatesLayout = new QHBoxLayout;
    QLabel *addTeammateslsLabel = new QLabel("Add Teammates");
    QPushButton *addTeammatesButton = new QPushButton;
    addTeammatesButton->setIcon(QIcon(":/Sources/+.PNG")); // Set the "+" icon
    addTeammatesButton->setFixedWidth(25);
    addTeammatesButton->setStyleSheet("background-color: #5a1575;");
    addTeammateslsLabel->setStyleSheet("color: white;");

    addTeammatesLayout->addWidget(addTeammatesButton);
    addTeammatesLayout->addWidget(addTeammateslsLabel);

    leftLayout->addLayout(addTeammatesLayout);

    leftSection->setLayout(leftLayout);
    leftSection->setFixedWidth(300); // Adjust the width as needed







    // Create the right section
    m_messagesTreeView = new QTreeView;
    m_messagesModel = new QStandardItemModel(this);
    QWidget *rightSection = new QWidget;
    QVBoxLayout *rightLayout = new QVBoxLayout(rightSection);

    // Create the top right layout
    QHBoxLayout *topRightLayout = new QHBoxLayout;

    // Create labels for total members and add member icon
    QLabel *channelNameLabel = new QLabel("# Channel-6");
    QLabel *totalMembersLabel = new QLabel("493");
    QLabel *channeldownLabel = new QLabel("13 | 📱 Channel for number 6");


    QHBoxLayout *channelup = new QHBoxLayout;
    channelup->setAlignment(Qt::AlignLeft);
    QLabel *starimg = new QLabel;
    QPixmap resizedstarimg(":/Sources/star.PNG");
    resizedstarimg = resizedstarimg.scaled(20,20,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    starimg->setPixmap(resizedstarimg);
    channelup->addWidget(channelNameLabel);
    channelup->addWidget(starimg);

    QHBoxLayout *channeldown = new QHBoxLayout;
    channeldown->setAlignment(Qt::AlignLeft);
    QLabel *pinimg = new QLabel;
    QPixmap resizedpinimg(":/Sources/pin.PNG");
    resizedpinimg = resizedpinimg.scaled(17,17,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pinimg->setPixmap(resizedpinimg);
    channeldown->addWidget(pinimg);
    channeldown->addWidget(channeldownLabel);

    QVBoxLayout *topcomboleft = new QVBoxLayout;
    topcomboleft->addLayout(channelup);
    topcomboleft->addLayout(channeldown);


    QHBoxLayout *channelspec = new QHBoxLayout;
    channelspec->setAlignment(Qt::AlignRight);
    QLabel *profilesimg = new QLabel;
    QPixmap resizedprofilesimg(":/Sources/profiles.PNG");
    resizedprofilesimg = resizedprofilesimg.scaled(60,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    profilesimg->setPixmap(resizedprofilesimg);
    channelspec->addWidget(profilesimg);
    channelspec->addWidget(totalMembersLabel);

    QLabel *addpeopleimg = new QLabel;
    QPixmap resizedaddpeopleimg(":/Sources/addpeople.PNG");
    resizedaddpeopleimg = resizedaddpeopleimg.scaled(22,22,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    addpeopleimg->setPixmap(resizedaddpeopleimg);
    channelspec->addWidget(addpeopleimg);

    QLabel *infoimg = new QLabel;
    QPixmap resizedinfoimg(":/Sources/info.PNG");
    resizedinfoimg = resizedinfoimg.scaled(22,22,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    infoimg->setPixmap(resizedinfoimg);
    channelspec->addWidget(infoimg);


    totalMembersLabel->setStyleSheet("font-weight: bold;");
    channelNameLabel->setStyleSheet("font-weight: bold;");

    // Add labels to the top right layout
    topRightLayout->addLayout(topcomboleft);
    topRightLayout->addLayout(channelspec);


    // Add widgets to the right layout
    rightLayout->addLayout(topRightLayout);
    //rightLayout->addWidget(m_messagesTreeView);

    QLabel* lineLabel = new QLabel;
    lineLabel->setFixedHeight(2);  // Set the height of the line
    lineLabel->setStyleSheet("border-bottom: 1px solid black;");  // Set the line style


    rightLayout->addWidget(lineLabel);



    // Create the QLabel for the rectangle
    QLabel* rectangleLabel = new QLabel("Monday, March 1st ^");
    rectangleLabel->setAlignment(Qt::AlignCenter);
    rectangleLabel->setFixedHeight(30);
    rectangleLabel->setFixedWidth(160);
    rectangleLabel->setStyleSheet("background-color: white;"
                                  "color: black;"
                                  "border-radius: 15px;"
                                  "border: 0.5px solid black;"
                                  "padding: 5px;");


    // Create a horizontal layout for the lines and the rectangle
    QHBoxLayout* layout = new QHBoxLayout();
    layout->setMargin(0);

    // Create the left line
    QFrame* leftLine = new QFrame();
    leftLine->setFrameShape(QFrame::HLine);
    leftLine->setFrameShadow(QFrame::Sunken);
    leftLine->setStyleSheet("color: black;");

    // Create the right line
    QFrame* rightLine = new QFrame();
    rightLine->setFrameShape(QFrame::HLine);
    rightLine->setFrameShadow(QFrame::Sunken);
    rightLine->setStyleSheet("color: black;");

    // Add the left line, rectangle, and right line to the layout
    layout->addWidget(leftLine);
    layout->addWidget(rectangleLabel);
    layout->addWidget(rightLine);

    // Create a widget to contain the layout
    QWidget* widget = new QWidget();
    widget->setLayout(layout);

    rightLayout->addWidget(widget);





    QHBoxLayout *totalconversation1 = new QHBoxLayout;
    totalconversation1->setAlignment(Qt::AlignLeft);

    QVBoxLayout *leftimg = new QVBoxLayout;
    leftimg->setAlignment(Qt::AlignTop);
    QLabel *kamranimg = new QLabel;
    QPixmap resizedkamranimg(":/Sources/kamran1.PNG");
    resizedkamranimg = resizedkamranimg.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    kamranimg->setPixmap(resizedkamranimg);
    leftimg->addWidget(kamranimg);


    QVBoxLayout *conversation1 = new QVBoxLayout;
    conversation1->setAlignment(Qt::AlignTop);
    QHBoxLayout *nametime = new QHBoxLayout;
    nametime->setAlignment(Qt::AlignLeft);
    QLabel *kamran = new QLabel("Kamran");
    kamran->setStyleSheet("font-weight: bold;");
    QLabel *time = new QLabel("6:49 PM");
    nametime->addWidget(kamran);
    nametime->addWidget(time);

    QLabel *text1 = new QLabel("봄날의 햇살 따라 새벽길을 걷네, 작은 꽃들이 눈부신 향기를 품고 서로 맞닿아 웃네. 나비들은 춤추며 색다른 세계를 만들어가고, 그 속에서\n 나는 풍경에 녹아들어 자유롭게 흘러가네.\n 어린 그림자들이 덧없이 노래하며 흐르고, 푸른 하늘은 감탄을 자아내며 펼쳐진다. 저 멀리 산들은 우리에게 약속을 전하고, 물결처럼 흐르는\n 강물은 시간을 담고 흘러간다.\n 끝없이 이어지는 세상의 수레바퀴, 그 안에서 나는 작은 하나의 이야기가 되어 흘러간다.");

    text1->setStyleSheet("overflow-wrap: break-word;");
    QHBoxLayout *replyrow = new QHBoxLayout;
    replyrow->setAlignment(Qt::AlignLeft);
    QLabel *replypeoples1img = new QLabel;
    QPixmap resizedreplypeoples1img(":/Sources/replypeoples1.PNG");
    resizedreplypeoples1img = resizedreplypeoples1img.scaled(90,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    replypeoples1img->setPixmap(resizedreplypeoples1img);
    replyrow->addWidget(replypeoples1img);

    QLabel *repliescount = new QLabel("3 replies");
    repliescount->setStyleSheet("font-weight: bold; color: #3C71A6;");
    QLabel *lastreplytime = new QLabel("Last reply today at 3:12 AM");
    lastreplytime->setStyleSheet("font-weight: weak;");

    replyrow->addWidget(repliescount);
    replyrow->addWidget(lastreplytime);

    conversation1->addLayout(nametime);
    conversation1->addWidget(text1);
    conversation1->addLayout(replyrow);


    totalconversation1->addLayout(leftimg);
    totalconversation1->addLayout(conversation1);


    rightLayout->addLayout(totalconversation1);



    // Create the QLabel for the rectangle
    QLabel* rectangleLabel1 = new QLabel("Monday, March 1st ^");
    rectangleLabel1->setAlignment(Qt::AlignCenter);
    rectangleLabel1->setFixedHeight(30);
    rectangleLabel1->setFixedWidth(160);
    rectangleLabel1->setStyleSheet("background-color: white;"
                                  "color: black;"
                                  "border-radius: 15px;"
                                  "border: 0.5px solid black;"
                                  "padding: 5px;");


    // Create a horizontal layout for the lines and the rectangle
    QHBoxLayout* layout1 = new QHBoxLayout();
    layout1->setMargin(0);

    // Create the left line
    QFrame* leftLine1 = new QFrame();
    leftLine1->setFrameShape(QFrame::HLine);
    leftLine1->setFrameShadow(QFrame::Sunken);
    leftLine1->setStyleSheet("color: black;");

    // Create the right line
    QFrame* rightLine1 = new QFrame();
    rightLine1->setFrameShape(QFrame::HLine);
    rightLine1->setFrameShadow(QFrame::Sunken);
    rightLine1->setStyleSheet("color: black;");

    // Add the left line, rectangle, and right line to the layout
    layout1->addWidget(leftLine1);
    layout1->addWidget(rectangleLabel1);
    layout1->addWidget(rightLine1);

    // Create a widget to contain the layout
    QWidget* widget1 = new QWidget();
    widget1->setLayout(layout1);

    rightLayout->addWidget(widget1);





    QHBoxLayout *totalconversation2 = new QHBoxLayout;
    totalconversation2->setAlignment(Qt::AlignLeft);

    QVBoxLayout *leftimg1 = new QVBoxLayout;
    leftimg1->setAlignment(Qt::AlignTop);
    QLabel *kamranimg1 = new QLabel;
    QPixmap resizedkamranimg1(":/Sources/kamran1.PNG");
    resizedkamranimg1 = resizedkamranimg1.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    kamranimg1->setPixmap(resizedkamranimg1);
    leftimg1->addWidget(kamranimg1);


    QVBoxLayout *conversation2 = new QVBoxLayout;
    conversation2->setAlignment(Qt::AlignTop);
    QHBoxLayout *nametime1 = new QHBoxLayout;
    nametime1->setAlignment(Qt::AlignLeft);
    QLabel *kamran1 = new QLabel("Kamran");
    kamran1->setStyleSheet("font-weight: bold;");
    QLabel *time1 = new QLabel("6:49 PM");
    nametime1->addWidget(kamran1);
    nametime1->addWidget(time1);

    QLabel *text2 = new QLabel("봄날의 햇살 따라 새벽길을 걷네, 작은 꽃들이 눈부신 향기를 품고 서로 맞닿아 웃네. 나비들은 춤추며 색다른 세계를 만들어가고, 그 속에서\n 나는 풍경에 녹아들어 자유롭게 흘러가네.\n 어린 그림자들이 덧없이 노래하며 흐르고, 푸른 하늘은 감탄을 자아내며 펼쳐진다. 저 멀리 산들은 우리에게 약속을 전하고, 물결처럼 흐르는\n 강물은 시간을 담고 흘러간다.\n 끝없이 이어지는 세상의 수레바퀴, 그 안에서 나는 작은 하나의 이야기가 되어 흘러간다.");

    text2->setStyleSheet("overflow-wrap: break-word;");
    QHBoxLayout *replyrow1 = new QHBoxLayout;
    replyrow1->setAlignment(Qt::AlignLeft);
    QLabel *replypeoples1img1 = new QLabel;
    QPixmap resizedreplypeoples1img1(":/Sources/replypeoples2.PNG");
    resizedreplypeoples1img1 = resizedreplypeoples1img1.scaled(150,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    replypeoples1img1->setPixmap(resizedreplypeoples1img1);
    replyrow1->addWidget(replypeoples1img1);

    QLabel *repliescount1 = new QLabel("8 replies");
    repliescount1->setStyleSheet("font-weight: bold; color: #3C71A6;");
    QLabel *lastreplytime1 = new QLabel("Last reply today at 3:12 AM");
    lastreplytime1->setStyleSheet("font-weight: weak;");

    replyrow1->addWidget(repliescount1);
    replyrow1->addWidget(lastreplytime1);

    conversation2->addLayout(nametime1);
    conversation2->addWidget(text2);
    conversation2->addLayout(replyrow1);


    totalconversation2->addLayout(leftimg1);
    totalconversation2->addLayout(conversation2);


    rightLayout->addLayout(totalconversation2);



    // Create the QLabel for the rectangle
    QLabel* rectangleLabel2 = new QLabel("Today ^");
    rectangleLabel2->setAlignment(Qt::AlignCenter);
    rectangleLabel2->setFixedHeight(30);
    rectangleLabel2->setFixedWidth(80);
    rectangleLabel2->setStyleSheet("background-color: white;"
                                  "color: black;"
                                  "border-radius: 15px;"
                                  "border: 0.5px solid black;"
                                  "padding: 5px;");


    // Create a horizontal layout for the lines and the rectangle
    QHBoxLayout* layout2 = new QHBoxLayout();
    layout2->setMargin(0);

    // Create the left line
    QFrame* leftLine2 = new QFrame();
    leftLine2->setFrameShape(QFrame::HLine);
    leftLine2->setFrameShadow(QFrame::Sunken);
    leftLine2->setStyleSheet("color: red;");

    // Create the right line
    QFrame* rightLine2 = new QFrame();
    rightLine2->setFrameShape(QFrame::HLine);
    rightLine2->setFrameShadow(QFrame::Sunken);
    rightLine2->setStyleSheet("color: red;");

    // Add the left line, rectangle, and right line to the layout
    layout2->addWidget(leftLine2);
    layout2->addWidget(rectangleLabel2);
    layout2->addWidget(rightLine2);

    // Create a widget to contain the layout
    QWidget* widget2 = new QWidget();
    widget2->setLayout(layout2);

    rightLayout->addWidget(widget2);



    QHBoxLayout *totalconversation3 = new QHBoxLayout;
    totalconversation3->setAlignment(Qt::AlignLeft);

    QVBoxLayout *leftimg2 = new QVBoxLayout;
    leftimg2->setAlignment(Qt::AlignTop);
    QLabel *kamranimg2 = new QLabel;
    QPixmap resizedkamranimg2(":/Sources/Heal1.PNG");
    resizedkamranimg2 = resizedkamranimg2.scaled(30,30,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    kamranimg2->setPixmap(resizedkamranimg2);
    leftimg2->addWidget(kamranimg2);


    QVBoxLayout *conversation3 = new QVBoxLayout;
    conversation3->setAlignment(Qt::AlignTop);
    QHBoxLayout *nametime2 = new QHBoxLayout;
    nametime2->setAlignment(Qt::AlignLeft);
    QLabel *kamran2 = new QLabel("Heal");
    kamran2->setStyleSheet("font-weight: bold;");
    QLabel *time2 = new QLabel("6:49 PM");
    nametime2->addWidget(kamran2);
    nametime2->addWidget(time2);

    QLabel *text3 = new QLabel("그 안에서 나는 작은 하나의 이야기가 되어 흘러간다.");
    text3->setStyleSheet("overflow-wrap: break-word;");

    QHBoxLayout *replyrow2 = new QHBoxLayout;
    replyrow2->setAlignment(Qt::AlignLeft);
    QLabel *replyiconimg2 = new QLabel;
    QPixmap resizedreplyiconimg2(":/Sources/likereact.PNG");
    resizedreplyiconimg2 = resizedreplyiconimg2.scaled(80,40,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    replyiconimg2->setPixmap(resizedreplyiconimg2);
    replyrow2->addWidget(replyiconimg2);

    conversation3->addLayout(nametime2);
    conversation3->addWidget(text3);
    conversation3->addLayout(replyrow2);


    totalconversation3->addLayout(leftimg2);
    totalconversation3->addLayout(conversation3);


    rightLayout->addLayout(totalconversation3);

    rightSection->setStyleSheet("background-color: white;");
    rightLayout->setAlignment(Qt::AlignTop);





    // Create the message box
    QWidget *messageBoxWidget = new QWidget;
    QVBoxLayout *messageBoxLayout = new QVBoxLayout(messageBoxWidget);
    messageBoxWidget->setStyleSheet("border: 1px solid black; border-radius: 5px;");
    messageBoxWidget->setFixedHeight(100);

    // Create the text edit for the message box
    QTextEdit *messageTextEdit = new QTextEdit;
    messageTextEdit->setPlaceholderText("Message #uxui_design");
    messageTextEdit->setStyleSheet("background-color: #FFFFFF; border: none;"); // Set the background color of the text edit



    QHBoxLayout *leftpart = new QHBoxLayout;
    leftpart->setAlignment(Qt::AlignLeft);
    QLabel *thundericon = new QLabel;
    thundericon->setStyleSheet("border: none;");
    QPixmap resizedthundericon(":/Sources/thunder.PNG");
    resizedthundericon = resizedthundericon.scaled(25,25,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    thundericon->setPixmap(resizedthundericon);
    leftpart->addWidget(thundericon);

    QLabel *lefticons = new QLabel;
    lefticons->setStyleSheet("border: none;");
    QPixmap resizedlefticons(":/Sources/lefticons.PNG");
    resizedlefticons = resizedlefticons.scaled(225,25,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    lefticons->setPixmap(resizedlefticons);
    leftpart->addWidget(lefticons);

    QHBoxLayout *rightpart = new QHBoxLayout;
    rightpart->setAlignment(Qt::AlignRight);
    QLabel *righticons = new QLabel;
    righticons->setStyleSheet("border: none;");
    QPixmap resizedrighticons(":/Sources/righticonss.PNG");
    resizedrighticons = resizedrighticons.scaled(125,25,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    righticons->setPixmap(resizedrighticons);
    rightpart->addWidget(righticons);


    QHBoxLayout *downpart = new QHBoxLayout;
    downpart->addLayout(leftpart);
    downpart->addLayout(rightpart);




    // Add widgets to the message box layout
    //messageBoxLayout->addWidget(thunderButton);
    messageBoxLayout->addWidget(messageTextEdit);
    messageBoxLayout->addLayout(downpart);

    // Add the message box widget to the right layout
    rightLayout->addWidget(messageBoxWidget);


    // Set up the main layout
    mainLayout->addWidget(leftofleftSection);
    mainLayout->addWidget(leftSection);
    mainLayout->addWidget(rightSection);

    // Set the messages model to the messages tree view
    m_messagesTreeView->setModel(m_messagesModel);

    mainSection->setLayout(mainLayout);

    totalLayout->addWidget(upperSection);
    totalLayout->addWidget(mainSection);

    // Set the main layout
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(totalLayout);
    setCentralWidget(centralWidget);
}

void MainWindow::channelClicked(const QModelIndex &index)
{
    QString channel = index.data().toString();

    // Clear the existing messages model
    m_messagesModel->clear();

    // Remove the "#" from the channel name
    //channel = channel.mid(1);

    // Populate the messages model with the conversation of the selected channel
    // Add appropriate data and formatting as needed.
    if (channel == "#  Channel-1") {
        m_messagesModel->appendRow(new QStandardItem("Conversation of Channel 1"));
    } else if (channel == "#  Channel-2") {
        m_messagesModel->appendRow(new QStandardItem("Conversation of Channel 2"));
    } else if (channel == "#  Channel-3") {
        m_messagesModel->appendRow(new QStandardItem("Conversation of Channel 3"));
    } else if (channel == "#  Channel-4") {
        m_messagesModel->appendRow(new QStandardItem("Conversation of Channel 4"));
    } else if (channel == "#  Channel-5") {
        m_messagesModel->appendRow(new QStandardItem("Conversation of Channel 5"));
    } else if (channel == "#  Channel-6") {
        m_messagesModel->appendRow(new QStandardItem("Kamran  6:49 PM\n봄날의 햇살 따라 새벽길을 걷네, 작은 꽃들이 눈부신 향기를 품고 서로 맞닿아 웃네. 나비들은 춤추며 색다른 세계를 만들어가고, 그 속에서\n 나는 풍경에 녹아들어 자유롭게 흘러가네.\n 어린 그림자들이 덧없이 노래하며 흐르고, 푸른 하늘은 감탄을 자아내며 펼쳐진다. 저 멀리 산들은 우리에게 약속을 전하고, 물결처럼 흐르는\n 강물은 시간을 담고 흘러간다.\n 끝없이 이어지는 세상의 수레바퀴, 그 안에서 나는 작은 하나의 이야기가 되어 흘러간다.\n"));
        m_messagesModel->appendRow(new QStandardItem("Kamran  6:49 PM\n봄날의 햇살 따라 새벽길을 걷네, 작은 꽃들이 눈부신 향기를 품고 서로 맞닿아 웃네. 나비들은 춤추며 색다른 세계를 만들어가고, 그 속에서\n 나는 풍경에 녹아들어 자유롭게 흘러가네.\n 어린 그림자들이 덧없이 노래하며 흐르고, 푸른 하늘은 감탄을 자아내며 펼쳐진다. 저 멀리 산들은 우리에게 약속을 전하고, 물결처럼 흐르는\n 강물은 시간을 담고 흘러간다.\n 끝없이 이어지는 세상의 수레바퀴, 그 안에서 나는 작은 하나의 이야기가 되어 흘러간다.\n"));
        m_messagesModel->appendRow(new QStandardItem("Heal  6:49 PM\n그 안에서 나는 작은 하나의 이야기가 되어 흘러간다."));
    } else if (channel == "#  Channel-7") {
        m_messagesModel->appendRow(new QStandardItem("Conversation of Channel 7"));
    }

    // Add more channel-specific conversation handling as required.

    // Set the messages model to the messages tree view
    m_messagesTreeView->setModel(m_messagesModel);
}

MainWindow::~MainWindow()
{
    delete m_channelsModel;
    delete m_messagesModel;
}
