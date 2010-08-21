#ifndef EVENTVIEWWINDOW_H
#define EVENTVIEWWINDOW_H

#include <QWidget>

class EventData;
class QSplitter;
class QLabel;
class QListView;
class QTextEdit;
class EventTagsView;

class EventViewWindow : public QWidget
{
    Q_OBJECT

public:
    explicit EventViewWindow(QWidget *parent = 0);

    void setEvent(EventData *event);

protected:
    virtual void closeEvent(QCloseEvent *event);

private:
    EventData *m_event;

    QSplitter *m_splitter;
    QLabel *m_infoLabel;
    EventTagsView *m_tagsView;
    QTextEdit *m_commentsArea, *m_commentInput;

    QWidget *createInfoArea();
    QWidget *createPlaybackArea();
};

#endif // EVENTVIEWWINDOW_H
