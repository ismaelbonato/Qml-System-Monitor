import QtQuick 2.6
import QtQuick.Controls 2.0
import io.qt.examples.resource 1.0
import QtCharts 2.2


Item {
    id: item1
    //id: process
    width: 600
    height: 480

    Resource {
        id: resource
    }


    ChartView {
        width: parent.width
        height: parent.height *0.5
        dropShadowEnabled: false
        rotation: 0
        scale: 1
        localizeNumbers: true

        title: "CPU"
        antialiasing: true
        theme: ChartView.ChartThemeDark

        SplineSeries {
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
            name: "CPU 1"
            XYPoint { x: 0; y: 0.0 }
            XYPoint { x: 1.1; y: 3.2 }
            XYPoint { x: 1.9; y: 2.4 }
            XYPoint { x: 2.1; y: 2.1 }
            XYPoint { x: 2.9; y: 2.6 }
            XYPoint { x: 3.4; y: 2.3 }
            XYPoint { x: 4.1; y: 3.1 }
        }

    }

}
