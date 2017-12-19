import QtQuick 2.6
import QtQuick.Controls 2.0
import QtCharts 2.2


Item {
    id: item1
    //id: process
    width: 600
    height: 480

    ChartView {
        id: chartView
        width: parent.width
        height: parent.height *0.5

        dropShadowEnabled: false
        rotation: 0
        scale: 1
        localizeNumbers: true

        title: "CPU"
        antialiasing: true
        theme: ChartView.ChartThemeQt

        SplineSeries {
            name: "CPU 1"
            axisX: ValueAxis {
                labelFormat: ("%.2d")
                min: 0
                max: 60
                tickCount: 7
            }
            axisY: ValueAxis {
                labelFormat: ("%.2d")
                min: 0
                max: 100
                tickCount: 5
            }
        }
    }

    Timer {
        id: refreshTimer
        interval: 1000 // 60 Hz
        running: true
        repeat: true
        onTriggered: {
            resource.update(chartView.series(0));
            resource.update(chartView.series(1));
        }
    }

}


