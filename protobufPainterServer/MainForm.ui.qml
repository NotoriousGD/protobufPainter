import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    property alias drawarea: drawarea
    property alias save: save
    property alias showbase: base
    property alias reportb: reporter

    id: item1
    width: 500
    height: 600

    Rectangle {
        id: rectangle1
        height: 55
        color: "#ffffff"
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        Button {
            id: save
            x: 8
            width: 92
            height: 39
            text: qsTr("Save")
            anchors.top: parent.top
            anchors.topMargin: 5
        }

        Item {
            id: drawarea
            anchors.topMargin: 50
            anchors.fill: parent
        }

        Button {
            id: base
            x: 106
            y: 5
            width: 89
            height: 39
            text: qsTr("base")
        }

        Button {
            id: reporter
            x: 201
            y: 5
            width: 96
            height: 39
            text: qsTr("Report")
        }
    }

}
