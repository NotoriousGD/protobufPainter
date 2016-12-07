import QtQuick 2.5

Item {
    property alias clear: clear
    property alias back: back

    property string color: "green";

    property alias drawarea: drawarea

    anchors.fill: parent
    Rectangle {
        id: rectangle1
        anchors.fill: parent
        color: "#ffffff"

        Rectangle {
            id: rectangle3
            x: 239
            y: 0
            width: 80
            height: 80
            color: "#d3d3d3"
            anchors.right: parent.right
            anchors.rightMargin: 0
            border.width: 2

            MouseArea {
                id: clear
                anchors.fill: parent
            }

            Text {
                id: text2
                x: 16
                y: 17
                text: qsTr("Clear")
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 20
            }
        }

        Rectangle {
            id: rectangle4
            x: 0
            y: 0
            width: 80
            height: 80
            color: "#d3d3d3"
            border.width: 1

            MouseArea {
                id: back
                width: 80
                height: 80
                anchors.fill: parent
            }

            Text {
                id: text3
                x: 15
                y: 15
                text: qsTr("<")
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 30
            }
        }

        GridView {
            id: gridView1
            height:80
            width: 400
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: 0
            opacity: 1
            clip: true
            visible: true
            cellHeight: 80
            cellWidth: 80
            delegate: Item {
                width: 80
                height: 80
                Column {
                    Rectangle {
                        width: 80
                        height: 80
                        color: colorCode
                        anchors.horizontalCenter: parent.horizontalCenter
                        MouseArea{
                            id:area
                            anchors.fill: parent
                            onClicked: {
                                color = colorCode
                            }
                        }
                    }

                    spacing: 5
                }
            }
            model: ListModel {
                ListElement {
                    colorCode: "green"
                }

                ListElement {
                    colorCode: "blue"
                }

                ListElement {
                    colorCode: "red"
                }

                ListElement {
                    colorCode: "purple"
                }

                ListElement {
                    colorCode: "yellow"
                }
            }
        }
    }

    MouseArea {
        id: drawarea
        anchors.topMargin: 80
        anchors.fill: parent
    }
}
