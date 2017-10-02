import QtQuick 2.6
import QtQuick.Controls 2.0

import io.qt.examples.process 1.0


Item {
    //id: process
    width: main.width
    height: main.height
 //  transformOrigin: Item.Center

    Process {
        id: process
        userName: qsTr("")
    }

    TextField {
        text: process.userName
        anchors.verticalCenterOffset: 103
        anchors.horizontalCenterOffset: 160
        placeholderText: qsTr("User name")
        anchors.centerIn: parent

        onTextChanged: process.userName = text
    }


/*   TableView {
        x: 76
        y: 127
        TableViewColumn {
            role: "title"
            title: "Title"
            width: 100
        }
        TableViewColumn {
            role: "author"
            title: "Author"
            width: 200
        }
        model: libraryModel
    }

*/
}
