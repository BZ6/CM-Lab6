#ifndef __MAINWINDOW_HPP_
#define __MAINWINDOW_HPP_

#include "ui_mainwindow.hpp"
#include <QDateTime>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QToolTip>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow final : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow() override = default;

private:
  std::unique_ptr<Ui::MainWindow> ui = std::make_unique<Ui::MainWindow>();
  void draw_chart(const std::vector<std::pair<double, double>> &points,
                  std::string function);

private slots:
  void on_calculate_clicked();
  void on_load_clicked();
  void on_browse_clicked();
  void on_rb_clicked();
};

#endif /* __MAINWINDOW_HPP_ */