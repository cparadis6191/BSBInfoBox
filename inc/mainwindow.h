#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVector>
#include <QStack>
#include <QString>


namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    public slots:


    private:
        Ui::MainWindow *ui;
        int displayed_Contact;
        void toggle_Contacts(int contact_Number);
        void display_Contact(int contact_Number);
        void show_All(int contact_Number);
        QVector<QPushButton*> all_Buttons;
        QVector<QLabel*> all_Labels;
        QVector<QStack<QString>* > contact_Notes;

    private slots:
        void on_Button_Contact_01_clicked();
        void on_Button_Contact_02_clicked();
        void on_Button_Contact_03_clicked();
        void on_Button_Contact_04_clicked();
        void on_Button_Contact_05_clicked();
        void on_Button_Contact_06_clicked();
        void on_Button_Contact_07_clicked();
        void on_Button_Contact_08_clicked();
        void on_Button_Contact_09_clicked();
        void on_Button_Contact_10_clicked();
        void on_Button_Close_clicked();
        void on_Button_Save_clicked();

};

#endif // MAINWINDOW_H
