import QtQuick 2.5
import QtQuick.Window 2.2
import "qrc:/js/localValuesDots.js" as Dots

Window {
    id:mainwindow
    width:Screen.desktopAvailableWidth
    height:Screen.desktopAvailableHeight
    visible: true
    title: qsTr("proto")
    Item {
        anchors.fill: parent
        DrawerForm{
            function inZone(){
                return !(drawarea.mouseY < 0 || drawarea.mouseY > drawarea.height);
            }

            function addDot(color){
                var component = Qt.createComponent("dot.qml");
                if (component.status == Component.Ready) {
                    var dot = component.createObject(drawarea);
                    Dots.addDot(dot);
                    dot.x = drawarea.mouseX - (dot.width / 2);
                    dot.y = drawarea.mouseY - (dot.height / 2);
                    dot.color = color;
                    client.getModel(dot.x,dot.y,color);
                }
            }

            id:drawform
            anchors.rightMargin: 0
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0

            visible: false

            back.onClicked: {
                visible = false;
                conf.visible = true;
            }

            drawarea.onPositionChanged: {
                if( inZone())
                    addDot(color);
            }

            clear.onClicked: {
                Dots.removeDots();
                client.clear();
            }
        }

        ConnectForm{

            anchors.fill: parent

            id: conf;
            connectArea.onClicked: {
                client.connect(ip.text)
                conf.visible = false;

                drawform.visible = true;
            }
        }

    }


}
