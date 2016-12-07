import QtQuick 2.5
import QtQuick.Window 2.2

import "qrc:/js/Dots.js" as Dots

Window {
    visible: true
    width: 800
    height: 600
    title: qsTr("protoServer")

    MainForm {
        id:mainform
        anchors.fill: parent
        showbase.onClicked:{
            list.model.clear();
            base.sendAllPics();
            list.visible = true;
            mainform.visible = false
        }
        save.onClicked:{
            base.savePic();
        }
        function addDot(x,y,color){
            var component = Qt.createComponent("dot.qml");
            if (component.status == Component.Ready) {
                var dot = component.createObject(drawarea);
                Dots.addDot(dot);
                dot.x = x - (dot.width / 2);
                dot.y = y - (dot.height / 2);
                dot.color = color;
            }
        }
        Connections{
            target:drawer
            onToQML_drawDot:{
                mainform.addDot(x,y,color)
            }
        }
        Connections{
            target:drawer
            onToQML_clearView:{
                Dots.removeDots();
                console.log("dots removed")
            }
        }
        reportb.onClicked: {
            base.createReport();
        }
    }

    LoadList {
        id:list
        Connections{
            target:base
            onToQML_addPic:{
                var load = Qt.createComponent("load.qml");
                list.model.append({time:time, dbId:baseid})
            }
        }
        back.onClicked: {
            list.visible = false;
            mainform.visible = true;
        }

    }
}
