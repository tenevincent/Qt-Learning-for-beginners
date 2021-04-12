#ifndef PROJECTDETAILS_H
#define PROJECTDETAILS_H

#include <QWidget>

namespace Ui {
class ProjectDetails;
}

class ProjectDetails : public QWidget
{
    Q_OBJECT

public:
    explicit ProjectDetails(QWidget *parent = nullptr);
    ~ProjectDetails();

private:
    Ui::ProjectDetails *ui;
};

#endif // PROJECTDETAILS_H
