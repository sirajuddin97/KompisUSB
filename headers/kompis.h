#ifndef KOMPIS_H
#define KOMPIS_H
#include <QMainWindow>
#include <QDateTime>
#include <QDir>
#include <QProcess>

namespace Ui{
    class Kompis;
}

class Kompis : public QMainWindow{
    Q_OBJECT

public:
    explicit Kompis(QWidget *parent = 0);
    ~Kompis();

private slots:
    void on_startKompis_clicked();
    void on_box_elkjopcloud_toggled(bool checked);
    void on_box_fjerncloud_toggled(bool checked);
    void on_box_malw_toggled(bool checked);
    void on_box_fjernmalw_toggled(bool checked);
    void on_box_remotefix_toggled(bool checked);
    void on_box_fjernremote_toggled(bool checked);
    void on_menu_omkompis_triggered();
    void on_menu_innstillinger_triggered();
    void on_menu_oppdatering_triggered();
    void on_modus_nullstill_clicked();
    void on_modus_sa_clicked();
    void on_modus_rtg_clicked();
    void on_modus_service_clicked();

private:
    Ui::Kompis *ui;
    QString name = "KompisUSB";
    QString version = "1.0";
    QString os;
    bool isRunning = false;

    QString getTime();
    void log(QString);
    void loadProgram();

    void install_chrome();
    void install_mozilla();
    void install_elkjopcloud();
    void install_remotefix();
};

#endif
