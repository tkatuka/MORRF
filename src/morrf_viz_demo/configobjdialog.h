#ifndef CONFIGOBJDIALOG_H
#define CONFIGOBJDIALOG_H

#include <QDialog>
#include <QListWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>

class MainWindow;

class ConfigObjDialog : public QDialog {
    Q_OBJECT
public:
    ConfigObjDialog(MainWindow * parent);

    void updateConfiguration();
    void updateDisplay();

private:
    QListWidget * mpListWidget;
    QPushButton * mpBtnAdd;
    QPushButton * mpBtnRemove;
    QPushButton * mpBtnOK;
    QPushButton * mpBtnCancel;

    QCheckBox * mpCheckMinDist;
    QLabel    * mpLabelMinDist;
    QLabel    * mpLabelSubProb;
    QLineEdit * mpLineEditSubProb;
    QLabel    * mpLabelIterationNum;
    QLineEdit * mpLineEditIterationNum;
    QLabel    * mpLabelSegmentLength;
    QLineEdit * mpLineEditSegmentLength;

    QCheckBox   * mpCheckLoadWeightFromFile;
    QLabel      * mpLabelWeightFile;
    QLineEdit   * mpLineEditWeightFile;
    QPushButton * mpBtnOpenWeightFile;

    QLabel    * mpLabelSparsityK;
    QLineEdit * mpLineEditSparsityK;

    QLabel    * mpLabelType;
    QComboBox * mpComboType;

    MainWindow * mpParentWindow;

    bool isCompatible(QString fitnessFile);

public slots:
    //void checkBoxStateChanged(int state);
    void onBtnOKClicked();
    void onBtnCancelClicked();
    void onBtnAddClicked();
    void onBtnRemoveClicked();
    void onLoadWeightToggled(bool checked);
    void onBtnOpenWeightFileClicked();
};

#endif // CONFIGOBJDIALOG_H
