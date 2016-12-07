import QtQuick 2.4
import QtQuick.Controls 2.0

Item {
    visible: false
    id: item1
    width: 300
    height: 600
    property alias listview: list
    property alias model: model
    property alias back:back

    ListView {
        id: list
        anchors.rightMargin: 5
        anchors.bottomMargin: 0
        anchors.leftMargin: 5
        anchors.topMargin: 44
        anchors.fill: parent
        delegate: Item {
            id:delegate
            property int delegateIndex: index
            property int databaseId: dbId

            width: parent.width
            height: 40
            Row{
                width: parent.width
                height: 42
                spacing: 2
                Button {
                    width: parent.width-60
                    height: 39
                    text: time
                    font.bold: true
                    id: setpic
                    onClicked: {
                        base.sendPic(databaseId)
                        mainform.visible = true;
                        item1.visible = false;
                    }
                }
                Button {
                    width: 60
                    height: 39
                    text: "delete"
                    font.bold: true
                    id: delpic
                    onClicked: {
                        base.removePic(databaseId)
                        list.model.remove(delegateIndex)
                    }
                }
            }
        }
        model: ListModel {
            id: model
            ListElement {
                time: "Grey"
                dbId:1
            }

            ListElement {
                time: "Red"
                dbId:2
            }

        }
    }

    Button {
        id: back
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 3
        height: 38
        text: qsTr("Back")
    }
}
