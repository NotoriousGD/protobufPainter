import QtQuick 2.0

Item {
    id: item1
    Rectangle {
        id: rectangle1
        x: 0
        y: 0
        width: 200
        height: 200
        color: "#a1a1a1"
    }

    Text {
        id: text1
        x: 87
        y: 93
        text: qsTr("LOAD")
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 30
    }


}
