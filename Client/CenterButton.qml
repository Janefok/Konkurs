import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Controls.Material 2.1
import QtQuick.Controls.Styles 1.4
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.3
import QtQml.Models 2.2

    RoundButton{
        id:addPersons
        //anchors.fill: parent
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        anchors.bottomMargin: 10
        anchors.rightMargin: view.width/2 - 10
        anchors.horizontalCenter: parent.footer
        //anchors.centerIn: parent.bottom
        Text {
            id: plus
            font.pixelSize: 40
            anchors.centerIn: parent
            color: "white"
            text: "+"
        }
        radius: 30
//        background: Rectangle{
//            //radius:10
//            color: "lightblue"
//        }
//        style:ButtonStyle{
//            color:"lightblue"
//        }
    }

