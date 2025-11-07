#ifndef CALCULATRICEV2_H
#define CALCULATRICEV2_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CalculatriceV2; }
QT_END_NAMESPACE

class CalculatriceV2 : public QWidget
{
    Q_OBJECT

public:
    CalculatriceV2(QWidget *parent = nullptr);
    ~CalculatriceV2();

private:
    Ui::CalculatriceV2 *ui;
};
#endif // CALCULATRICEV2_H
