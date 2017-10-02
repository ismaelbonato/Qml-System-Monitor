import QtQuick 2.6
import QtQuick.Controls 2.0
import io.qt.examples.filesystem 1.0


Item {
   // id: rootprocess
    width: 300
    height: 480

    FileSystem {
        id: filesystem
    }

    TextField {
        text: filesystem.userName
        placeholderText: qsTr("User name")
        anchors.centerIn: parent

        onTextChanged: filesystem.userName = text
    }



}
