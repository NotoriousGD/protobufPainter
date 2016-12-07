import QtQuick 2.4

Item {
    id: item1
    property alias connectArea: mouseArea1
    property alias ip: textInput1
    property alias text1: text1

    Rectangle {
        id: rectangle2
        x: 200
        y: 161
        width: 300
        height: 58
        color: "#232323"
        anchors.verticalCenterOffset: -50
        anchors.horizontalCenterOffset: 30
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        border.color: "#9d9d9d"
        border.width: 2
    }

    Rectangle {
        id: rectangle1
        width: 360
        height: 80
        color: "#232323"
        radius: 40
        anchors.verticalCenterOffset: 50
        anchors.horizontalCenterOffset: 0
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter

        MouseArea {
            id: mouseArea1
            anchors.fill: parent
            onClicked: {
                client.connect(ip.text)
            }
        }

        Text {
            id: text1
            width: 300
            color: "#ffffff"
            text: qsTr("Connect")
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
            font.pixelSize: 40
        }
    }

    TextInput {
        id: textInput1
        x: 270
        y: 120
        width: 300
        height: 32
        color: "#ffffff"
        text: qsTr("192.168.0.46")
        selectionColor: "#000000"
        anchors.horizontalCenterOffset: 30
        anchors.verticalCenterOffset: -50
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 30
    }

    Text {
        id: text2
        x: 140
        y: 162
        text: qsTr("IP")
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        anchors.horizontalCenterOffset: -155
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenterOffset: -50
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 50
    }


}
