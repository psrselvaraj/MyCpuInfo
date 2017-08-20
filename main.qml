import QtQuick 2.7
import QtQuick.Window 2.2

Window {
    width: Screen.width / 1.5
    height: Screen.height / 1.5
    visible: true

    MainForm {
        color: "#2ceaf0"
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        border.color: "#090808"
        border.width: 3
        anchors.fill: parent
    }
}

