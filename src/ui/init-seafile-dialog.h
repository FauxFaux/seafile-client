#ifndef SEAFILE_CLIENT_INIT_SEAFILE_DIALOG_H
#define SEAFILE_CLIENT_INIT_SEAFILE_DIALOG_H

#include <QDialog>
#include "ui_init-seafile-dialog.h"

class InitSeafileDialog : public QDialog,
                          public Ui::InitSeafileDialog
{
    Q_OBJECT

public:
    InitSeafileDialog(QWidget *parent=0);
};

#endif
