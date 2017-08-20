import QtQuick 2.7
import Model 1.0
import QtQuick.Window 2.2

Rectangle {
    id: rect
    color: "#40a9bf"
    radius: 0
    border.width: 2
    property alias view: view
    anchors.fill: parent
    ListView {
        id: view
        anchors.rightMargin: -5
        anchors.bottomMargin: 14
        anchors.leftMargin: 45
        anchors.topMargin: 26

        header:
            // Start of Header Information
            Text {
                color: "#ed0d0d"
                text: "MY CPU INFORMATION"
                font.underline: true
                font.capitalization: Font.AllUppercase
                font.family: "Times New Roman"
                styleColor: "#f50e0e"
                textFormat: Text.RichText
                font.pixelSize: 24
                font.bold: true
            }
        // End of Header Information
        anchors.margins: 20
        anchors.fill: parent
        //Invoking of C++ Model to get CPU Info
        model: Model {}
        delegate: Text {
            text: model.display
        }

    }
}

